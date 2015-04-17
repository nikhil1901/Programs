#include <iostream>
#include<stdlib.h>
using namespace std;

int compare(const void *a, const void *b)
{
	return(*(int *)b - *(int *)a);
}
int main()
{
	int T,A[100001],S[100001];
	long long N,i;
	cin>>T;
	while(T--)
	{
		cin>>N;
		for(i=0;i<N;i++)
		{
			cin>>A[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>S[i];
		}
		qsort(A,N,sizeof(int),compare);
		qsort(S,N,sizeof(int),compare);
		for(i=0;i<N;i++)
		{
			if(A[i]<=S[i])
				break;
		}
		if(i==N)
			cout<<"YES\n";
		else
			cout<<"NO\n";
			
	}
    return 0;
}
