#include <stdio.h>
#include <conio.h>
int main()
{
	int set1[10],set2[10],i,j,n,m,temp;
	printf("Enter the number of elements of set1 \n");
	scanf("%d",&n);
	
	printf("Enter elements of set1\n");
	for(i=0;i<n;i++)
	{
		printf("set1 element %d:",i);
		scanf("%d",&set1[i]);
	}
	
	for(i=0;i<n;i++)
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
	scanf("%d",&m);
	
	printf("Enter elements of set2\n");
	for(i=0;i<m;i++)
	{
		printf("set2 element %d:",i);
		scanf("%d",&set2[i]);
	}
	
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(set2[i]>set2[j])
			{
				temp=set2[i];
				set2[i]=set2[j];
				set2[j]=temp;
			}
		}
	}
	
	
	//for subtraction of set
	int found=0;
	for(i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if(set1[i]==set2[j])
			found=1;
		
		}
		if(found==0)
		{
			printf("%d",set1[i]);
			printf(",");
		
		}

	
	}
	
	
}
