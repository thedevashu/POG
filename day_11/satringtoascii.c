#include<stdio.h>
int main(){
	char str[50];
	int i;
	printf("Enter the String:\n");
	gets(str);
	for(i=0;str[i] != '\0';i++)
		printf("\n %c - %d ",str[i],str[i]);
	char c ='\0';
	printf("%d",c);
	return 0;
}