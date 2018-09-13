Debugging Notes
---

ThreadSanitizer:
- compile with `gcc -fsanitize=thread -pie -fPIE -g test.c`

Memory leaks:
- can use valgrind
