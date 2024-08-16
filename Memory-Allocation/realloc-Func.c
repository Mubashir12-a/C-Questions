#include <stdio.h>
#include <stdlib.h>

/*
    realloc() allows us to change the size of the memory allocated to a variable by increasing
    or decreasing the number of memory blocks.

    Increasing Size:    You can expand the memory allocation to hold more data. 
                        This may involve moving the memory block to a new location 
                        if additional contiguous space is needed.

    Decreasing Size:    You can reduce the memory allocation, which frees up some 
                        of the previously allocated space.

    example: ' a ' was assigned 8 bytes space with help of malloc or calloc but i want more space 
            so we use realloc where it takes 2 arguments realloc (pointer to change space, how much space);
            if i do (----a = realloc(a, 2 * sizeof(*a))----) 4 bytes = reallocate(address, 2 * 8 bytes) = 16 bytes;
            now ' a ' space is 16 bytes that can hold 4 integers.
*/


int main(){

    int *ptr, n = 1;

    ptr = calloc(n, sizeof(*ptr));

    *ptr = 15;
    printf("%d\n", *ptr);   // 15

    ptr = realloc(ptr, 2 * sizeof(*ptr));  // ptr before realloc = 4 bytes; after realloc = 2 * 4bytes = 8 bytes;

    *(ptr + 1) = *ptr + 5;  // access to next address in ptr array where i stored ptr that was 15 and  + 5 = 20;

    printf("%d\n", *(ptr + 1)); // 20;


    free(ptr);

    printf("%d\n", *ptr);   // Garbage value or program may crash;  because of free() func.

    ptr = NULL;   // Safe to check if the pointer is NULL before use;

    return 0;
}