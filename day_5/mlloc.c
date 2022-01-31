
#include<stdio.h>
#include <stdlib.h>
int main(){
	int *ptr,size,i;
	printf("\n ENter size of aray");
	scanf(" %d",&size);
	ptr =(int *)malloc(sizeof(int)*size);
	printf("\n ptr =%d",ptr);
	printf("\n addres of size=%d",&size);
	printf("\n address of i =%d",&i);

	for (int i = 0; i < size; ++i)
	{
		printf("\n Enter value :");
		scanf(" %d",&ptr[i]);
	}
	for (int j = 0; j < size; ++j)
	{
		printf("\n ptr[%d] =%d",j,ptr[j]);
	}
	free(ptr);
	return 0;
}