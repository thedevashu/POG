#include<stdio.h>
#include<stdlib.h>
void read_arr(int **);
void disp_arr(int **);
int main(){
int **ptr,i;
ptr = (int **)malloc(sizeof(int *)*3);
for(i=0;i<3;i++){
		ptr[i]=(int *)malloc(sizeof(int)*3);
	}
read_arr(ptr);
disp_arr(ptr);

for (int i = 0; i < 3; ++i)
{
	free(ptr[i]);
}
free(ptr);
}
void disp_arr(int *a[]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n ptr[%d][%d] = %d",i,j,a[i][j]);
		}	
	}
}

void read_arr(int **ptr) //(int *a[])
{
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value: ");
			scanf(" %d",&ptr[i][j]);
		}	
	}
}