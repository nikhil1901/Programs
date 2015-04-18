#include <iostream>
#include<stdlib.h>
using namespace std;

int compare(const void *a, const void *b)
{
	return(*(int *)b- *(int *)a);
}

int main()
{
    int N,Q,i,start,end,k;
    long long A[5001],B[5001],ans,temp1[5001],temp2[5002];
    cin>>N>>Q;
    for(i=0;i<N;i++)
    {
    	cin>>A[i];
    }
    for(i=0;i<N;i++)
    {
    	cin>>B[i];
    }
    while(Q--)
    {
    	ans=0;
    	cin>>start>>end;
    	k=0;
    	for(i=start-1;i<end;i++)
    	{
    		temp1[k]=A[i];
    		temp2[k]=B[i];
    		k++;
    	}
    	qsort(temp1,k,sizeof(long long),compare);
    	qsort(temp2,k,sizeof(long long),compare);
    	for(i=0;i<k;i++)
    	{
    	//	cout<<"temp1[i]="<<temp1[i]<<endl;
    	//	cout<<"temp2[i]="<<temp2[i]<<endl;
    		ans+=(temp1[i]*temp2[i]);
    	}
    	cout<<ans<<endl;
    }
    
    return 0;
}
