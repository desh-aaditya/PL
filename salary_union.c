#include<stdio.h>
union employ{
	char names[10];
	char designation[10];
	float pay;
};
int main()
{
    float ta,da,gross;
	union employ x; 
	printf("enter name of employee:");
	scanf("%s",x.names);
	printf("\n Enter your post:");
	scanf("%s",x.designation);
	printf("\n enter your basic pay:");
	scanf("%f",&x.pay);
	ta=(x.pay/20);
	da=(x.pay/20);
	gross=x.pay+ta+da;
	printf("\n ta is: %f",ta);
	printf("\n da is: %f",da);
	printf("\n gross is: %f",gross);
	return 0;
} 
