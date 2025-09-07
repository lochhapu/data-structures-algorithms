# Singly Linked List in C

A simple implementation of a **singly linked list** in C for practice and learning.  
This project includes basic operations like inserting, removing, searching, and freeing memory.

---

## Features ✨

### 🔹 Insertion
- `insert_beg(&list, x)` → Insert `x` at the **beginning**  
- `insert_end(&list, x)` → Insert `x` at the **end**

### 🔹 Removal
- `rem_beg(&list)` → Remove the **first node**  
- `rem_end(&list)` → Remove the **last node**  
- `rem_value(&list, x)` → Remove the **first occurrence** of value `x`  
- *(Future)* `rem_all(&list, x)` → Remove **all occurrences** of value `x`

### 🔹 Other Utilities
- `search_list(list, x)` → Find if value `x` exists in the list  
- `print_list(list)` → Print all values in the list  
- `free_list(list)` → Free the entire list from memory

---

## Usage 🛠️

1. Initialize the list to `NULL` before using it:
   ```c
   Node *list = NULL;
