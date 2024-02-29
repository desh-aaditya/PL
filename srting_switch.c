#include<stdio.h>
int main()
{
	char s1[20];
	char s2[20];
	int n,i,f;
	printf("Enter 1st string=");
	scanf("%s",s1);
	printf("enter 2nd string=");
	scanf("%s",s2);
	printf("***MENU***");
	printf("\n 1.length of string \n 2.copy string \n 3.reverse string \n 4.concat. string");
	printf("\n");
	printf("\n Enter your choice=");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("length of string 1= %d",strlen(s1));
			printf("Length of string 2= %d",strlen(s2));
			break;
		case 2: 
			strcpy(s2,s1);
			printf("string after copying is: %s",s2);
			break;
		case 3:
			strcat(s1,s2);
			printf("%s",s1);
			break;
		case 4:
			printf("\n 1st string after reversing is %s",strrev(s1));
			printf("\n 2nd string after reversing is %s",strrev(s2));
			break;
			
		default:
			printf("Invalid");
		
	}
	
	
	
	
	
	return 0;
}

