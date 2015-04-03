#include <iostream>
using namespace std;

int process()
{
	int N,M,first[101],sec[101],i,j,ascii[101];
	cin>>N;
	for(i=0;i<101;i++)
	{
		ascii[i]=0;
	}
	i=0;
	while(i<N)
	{
		cin>>first[i];
		ascii[first[i]]++;
		i++;
	}
	cin>>M;
	i=0;
	while(i<M)
	{
		cin>>sec[i];
		ascii[sec[i]]++;
		i++;
	}
	for(i=0;i<101;i++)
	{
		if(ascii[i]!=0)
			cout<<i<<" ";
	}
	cout<<endl;
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
