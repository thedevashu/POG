#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr,*p1;
	ptr = (int *)malloc(sizeof(int));
	p1 =ptr;
	*ptr =10;
	printf("value at p1 =%d\n", *p1);
	printf("value of *p1 =%d\n",p1);
	printf("value at ptr =%d\n",*ptr);
	printf("value of *ptr =%d\n",ptr);
	free(ptr);
	//ptr free. 
	//lost refrence to p1 so p1 is dangling pointer  
	printf("------------------------------\n");
	printf("value at p1 =%d\n", *p1);
	printf("value of *p1 =%d\n",p1);
	printf("value at ptr =%d\n",*ptr);
	printf("value of *ptr =%d\n",ptr);
	free(ptr);
	return 0;
}