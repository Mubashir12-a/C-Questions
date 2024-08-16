#include <stdio.h>
#include <stdlib.h>    // For Memory allocation functions;


int main(){

    int n;

    printf("Enter Size: ");
    scanf("%d", &n);

    // int *ptr = malloc(n * sizeof(int));  // Here we need to tell which data type to be calculated for allocation.

    // OR

    int *ptr_2;
    ptr_2 = malloc(n * sizeof(*ptr_2));    // Here if we change ptr_2 data type size will be auto-calculated.

    printf("%d\n", *ptr_2);       // Here Its stores garbage value.

    if(ptr_2 == NULL){
        printf("Memory allocation failed!");
        exit(0);
    } 

    for(int i = 0; i < n; ++i){
        ptr_2[i] = i + 1;
        printf("%d\n", ptr_2[i]);
    }

    /* About i++ & ++i concept:

    Pre-inreament   a = 10;
                    b = ++a;  ---> 11
                    c = b;   ----> 11
                    & a is also now 11;

    post-increament a = 10;
                    b = a++; ----> 10
                    c = b;   ----> 10
                    but a = 11 now 

    */


   free(ptr_2);   // to free memory allocated to an array called *ptr_2;

    return 0;
}