#define MAX 50
void removeD(int *);
void removesame(int *);
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int arr[MAX] ={2,3,3,4,4,4,6,6,6,7,7,7,-999};
	removeD(arr);
	for (int i = 0; arr[i] != -999; i++)
	{
		printf("%d\n",arr[i] );
	}
	return 0;
}
void removeD(int *arr)
{
	if(*arr != -999){
		printf("%d in loop",*arr);
		removeD((arr+1));
		if(*arr == *arr+1)

			removesame(arr);
	}
}
 void removesame(int *arr)
{
	printf("\n%d in loop",*arr);
	*arr = *(arr+1);
}