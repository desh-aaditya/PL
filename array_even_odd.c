// write a prog to store n number in aray and compute the sum of all even and odd no.
#include<stdio.h>
int main()
{
int a[20],n,i;
int sum1=0;
int sum2=0;
printf("Enter no of element=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]%2==0)
	{
	 sum1=sum1+a[i];	
	}
	else
	{
		sum2=sum2+a[i];
	}
}
printf("The sum of even number is=%d",sum1);
printf("\n The sum odd number is=%d",sum2);
return 0;
}

