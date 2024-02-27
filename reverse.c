#include<stdio.h>
int main()
{
	int n,r;
	int m=0;
	printf("enter any number=");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		m=r+m*10;
		n=n/10;
	}
	printf("The reverse of number is=%d",m);
	return 0;
		
}
