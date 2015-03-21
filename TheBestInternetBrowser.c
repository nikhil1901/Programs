#include <stdio.h>

int main()
{
    int i,N,count,output[201],total,output_count[201];
    char name[201];
    total=0;
    scanf("%d",&N);
    while(N!=0)
    {
    scanf(" %s",name);
    count=3;
    for(i=4;name[i]!='\0';i++)
    {
    	
    	if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' )
    	{
    		count++;
    	}
    
    }
    output[total]=i-count;
    output_count[total]=i;
    total++;
    N--;
    }
    for(i=0;i<total-1;i++)
    {
    	printf("%d/%d\n",output[i],output_count[i]);
    }
    printf("%d/%d",output[i],output_count[i]);
    return 0;
}
