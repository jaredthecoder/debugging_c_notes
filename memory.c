#include <stdlib.h>

void dummy_function()
{
    int* x = malloc(10 * sizeof(int));
    x[10] = 0;        // error 1:as you can see here we write to an out of bound memory address
}                    // error 2: memory leak the allocated x not freed

int main(void)
{
    dummy_function();
    return 0;
}
