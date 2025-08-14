/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5];
    int i,n,s=0;
    
    printf("Enter the Number Values to Enter: ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    {
        printf("\nEnter the Value at Index %d: ",i+1);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++)
    {
        s += a[i] ;
    }
    printf("\nSum of Array Elements is: %d",s);

    return 0;
}
