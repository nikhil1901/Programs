#include <iostream>
using namespace std;

int main()
{
    long long N,A[100001],X,M,i;
    cin>>N;
    for(i=0;i<N;i++)
    {
    	cin>>A[i];
    }
    cin>>M;
    while(M--)
    {
    	cin>>X;
    	for(i=0;i<N;i++)
    	{
    		if(A[i]>X)
    			A[i]--;
    	}
    }
    for(i=0;i<N;i++)
    {
    	cout<<A[i]<<" ";
    }
    return 0;
}
