#include<stdio.h>
int main()
{
	int a[] ={12,14,16,20,23,24,5,6,8,9,-999};
	int i,l=0,h,m,key=5;
	for(i=0;a[i] != -999;i++)
	{
		printf("%d, ",a[i]);
		if(a[i]>a[i+1])	break;
	}
	h=i;
	int l1=i+1,h1=9,m1;
	int flag=0;
	while(l<h)
	{
		m=(h+l)/2;
		if(a[m] == key)
		{
			flag=1;
			break;
		}
		 
		else if(key > a[m] && key <= a[h]) l=m+1;
		else if(key < a[m] && key <= a[h]) h=m-1;
	}
		if(flag != 1)
		{
			while(l1<h1)
			{
				m1=(h1+l1)/2;
				if(a[m1] == key)
				{
					flag=-1;
					break;
				}
			 
			else if(key > a[m1] && key < a[h1]) l1=m1+1;
			else if(key < a[m1] && key < a[h1]) h1=m1-1;
			}
		}
	if(flag == 1)
		printf("%d,%d",m,a[m]);
	else if(flag == -1)
		printf("%d,%d",m1,a[m1]);
}
