#include<stdio.h>
int main(){
	int i,j,arr[50]={1,2,3,4,5,3,7,5,9,-999};
	void del_arr(int *,int);
	for(i=0;arr[i]!=-999;i++){
		for(j=i+1;arr[j]!=-999;j++){

			if(arr[i] == arr[j]){
				del_arr(arr,j);
			}
		}

	}
	for(int k=0;arr[k] != -999;k++){
			printf( "%d ,",arr[k] );
		}
}

void del_arr(int *p,int pos){
	int i;
	for(i=pos;p[i]!=-999;i++){
		p[i]=p[i+1];
	}
}
