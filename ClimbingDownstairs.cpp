#include <iostream>
using namespace std;

int main()
{
    long long T,N;
    cin>>T;
    while(T--)
    {
    	cin>>N;
    	N=N%6;
    	if(N==0)
    		cout<<3<<endl;
    	while(N!=0)
    	{
    		if(N-1>=0)
    		{
    			N=N-1;
    			if(N==0)
    				cout<<1<<endl;
    		}
    		if(N-2>=0)
    		{
    			N=N-2;
    			if(N==0)
    				cout<<2<<endl;
    		}
    		if(N-3>=0)
    		{
    			N=N-3;
    			if(N==0)
    				cout<<3<<endl;
    		}
    	}
    }
    return 0;
}
