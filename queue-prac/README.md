## Naive Linear Queue (Array)

This is a **naive** implementation of a linear queue using arrays.  
It relies on shifting values left (towards index `0`) after every `dequeue()`.  

⚠️ **Note:** This is not an efficient queue — `dequeue()` takes **O(n)** time.  
I wrote it as my *first attempt* at building a queue from scratch, so I’m keeping it here for learning/reference.
---
### Features
- `enqueue(x)` → Adds value `x` to the queue (O(1))  
- `dequeue()` → Removes the first element, shifts the rest left (O(n))  
- `peek()` → Returns the first element without removing it (O(1))  
- `is_full()` and `is_empty()` checks  
- `display()` → Prints the current queue contents  
