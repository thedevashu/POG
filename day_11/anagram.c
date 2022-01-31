#include <stdio.h>
#include <string.h>

int ifequal(char *str1,char *str2){
	int i;
	for(i=0;str1[i]==str2[i];i++)
		if(str1[i]=='\0') return 1;
	return (str1[i]-str2[i]);

	// int i=0,j=0,cnt=0;


	// while(str1[i] == str2[j]){i++;j++; cnt++;	printf(" in ifequal %c \n",str1[i] );}
	// if(cnt == strlen(str1)) return 1;
	// else	return 0;

}
int anagram(char *str1,char *str2){
	int  i; //index for str1
	int  j; //index for str2

	for(i=0;i<strlen(str1);i++){
		printf(" in anagram %c \n",str1[i]);
		for(j=0;j<strlen(str2);j++){
			//check if same swap with index i
			if(str1[i] == str2[j]){
				char temp =str2[i];
				str2[i] =str2[j];
				str2[j] = temp;
			}
		}
	}
	//if str1 == str2 return 1
			int  eq =ifequal(str1,str2);
			if(eq == 1) return 1;

	return 0;
}
int main(int argc, char const *argv[])
{
	char str1[50];
	char str2[50];

	//input
	printf("Enter string 1 \n");
	gets(str1);
	printf("Enter String 2 \n");
	gets(str2);

	//check length
	if(strlen(str1) == strlen(str2)){
		//if string equal 
		int is_anagram=anagram(str1,str2);
		if(is_anagram == 1)
			printf("Is Anagram\n");
		else
			printf("Not Anagram\n");
	}


	// printf("%d\n",strlen(str1) );
	//check length

	// int i=0;
	// int 
	// while(str1[i] != '\0' && str2[]){i++;}


	return 0;
}