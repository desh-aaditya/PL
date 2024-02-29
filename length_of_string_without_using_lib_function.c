// length of string without using library function
#include<stdio.h>
int main()
{
	char s[50],i;
	printf("enter your string=");
	scanf("%s",s);
	int count=0;
	for(i=0;s[i]!='\0';i++)
	{
		count++;
	}
	printf("Length of string is=%d",count);
	return 0;
	
	
	
	
	
	
}
