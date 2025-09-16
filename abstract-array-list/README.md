# ArrayList (Old Vector Implementation in C++)

This is a custom implementation of a dynamic array (similar to `std::vector`) written in C++.  
It was built as a learning exercise to understand how dynamic arrays work under the hood.  

## Notes
- This is an **inefficient** version of a vector:
  - Uses `malloc/realloc/free` instead of modern C++ memory management.
  - Resizes on every insertion (`O(n)` per `push` instead of amortized `O(1)`).
  - Shifting elements is handled manually in a non-standard way.
- Written in a **C-style C++**, which means it won’t handle complex types correctly
- Error handling uses `exit()`, which is not ideal for production use.
- No copy/move constructors or assignment operators (not rule-of-five compliant).

## Purpose
- Learning exercise to explore:
  - Templates in C++
  - Manual memory management
  - Basic container design

## Future Plans
- Rewrite in **modern C++**:
  - Use `new[]/delete[]` or `std::allocator<T>`
  - Add `capacity` with exponential growth
  - Implement proper copy/move semantics
  - Throw exceptions instead of `exit()`
- Implement a **C version** as a separate exercise.

---

