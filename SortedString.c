#include <stdio.h>

int process()
{
	int i,j,k,max,count,temp,ascii[26],sequence[26];
	char string[102];
	k=0;
	scanf(" %s",string);
	for(i=0;i<26;i++)
	{
		ascii[i]=0;
		sequence[i]=i;
	}
	for(i=0;string[i]!='\0';i++)
	{
		ascii[string[i]-'a']++;
	}
	for(i=1;i<101;i++)
	{
		count=i;
		for(j=0;j<26;j++)
		{
			if(ascii[j]==count)
			{
				sequence[k++]=j;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<ascii[sequence[i]];j++)
		{
			printf("%c",'a'+sequence[i]);
		}
	}
	printf("\n");
	return 0;
}


int main()
{
 	int T;
 	scanf(" %d",&T);
 	while(T--)
 	{
 		process();
 	}
    return 0;
}
