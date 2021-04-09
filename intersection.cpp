#include <stdio.h>
#include <conio.h>
int main()
{
	int set1[10],set2[10],i,j,a,b,n,inter[20];
	printf("Enter the number of elements of set1 \n");
	scanf("%d",&n);
	
	printf("Enter elements of set1\n");
	for(i=0;i<n;i++)
	{
		printf("set1 element %d:",i);
		scanf("%d",&set1[i]);
	}
	
	printf("Enter the number of elements of set2 \n");
	scanf("%d",&n);
	
	printf("Enter elements of set2\n");
	for(i=0;i<n;i++)
	{
		printf("set2 element %d:",i);
		scanf("%d",&set2[i]);
	}
	
	printf("intersection of given two sets is:\n");
	printf("{");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(set1[i]==set2[j])
			{
				printf("%d",set1[i]);
				printf(",");
			}
		}
	}
	printf("}");
}
