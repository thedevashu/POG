#include<stdio.h>
int (*fun_p )(int,int);
int add(int,int);
int sub(int,int);

int main()
{
	int num1=20,num2=10;
	printf("funnction pointer =%d",fun_p);
	fun_p=add;
	printf("funnction pointer =%d,add=%d\n",fun_p,&add);
	int res;
	printf("sub pointer =%d",sub);
	res =fun_p(num1,num2);
	printf("\n%d",res);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
 	return a-b;
}