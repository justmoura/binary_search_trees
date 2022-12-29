#include <stdio.h>

#include <stdlib.h>

struct Node {
  int key;
  struct Node * left;
  struct Node * right;
};

struct Node * new_node(int key) {
  struct Node * node = (struct Node * ) malloc(sizeof(struct Node));
  node -> key = key;
  node -> left = NULL;
  node -> right = NULL;
  return node;
}

struct Node * insert(struct Node * node, int key) {
  if (node == NULL) {
    return new_node(key);
  }
  if (key < node -> key) {
    node -> left = insert(node -> left, key);
  } else if (key > node -> key) {
    node -> right = insert(node -> right, key);
  }
  return node;
}

struct Node * delete_node(struct Node * root, int key) {
  if (root == NULL) {
    return root;
  }
  if (key < root -> key) {
    root -> left = delete_node(root -> left, key);
  } else if (key > root -> key) {
    root -> right = delete_node(root -> right, key);
  } else {
    if (root -> left == NULL) {
      struct Node * temp = root -> right;
      free(root);
      return temp;
    } else if (root -> right == NULL) {
      struct Node * temp = root -> left;
      free(root);
      return temp;
    }
    struct Node * temp = min_value_node(root -> right);
    root -> key = temp -> key;
    root -> right = delete_node(root -> right, temp -> key);
  }
  return root;
}

struct Node * search(struct Node * root, int key) {
  if (root == NULL || root -> key == key) {
    return root;
  }
  if (root -> key < key) {
    return search(root -> right, key);
  }
  return search(root -> left, key);
}

void print_tree(struct Node * root, int space) {
  if (root == NULL) {
    return;
  }
  space += 10;
  print_tree(root -> right, space);
  printf("\n");
  for (int i = 10; i < space; i++) {
    printf(" ");
  }
  printf("%d\n", root -> key);
  print_tree(root -> left, space);
}

int main() {
    struct Node * root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    print_tree(root, 0);
    printf("\n");
    root = delete_node(root, 20);
    print_tree(root, 0);
    printf("\n");
    struct Node;
}
