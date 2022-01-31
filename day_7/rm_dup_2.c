#include<stdio.h>
int main(){
	int i,j,tar[50],tar_index=-1,flag=0,arr[50]={1,2,3,4,5,3,7,5,9,-999};
	
	for(i=0;arr[i]!=-999;i++){
		flag=0;
		for(j=0;j<=tar_index;j++){
			if(arr[i]==tar[j]){
			flag =1;break;
			}
		}
			if(flag == 0){
				tar_index=tar_index+1;
				tar[tar_index]=arr[i];
			}

		}
	
	tar_index++;
	tar[tar_index] =-999;

	for(i=0;tar[i]!=-999;i++){
		printf(" %d,",tar[i]);
	}


}