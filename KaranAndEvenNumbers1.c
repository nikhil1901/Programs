#include <stdio.h>

int main()
{
    int i;
    scanf(" %d",&i);
    while(i!=-1)
    {
    	if(i%2==0)
    	{
    		printf("%d\n",i);
    	}
    	scanf(" %d",&i);
    }
    return 0;
}
