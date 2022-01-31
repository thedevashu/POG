#include "stdio.h"
void convert(int num){
	int rem,pow=1,des=0;
	while(num >0){
		 rem =num%10;
		 des =des+rem*pow;
		 pow=pow*2;
		 num =num/10;

	}
	printf("%d\n",des );
}
int main(int argc, char const *argv[])
{
	convert(11111);
	/* code */
	return 0;
}