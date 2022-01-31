#include<stdio.h>

void main()
{
	int a[50][50];
	int i,j,n;
	scanf(" %d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(i == 0 || i== j)
				a[i][j]=1;
			else
				a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" %d ",a[i][j]);
		}
	printf("\n");
	}
}