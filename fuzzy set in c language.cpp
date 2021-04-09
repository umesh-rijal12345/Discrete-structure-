#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i;
	float arr1[5]={0.1,0.2,0.3,0.5,0.8};
	float arr2[5]={0.0,0.2,0.4,0.7,1.0};
	printf("The union of fuzzy set is :\n");
	for(i=0;i<5;i++)
	{
		printf("%f",fmax(arr1[i],arr2[i]));
		
	}
	printf("The fuzzy set intersection is :\n");
	for(i=0;i<5;i++)
	{
		printf("%f",fmin(arr1[i],arr2[i]));
	}
	printf("The concentration of a is : \n");
	for(i=0;i<5;i++)
	{
		printf("%f",arr1[i]*arr1[i]);
	}
	
	printf(" The dilation of b is : \n");
	for(i=0;i<5;i++)
	{
		printf("%f",sqrt(arr2[i]));
	}
	
	printf("The fuzzy set difference is : \n");
	for(i=0;i<5;i++)
	{
		printf("%f",fmin(arr1[i],1-arr2[i]));
	}
	
}
