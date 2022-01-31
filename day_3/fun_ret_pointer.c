#include<stdio.h>
int var;
int *fun();
int main()
{
	int *p=fun();
	printf("value at p = %d\n",*p);
printf("---");
	return 0;

}
int *fun()
{
	printf("HELLO\n");
	int var =10;//after call it memory is freed
	return &var;
}