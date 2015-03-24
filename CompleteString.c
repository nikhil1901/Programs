#include <stdio.h>

int main()
{
    int N, i, j, ascii[26];
    char input[100];
    scanf("%d",&N);
    while(N!=0)
    {
    	for(i=0;i<26;i++)
    	{
    		ascii[i]=0;
    	}
		scanf(" %s",input);
		for(j=0;input[j]!='\0';j++)
		{
			ascii[input[j]-'a']++;
		}
		for(i=0;i<26;i++)
		{
			if(ascii[i]==0)
			 break;
		}
		if(i==26)
			printf("YES\n");
		else
			printf("NO\n");
		N--;	
    }
    return 0;
}
