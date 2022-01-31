#include<stdio.h>
int main()
{
	int a[]={2,3,3,4,4,4,5,5,6,7,7,7,7,7,7,7,-999};
	int i=0,sum=0;
	for(i=0;a[i] != -999;i++)
	{
		if(a[i] == a[i+1])
		{
			int k=i;
			int count =1;
			while(a[k] != -999 && a[k] == a[k+1])
			{
				count++;
				k++;
			}
			a[k]=a[k+1];
			i--;
			sum+=count;
		}
		
	}
	int j;
	for(j=0; a[j]!=-999;j++)
	{
		printf("%d",a[j]);
	}
	printf("Number of rep %d",sum);
	
		
}
