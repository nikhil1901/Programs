#include <iostream> 
#include<stdlib.h>
using namespace std;

int compare(const void* a, const void* b)
{
	return(*(int*)a- *(int*)b);
}

int main()
{
    long long S,L[100002]={0},i,temp,j,k=0;
    cin>>S;
    for(i=0;i<S;i++)
    {
    	cin>>L[i];
    }
    qsort(L,S,sizeof(long long),compare);
    for(i=0;i<S;i++)
    {
    	cout<<L[i]-i<<" ";
    }
    
    return 0;
}
