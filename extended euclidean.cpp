#include <stdio.h>
#include <conio.h>
int gcd;
int exfn(int a, int b, int x, int y)
{
	if(a==0)
	{
		x=0;
		y=1;
		return b;
	}
	else
	{
		int m, n;
		gcd=exfn(b%a, a, m, n);
		x=n-(b/a)*m;
		y=m;
		return gcd;
	}
}

int main()
{
	int a,b,x,y,i;
	printf("enter the value of a ");
	scanf("%d",&a);
	printf("enter the value of b ");
	scanf("%d",&b);
	i=exfn(a,b,x,y);
	printf("The gcd is = %d",i);
}
