#include <iostream>
#include<stdlib.h>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
    long long N, even[1000],odd[1000],temp,eCount,oCount,i;
    cin>>N;
    eCount=0;
    oCount=0;
    while(N--)
    {
    	cin>>temp;
    	if(temp%2==0)
    	{
    		even[eCount++]=temp;
    	}
    	else
    	{
    		odd[oCount++]=temp;
    	}
    }
    qsort (even, eCount, sizeof(long long), compare);
    qsort (odd, oCount, sizeof(long long), compare);
    for(i=0;i<eCount-1;i++)
    {
    	cout<<even[i]<<" ";
    }
    cout<<even[i]<<endl;
    for(i=oCount-1;i>0;i--)
    {
    	cout<<odd[i]<<" ";
    }
    cout<<odd[i];
    return 0;
}
