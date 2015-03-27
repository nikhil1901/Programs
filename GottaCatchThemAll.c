#include <stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}

int main()
{
    long long k,i,j,count,array[100001],temp,max,sum;
    scanf(" %lld",&k);
    count=0;
    while(k--)
    {
    	scanf(" %lld",&array[count++]);
    }
    qsort(array,count,sizeof(long long),cmpfunc);
    max=array[0]+1;
    for(i=1;i<count;i++)
    {
    	max--;
    	if((array[i]+1)>max)
    	{
    		max+=(array[i]+1-max);
    	}
    }
    sum=max+count;
    printf("%lld",sum);
    
    return 0;
}
