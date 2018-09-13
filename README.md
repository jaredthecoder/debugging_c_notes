Debugging Notes
---

ThreadSanitizer:
- Compile with `gcc -fsanitize=thread -pie -fPIE -g test.c`

Memory leaks or use after free:
- Can use Valgrind or Google's sanitizers
