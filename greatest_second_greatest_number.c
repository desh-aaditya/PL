#include<stdio.h>
int main()
{
int a[20],n,i;
printf("Enter no of element=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	printf("Enter elment no. %d=",i);
	scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
 	if(a[0]<a[i])
	{
	 	a[0]=a[i];
	}
	if(a[0]>a[i] && a[1]<a[i])
	{
		a[1]=a[i];
	}
}
printf("\n The largest number among the array is=%d",a[0]);
printf("\n The second largest number among the array is=%d",a[1]);
return 0;
}
