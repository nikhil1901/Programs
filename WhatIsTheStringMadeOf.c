#include <stdio.h>

int main()
{
    char string[100];
    int i,count=0;
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
    	switch(string[i])
    	{
    		case '0': count+=6;
    		break;
    		case '1': count+=2;
    		break;
    		case '2': count+=5;
    		break;
    		case '3': count+=5;
    		break;
    		case '4': count+=4;
    		break;
    		case '5': count+=5;
    		break;
    		case '6': count+=6;
    		break;
    		case '7': count+=3;
    		break;
    		case '8': count+=7;
    		break;
    		case '9': count+=6;
    		break;
    	}
    }
    printf("%d",count);
    return 0;
}
