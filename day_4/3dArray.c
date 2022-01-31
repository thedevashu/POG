#include<stdio.h>
void display_arr(int arr[2][2][2])
{
	int i,j,k;
	
	for (int i = 0; i < 2; ++i)
	{
		{
			printf("arr[%d]=%d\n",i,arr[i]);
		}
		for (int j = 0; j < 2; ++j)
		{
			printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
			for (int k = 0; k < 2; ++k)
			{
				printf("arr[%d][%d][%d]=%d\n",i,j,k,arr[i][j][k]);
			}
		}
	}
}

int main()
{
	int threearr[2][2][2]={1,2,3,4,5,6,7,8};
	//int (*ptr)[2][2];

	display_arr(*threearr);
	//disp(int *ptr);
	return 0;
}

