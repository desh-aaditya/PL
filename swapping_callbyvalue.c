#include<stdio.h>
void swap();
int main()
{
int x=10;
int y=20;
printf("\n The number before swapping is: %d %d ",x,y);
swap(x,y);
printf("\n The number after function call are: %d %d",x,y);	
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n The number after swapping in function are: %d %d",a,b);
	
}
