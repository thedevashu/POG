#include<stdio.h>
#include<math.h>
int main(){
	int i,j,resi,resj,sum,diff,arr[]={10,22,28,29,30,40},x=54;
	sum=arr[0]+arr[1];
	diff=abs(sum-x);
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
			sum =arr[i]+arr[j];
			if(abs(sum-x) <diff){
				resi =i;
				resj =j;
				diff=abs(sum-x);

			}
		}
	}
	printf(" %d and %d" ,arr[resi],arr[resj]);
	return 0;
}