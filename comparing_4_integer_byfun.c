//Write C program to find maximum of four integers by defining function
#include<stdio.h>
int main()
{
printf("The largest number among the intgers is=%d",number());
return 0;		
}
int number()
{
	int a[5],i;
	printf("Enter 4 intgers:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<4;i++)
{
 	if(a[0]<a[i])
	{
	 	a[0]=a[i];
	}	
}
}

	
	
