#include <stdio.h>
int decimaltobinay(int num,int base){
	if(num >0){
		int rem =num%base;
	decimaltobinay(num/base,base);

	

	if(rem <10) printf("%d",rem);
	else printf("%c",rem -10 +'A');
	}
}
int main(int argc, char const *argv[])
{
	decimaltobinay(1000,16);
	return 0;
}