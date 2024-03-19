#include<stdio.h>
void swap();
int main()
{
int a=10;
int b=20;
printf("the number before swapping are: %d %d",a,b);
swap(&a,&b);
printf("\n The number after swapping are: %d %d",a,b);	
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n The number after swapping in function are: %d %d",*a,*b);
}
