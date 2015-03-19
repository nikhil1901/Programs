//Super ASCII string
#include <stdio.h>

int main(void) {
	int i,count[26];
	char input[100];
	for(i=0;i<26;i++)
	{
	    count[i]=0; //initializing count
	}
	printf("Enter the string: ");
	scanf(" %s",input);
	for(i=0;input[i]!='\0';i++)
	{
	    count[input[i]-97]++;   //ASCII value of 'a'=97
	}
	for(i=0;i<26;i++)
	{
	    if(count[i]!=0 && count[i]!=i+1)
	    {
	        break;
	    }
	    
	}
	if(i!=26)
	{
	    printf("\nNot Super ASCII");
	}
	else
	{
	    printf("\nSuper ASCII");
	}
	return 0;
}

