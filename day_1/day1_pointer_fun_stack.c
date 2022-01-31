#include<stdio.h>
int main(){
	int i=10,j=20;
	int *p =&j;
	printf("\n Address of i=%d",&i);	
	printf("\n Address of j=%d",&j);	
	printf("\n val of ptr=%d",p);	
	printf("\n val at ptr=%d",*p);
	p++;
	
	printf("\n val of ptr=%d",p);	
	printf("\n val at ptr=%d",*p);
	return 0;

}