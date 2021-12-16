#include<stdio.h>
int main()
{
	int ch,a,b,c,d,e,f,g,h;
	printf("1:Add\n");
	printf("2:Substract\n");
	printf("3:Multiply\n");
	printf("4:Divide\n");
	printf("5:Square\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	printf("Enter the value of a and b=");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case 1:
		c=a+b;
		printf("%d",c);
		break;
		case 2:
		d=a-b;
		printf("%d",d);
		break;
		case 3:
		e=a*b;
		printf("%d",e);
		break;
		case 4:
		f=a/b;
		printf("%d",f);
		break;
		case  5:
		g=a*a;
		h=b*b;
		printf("%d\n%d\n",g,h);
		break;
		default:printf("sorry try again");
	}
	return 0;
}
