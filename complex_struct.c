#include<stdio.h>
struct complex{
	int real[20];
	int img[20];
}c[3],c2[3];
int main()
{
	int i,ch,w,x;
	printf("####MENU###");
	printf("\n 1.read a complex number \n 2.write a complex number \n 3.addition of two complex number \n 4.Multiplication of two complex number");
	printf("\n Enter choice you want to excute:");
	scanf("%d",&ch);
	if(ch>0 && ch<=4)
	{
		for(i=1;i<=2;i++)
		{
			printf("Enter Real part of number %d=",i);
			scanf("%d",&c[i].real[i]);
			printf("Enter imaginary part of number %d=",i);
			scanf("%d",&c[i].img[i]);
		}	
	}
switch(ch)
	{
		case 1:
			for(i=1;i<=2;i++)
			{
				printf("Enter Real part of number %d=",i);
				scanf("%d",&c[i].real[i]);
				printf("Enter imaginary part of number %d=",i);
				scanf("%d",&c[i].img[i]);
			}
			break;
		case 2:
			for(i=1;i<=2;i++)
			{
				printf("\n The complex number is written= %d+%di",c[i].real[i],c[i].img[i]);
			}
			break;
		case 3:
			for(i=1;i<2;i++)
			{
				c2[i].real[i]=c[i].real[i]+c[i+1].real[i+1];
				c2[i].img[i]=c[i].img[i]+c[i+1].img[i+1];
				printf("The sum of two complex number is: %d+%di",c2[i].real[i],c2[i].img[i]);
			}
			break;
		case 4:
			for(i=1;i<=2;i++)
			{
				c2[i].real[i]=(c[i].real[i]*c[i+1].real[i+1])-(c[i].img[i]*c[i+1].img[i+1]);
				c2[i].img[i]=(c[i].real[i]*c[i+1].img[i+1])+(c[i].img[i]*c[i+1].real[i+1]);
				printf("The multiplication of number is: %d+%di",c2[i].real[i],c2[i].img[i]);
				break;
			}
			break;
		default:
		printf("Choice is invalid");	
	}
return 0;
}

