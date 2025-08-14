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
    int i,n,o_s,e_s;
    
    for(i=0;i<5;i++)
    {
        printf("Enter The Value at %d: ",i+1);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            e_s += a[i];
        }
        else
        {
            o_s += a[i];
        }
        
    }
    printf("\nOdd Sum is: %d",o_s);
    printf("\nEven Sum is: %d",e_s);

    return 0;
}
