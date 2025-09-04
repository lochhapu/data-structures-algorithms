Basic array stack implementation in C. Here's what I noticed:

(1) All main operations are constant time.

(2) Only issue I see is that if we do it in an array, we run out of space.
- Can fix this with a linked list implementation, especailly because inserting to and removing from beginning is O(1).
- Maybe using an array list would work as well, if we want something dynamic.
