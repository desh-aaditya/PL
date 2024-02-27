#include<stdio.h>
int main()
{
	int i,n,j,s1,s2,p,q=0;
	int p[10];
	int d[10];
	int ppl[10];
	int s=0;
	char names[2];
    for(i=1;i<=2;i++)
    {
    printf("Enter name of student=\n ");
	scanf("%s",names);
    }
    printf("Enter marks of all student in physics=");
	for(j=1;j<=2;j++)
	{
	 scanf("%d",&p[i]);	
	}
	printf("Enter marks of all student in dc=");
	for(j=1;j<=2;j++)
	{
	 scanf("%d",&d[i]);	
	}
	printf("Enter marks of all student in ppl=");
	for(j=1;j<=2;j++)
	{
	 scanf("%d",&ppl[i]);	
	}
	printf("Enter marks of all student in mc=");
	for(j=1;j<=2;j++)
	{
	 scanf("%d",&mc[i]);	
	}
	printf("Enter marks of all student in geog=");
	for(j=1;j<=2;j++)
	{
	 scanf("%d",&g[i]);	
	}
s1=p[1]+d[1]+ppl[1]+mc[1]+g[1];
s2=p[2]+d[2]+ppl[2]+mc[2]+g[2];
if(s1>=200)
{
	s=s+1;	
}
if(s2>=200)
{
	q=q+1;	
}
p=s+q;
printf("%d",p);
	
	
	
}
	

