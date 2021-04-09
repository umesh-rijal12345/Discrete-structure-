#include <stdio.h>
#include <conio.h>
int main()
{
	int set1[10],set2[10],i,j,a,b,n,temp;
	printf("Enter the number of elements of set1 \n");
	scanf("%d",&n);
	
	printf("Enter elements of set1\n");
	for(i=0;i<n;i++)
	{
		printf("set1 element %d:",i);
		scanf("%d",&set1[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(set1[i]>set1[j])
			{
				temp=set1[i];
				set1[i]=set1[j];
				set1[j]=temp;
			}
		}
	}
	
	printf("Enter the number of elements of set2 \n");
	scanf("%d",&n);
	
	printf("Enter elements of set2\n");
	for(i=0;i<n;i++)
	{
		printf("set2 element %d:",i);
		scanf("%d",&set2[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(set2[i]>set2[j])
			{
				temp=set2[i];
				set2[i]=set2[j];
				set2[j]=temp;
			}
		}
	}
	
	//for cartesian product
	printf("THe cartesian product is given below \n");
	printf("{");
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("(");
			printf("%d,%d",set1[i],set2[j]);
			printf(")");
		}
	}
	printf("}");
	
	
}

