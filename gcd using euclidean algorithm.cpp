//program to implement Eculidean algorithm
#include<stdio.h>   
int main()
{
	int a,b,r;
	printf("Enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
	while(b>0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf("The GCD is =%d\n",a);
}
