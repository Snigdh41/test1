#include <stdio.h>
void add(int a,int b)
{
	printf("This is the Sum : %d",(a+b));
}
void main()
{
	printf("Enter the two numbers : \n");
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	add(a,b);
}
