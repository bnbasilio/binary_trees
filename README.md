# 0x1D. C - Binary trees

## Resources:books:
Read or watch:
* [Binary tree](https://intranet.hbtn.io/rltoken/YjCgugjFZBKqIeU2_lF-fQ)
* [Data Structure and Algorithms - Tree](https://intranet.hbtn.io/rltoken/YERnIz9OggXbBoXpiqSMEw)
* [Tree Traversal](https://intranet.hbtn.io/rltoken/pR4-vwFxzbph4FkMF2np1Qi)
* [Binary Search Tree](https://intranet.hbtn.io/rltoken/L2CpULSk9hQEOBKaGI8IkQ)
* [Data structures: Binary Tree](https://intranet.hbtn.io/rltoken/jQNFgIuh8O73TqIaFeQoPAi)

---
## Learning Objectives:bulb:
What you should learn from this project:

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

---

## Data structures

### Basic Binary Tree
```C
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Binary Search Tree
```C
typedef struct binary_tree_s bst_t;
```

### AVL Tree
```C
typedef struct binary_tree_s avl_t;
```

### Max Binary Heap
```C
typedef struct binary_tree_s heap_t;
```

---

### [0. New node](./0-binary_tree_node.c)
* Write a function that creates a binary tree node


### [1. Insert left](./1-binary_tree_insert_left.c)
Write a function that inserts a node as the left-child of another node


### [2. Insert right](./2-binary_tree_insert_right.c)
* All your files, classes, functions must be tested with unit tests 


### [3. Delete](./3-binary_tree_delete.c)
* Write a function that deletes an entire binary tree


### [4. Is leaf](./4-binary_tree_is_leaf.c)
* Write a function that checks if a node is a leaf


### [5. Is root](./5-binary_tree_is_root.c)
* Write a function that checks if a given node is a root


### [6. Pre-order traversal](./6-binary_tree_preorder.c)
* Write a function that goes through a binary tree using pre-order traversal


### [7. In-order traversal](./7-binary_tree_inorder.c)
* Write a function that goes through a binary tree using in-order traversal


### [8. Post-order traversal](./8-binary_tree_postorder.c)
* Write a function that goes through a binary tree using post-order traversal


### [9. Height](./9-binary_tree_height.c)
* Write a function that measures the height of a binary tree 
    

### [10. Depth](./10-binary_tree_depth.c)
* Write a function that measures the depth of a node in a binary tree


### [11. Size](./11-binary_tree_size.c)
* Write a function that measures the size of a binary tree


### [12. Leaves](./12-binary_tree_leaves.c)
* Write a function that counts the leaves in a binary tree


### [13. Nodes](./13-binary_tree_nodes.c)
* Write a function that counts the nodes with at least 1 child in a binary tree


### [14. Balance factor](./14-binary_tree_balance.c)
* Write a function that measures the balance factor of a binary tree


### [15. Is full](./15-binary_tree_is_full.c)
* Write a function that checks if a binary tree is full


### [16. Is perfect](./16-binary_tree_is_perfect.c)
* Write a function that checks if a binary tree is perfect


### [17. Sibling](./17-binary_tree_sibling.c)
* Write a function that finds the sibling of a node


### [18. Uncle](./18-binary_tree_uncle.c)
* Write a function that finds the uncle of a node


### [19. Lowest common ancestor](./100-binary_trees_ancestor.c)
* Write a function that finds the lowest common ancestor of two nodes


### [20. Level-order traversal](./101-binary_tree_levelorder.c)
* Write a function that goes through a binary tree using level-order traversal


### [21. Is complete](./102-binary_tree_is_complete.c)
* Write a function that checks if a binary tree is complete


### [22. Rotate left](./103-binary_tree_rotate_left.c)
* Write a function that performs a left-rotation on a binary tree


### [23. Rotate right](./104-binary_tree_rotate_right.c)
* Write a function that performs a right-rotation on a binary tree


### [24. Is BST](./110-binary_tree_is_bst.c)
* Write a function that checks if a binary tree is a valid Binary Search Tree


### [25. BST - Insert](./111-bst_insert.c)
* Write a function that inserts a value in a Binary Search Tree


### [26. BST - Array to BST](./112-array_to_bst.c)
* Write a function that builds a Binary Search Tree from an array


### [27. BST - Search](./113-bst_search.c)
* Write a function that searches for a value in a Binary Search Tree


### [29. Big O #BST](./113-bst_search.c)
* Average time complexities of insert, delete, search for BST

---

## Authors
* **Bianca Basilio** - [bnbasilio](https://github.com/bnbasilio)
