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
	int i,k,out,count;


	printf("Enter 5 integers:\n");
	for(i = 0; i < 5; i++) {
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}

	printf("\nYou entered:\n");


	printf("\nEnter the Element To Search: ");
	scanf("%d",&k);


	for(i = 0; i < 5; i++)
	{
		if(a[i] == k)
		{
			printf("\nElement found at Index %d",i+1);
			out += 1;
			count+=1;

		}
	}

	if(out == 0)
	{
		printf("\nElement Not Present in Array...");
	}

	if(count!=0)
	{
		printf("\nElement Frequency in Array is %d",count);
	}


	return 0;
}
