// write a program to find no.of even and odd numbers in an array:

#include <stdio.h>

int main(){

    int arr[100], range, even, odd;

    even = 0, odd = 0;

    printf("Enter No.of Elements: ");
    scanf("%d", &range);

    for(int i = 1; i <= range; i++){
        printf("Enter Element %d : ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i <= range; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Even elements : %d \nOdd elements : %d", odd, even);

    return 0;
}