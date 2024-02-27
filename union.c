#include<stdio.h>
union student{
     char names[10];
     int roll[10];
     int marks[10];
};
int main()
{
	int i,j,total=0;
	union student s;
	printf("enter name of student:");
	scanf("%s",s.names);
	printf("enter roll no student:");
	scanf("%d",&s.roll);
	for(j=0;j<3;j++)
	{
			printf("enter marks student in subject:\n");
			scanf("%d",&s.marks[j]);
			total=total+s.marks[j];
	}
	printf("total of student is:%d",total);
	return 0;
}
   

	
	
	
	
	
	







