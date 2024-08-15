<center>
<h3>Memory Allocation<h3>

<>

Memory allocation is an essential concept, especially when dealing with dynamic memory, where the size of required memory might not be known at compile time. Here's a brief overview of key functions related to dynamic memory allocation:

    1. malloc() (Memory Allocation):
    Purpose: Allocates a specified number of bytes of memory and returns a pointer to the first byte of the allocated memory.
    Usage:

    int *ptr = (int *)malloc(sizeof(int) * 10);
    This allocates memory for an array of 10 integers.
    Returns: A pointer to the allocated memory or NULL if the allocation fails.

    2. calloc() (Contiguous Allocation)
    Purpose: Allocates memory for an array of elements, initializes all bytes to zero, and returns a pointer to the first byte.
    Usage:

    int *ptr = (int *)calloc(10, sizeof(int));
    This allocates and zeroes out memory for an array of 10 integers.
    Returns: A pointer to the allocated memory or NULL if the allocation fails.

    3. realloc() (Reallocation)
    Purpose: Resizes the previously allocated memory block to a new size.
    Usage:

    ptr = (int *)realloc(ptr, sizeof(int) * 20);
    This resizes the array to hold 20 integers. The existing contents are preserved up to the minimum of the old and new sizes.
    Returns: A pointer to the newly allocated memory block or NULL if the reallocation fails. The original memory block is unchanged if reallocation fails.

    4. free() (Freeing Memory)
    Purpose: Frees the memory previously allocated by malloc, calloc, or realloc.
    Usage:

    free(ptr);
    This releases the memory pointed to by ptr back to the system. After freeing, the pointer becomes a dangling pointer and should not be used unless reassigned or set to NULL.

</p>

##Why Use Dynamic Memory Allocation?

    Flexibility: Allows you to allocate memory during runtime based on the program's needs, rather than hard-coding sizes at compile time.
    Efficient Use of Memory: Only allocates memory when needed and can resize or free it when no longer required.
</center>