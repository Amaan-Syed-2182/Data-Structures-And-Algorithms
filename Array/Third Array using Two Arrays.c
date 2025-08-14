/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5],b[5],c[5];
    int i,n;


    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }


    printf("\nYou entered:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    
    
    printf("\nEnter 5 integers:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &b[i]);
    }


    printf("\nYou entered:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    
    for(i=0;i<5;i++)
    {
        n=4;
        c[i] = a[i]+a[4];
        n--;
    }
    
    for(i=0;i<5;i++)
    {
        printf("\nValue of Array c at Index %d: %d",i+1,c[i]);
    }


    return 0;
}
