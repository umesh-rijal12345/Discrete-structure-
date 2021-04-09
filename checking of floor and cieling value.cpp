#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float n;
	int a=0,b=0;
	printf("Enter the number that you want to change:");
	scanf("%f",&n);
	a=ceil(n);
	b=floor(n);
	printf("The ceiling value is : %d\n",a);
	printf("The floor value is : %d",b);
	getch();
	return 0;
}
