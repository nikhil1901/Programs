#include <iostream>
#include<math.h>
using namespace std;

int process()
{
	int N;
	long long A[101],K,M,W,product=1,temp;
	cin>>N>>K>>M>>W;
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<N;i++)
	{
		product=product*A[i];
		product=product%W;
		if((i+1)%K==0)
		{
			temp=product;
			for(int j=1;j<M;j++)
			{
				product=(product*temp)%W;
			}
		}
		

	}
	cout<<product<<endl;
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
