//C program to count digits of a number
#include<stdio.h>
int c=0;
int count(int n)
{
    if(n>0)
    {
      c++;
      count(n/10);
    }
    else
    {
        return c;
    }
}
int main()
{
    int n,o;
    printf("Enter any number=");
    scanf("%d",&n);
    o=count(n);
    printf("Total number of digit are= %d",o);
    return 0;
}

