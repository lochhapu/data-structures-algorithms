## Array Stack (C Implementation)

This is a simple **stack implementation** using arrays in C.

---

### Observations
1. All main operations (`push`, `pop`, `peek`, `is_empty`, `is_full`) are **O(1)** (constant time).
2. Limitation: the stack has a fixed size, so it can **overflow**.
   - This can be fixed with:
     - A **linked list stack** (dynamic size, still O(1) for push/pop).
     - An **array list style** stack (resizing array when needed).

### Features
- `push(x)` → Pushes a value onto the stack.
- `pop()` → Removes and returns the top value.
- `peek()` → Returns the top value without removing it.
- `is_empty()` / `is_full()` → Utility checks.
- `display()` → Prints stack contents.
