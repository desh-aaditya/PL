//write a program to accept n numbers in array display the largest number using loops 
#include<stdio.h>
int main()
{
int a[20],n,i;
printf("Enter no of element=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
 	if(a[0]<a[i])
	{
	 	a[0]=a[i];
	}	
}
printf("The largest number among the array is=%d",a[0]);
return 0;
	
}










