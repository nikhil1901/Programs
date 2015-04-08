#include <iostream>
using namespace std;

int main()
{
    long long N,M, A[100001],B[100001],sum=0,i,j,fsum=0;
    cin>>N>>M;
    for(i=0;i<N;i++)
    {
    	cin>>A[i];
    	sum=sum+A[i];
    }
    for(i=0;i<M;i++)
    {
    	cin>>B[i];
    	fsum=fsum+(sum*B[i]);
    }
    cout<<fsum;
    return 0;
}
