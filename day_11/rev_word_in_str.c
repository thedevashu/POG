#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	char str[50] ="This is POG class with me Shit Posting \0";

	char i=0;
	int start=0,end=0;
	for(i=0;i<=strlen(str);i++)//itreate over str arr
	{
		
		//check for space
		if(str[i] == 32 || str[i] == '\0'){
			end=i-1;
			
			//revers string
			while(start < end )
			{
				char temp= *(str+start);
				*(str+start) =*(str+end);
				*(str +end) =temp;
				
				start++;end--;
			}
			start =i+1;
			// end=i-1;

		}
	}

	printf("%s\n", str);
	return 0;
}