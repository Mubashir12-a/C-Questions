#include <stdio.h>
#include <stdlib.h>

/*  What is calloc()?
    calloc() stands for contiguous allocation. 
    It’s a function in C that dynamically allocates memory for an array of elements,
    initializes all bytes to zero, and returns a pointer to the allocated memory.     */



/*
    malloc(): Use when you need raw memory without initialization. (stores garbage value)
    calloc(): Use when you want memory initialized to zero. (initialize it to zero)
*/


int main(){

    int *ptr, n;

    printf("Enter N: ");
    scanf("%d", &n);

    ptr = calloc(n, sizeof(*ptr));  // it also do n * sizeof(*ptr) but internally;

    printf("Before initializing values: %d\n", *ptr); // here it stores 0 on assigned addresses;

    for(int i = 0; i < n; i++){
        ptr[i] = i + 1;
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}
