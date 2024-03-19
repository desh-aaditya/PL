#include<stdio.h>
void add();
int main()
{
add();
}
void add(int x ,int y)
{
	x=10;
	y=20;
	printf("Sum of two number is %d:",x+y);
}
