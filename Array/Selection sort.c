/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10],i,loc,n,min,t,j;
    
    printf("\nEnter the Number of Values to Enter (max 10): ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("\nEnter the Number at index %d: ",i+1);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        min = a[i];
        loc = i;
        
        for(j=i+1; j<n; j++)
        {
            if(min>a[j])
            {
                min = a[j];
                loc = j;
            }
        }
        
        t = a[i];
        a[i] = a[loc];
        a[loc] = t;
    }
    
    printf("\nSorted Array is: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}
