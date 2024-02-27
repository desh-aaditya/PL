#include<stdio.h>
int main()                                   
{
	int n,r,u;
	int m=0;
	printf("enter any number=");
	scanf("%d",&n);
	u=n;
	while(n!=0)
	{
	r=n%10;
	m=r+m*10;
	n=n/10;
	}
	if(u==m)
	{
		printf("\n Number is palindrome");
	}
	else
	{
		printf("\n Number is not palindrome");
	}
}
