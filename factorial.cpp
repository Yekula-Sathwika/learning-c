#include<stdio.h>
int main()
{
	int n,i,fact=0;
	printf("enter n =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("factorial of %d is %d",n,fact);
	
}
