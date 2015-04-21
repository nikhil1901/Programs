#include <iostream>
#include<stdlib.h>
using namespace std;

int compare(const void *a, const void *b)
{
	return(*(int *)a - *(int *)b);
}

int main()
{
    long long T,A,B,N,C[10001],i,cA,cB;
    cin>>T;
    while(T--)
    {
    	cA=0;cB=0;
    	cin>>A>>B>>N;
		for(i=0;i<N;i++)
		{
			cin>>C[i];
		}
		qsort(C,N,sizeof(long long),compare);
		for(i=0;i<N;i++)
		{
			if((A-C[i])>=0)
			{
				A=A-C[i];
				cA++;
			}
			if((B-C[i])>=0)
			{
				B=B-C[i];
				cB++;
			}
			
		}
		if(cA==cB)
			cout<<"Tie\n";
		else if(cA>cB)
			cout<<"Raghu Won\n";
		else	
			cout<<"Sayan Won\n";
    }
    return 0;
}
