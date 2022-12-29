Binary Search Tree in C


This program demonstrates the implementation of a binary search tree in C. It has functions to create new nodes, insert nodes into the tree, delete nodes from the tree, search for nodes in the tree, and print the tree in a visual format.

Compiling and Running the Program


To compile the program, open a terminal and navigate to the directory containing the source code file. Then, run the following command:

gcc -o bst bst.c
Replace "bst.c" with the name of the source code file. This will create an executable file called "bst".

To run the program, type the following command:

./bst
This will execute the program, which will create a binary search tree and print it in a visual format.

Modifying the Program

You can modify the program by opening the source code file in an editor and making changes as desired. For example, you can change the keys that are inserted into the tree by modifying the calls to the insert function in the main function. You can also add additional functions to the program, such as functions to traverse the tree in different orders or to perform other operations on the tree.

Understanding the Program

The program defines a Node struct with three fields: an integer key, and pointers to left and right child nodes. It also has the following functions:

new_node: This function creates a new node with the given key and initializes its left and right child pointers to NULL.

insert: This function takes a pointer to a tree node and a key, and inserts a new node with the given key into the tree rooted at the given node. If the tree is empty, it creates a new root node with the given key. Otherwise, it compares the key to the key of the root node and inserts the new node into the left or right subtree accordingly.

delete_node: This function takes a pointer to the root node of the tree and a key, and deletes the node with the given key from the tree. If the tree is empty or the key is not found, it returns the root node unchanged. Otherwise, it compares the key to the key of the root node and either deletes the root node or recursively calls itself on the left or right subtree accordingly. If the node to be deleted has two children, it replaces the node with the minimum value node in its right subtree before deleting the node.

search: This function takes a pointer to the root node of the tree and a key, and searches for a node with the given key in the tree. If the tree is empty or the key is found at the root node, it returns the root node. Otherwise, it compares the key to the key of the root node and either returns the root node or recursively calls itself on the left or right subtree accordingly.

print_tree: This function takes a pointer to the root node of the tree and an integer value space, and prints the tree in a visual format using inorder traversal. It first recursively calls itself on the right subtree, then prints the root node, and finally calls itself on the left subtree. The space variable is used to indent the nodes according to their level in the tree.
