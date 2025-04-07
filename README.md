# 🌲 C - Binary Trees – Holberton School Project

Welcome to my **Binary Trees** project, part of my journey at **Holberton School**! 🌱  
This repository focuses on building, traversing, and analyzing **binary trees** using the C programming language. It explores both the **theory and implementation** of trees, a fundamental data structure in computer science.

---

## 📚 General Objectives

- What is a **binary tree**
- Differences between **binary trees** and **binary search trees (BSTs)**
- How binary trees compare to **linked lists** in terms of **time complexity**
- Understanding **depth**, **height**, and **size** of a binary tree
- Exploring various **tree traversal methods**
- Recognizing **complete**, **full**, **perfect**, and **balanced** binary trees

---

## ⚙️ Requirements

- Editors: `vi`, `vim`, `emacs`
- Compilation: Ubuntu 20.04 LTS with `gcc` using flags:
  ```sh
  -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- **Betty style** compliance (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables
- Max 5 functions per file
- Standard C library usage allowed
- All function prototypes in `binary_trees.h`
- Header files must be include guarded
- A `README.md` file is required

---

## 🌳 Data Structures Used

```c
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
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

📝 Note: For tasks 0 to 23, we deal with **basic binary trees**, not BSTs — no ordering rules apply.

---

## 🔍 Visualization Tool

You may use the `print_binary_tree()` function provided by Holberton for visualizing your binary trees. This function is **for local testing only** and **should not be pushed** to your repo.

---

## 🚀 Topics Covered

- Tree creation and node insertion
- Tree deletion and freeing memory
- Tree traversal: **preorder**, **inorder**, **postorder**, **level-order**
- Finding the **height**, **depth**, **size**, and **balance factor**
- Identifying if a tree is **full**, **perfect**, or **complete**
- Advanced concepts like **sibling**, **uncle**, and **lowest common ancestor**

---

## 💡 What I Learned

✅ Solid understanding of **binary tree theory** and implementation in C  
✅ Recursive and iterative approaches to **tree traversal**  
✅ How to use **structs** and **pointers** to manage dynamic tree structures  
✅ Debugging and testing in a structured, low-level programming context  

---

## 🛠️ Tools Used

- **C programming**
- **GCC compiler**
- **Emacs** & **Vim** editors
- **Linux (Ubuntu 20.04 LTS)**
- **Betty linter** for style compliance

---

## 📂 Repository Content

This repository includes all the required source files, header file (`binary_trees.h`), and scripts for testing. Each file is documented and organized to align with the project’s structure.

---

## 🔗 GitHub Repository

Feel free to explore the source code here:  
🔗 **GitHub:** [ton-nom-utilisateur](https://github.com/ton-nom-utilisateur)

---

## 📜 License

This project follows Holberton School’s guidelines. All code is for learning and demonstration purposes. 💻🌱

