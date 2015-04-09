#include <iostream>
#include<stdlib.h>
using namespace std;

int compare(const void *a, const void *b)
{
	return(*(int*)a- *(int*)b);
}

int process()
{
	long long N,X,i,A[100001],temp,j;
	int v[100001]={0};
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	qsort(A,N,sizeof(long long),compare);
	for(i=0;i<N;i++)
	{
		temp=A[i];
		j=i+1;
		for(j;j<N;j++)
		{
			if(A[j]>A[i] && v[j]==0)
			{
				A[i]=-1;
				v[j]=1;
				break;
			}
		}
	}
	temp=0;
	for(i=0;i<N;i++)
	{
		if(A[i]!=-1)
			temp++;
	}
	cout<<temp<<endl;
	
	return 0;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	process();
    }
    return 0;
}
