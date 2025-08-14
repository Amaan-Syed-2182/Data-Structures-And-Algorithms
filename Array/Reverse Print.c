/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
        
    int arr[5];
    int i;


    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }


    printf("\nYou entered:\n");
    for(i = 4; i >= 0; i--) {
        printf("\n%d ", arr[i]);
    }


    return 0;
}
