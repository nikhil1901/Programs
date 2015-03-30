#include <iostream>
using namespace std;

int main()
{
    long long L,N,W,H;
    cin>>L;
    cin>>N;
    while(N--)
    {
    	cin>>W>>H;
    	if(W<L || H<L)
    	{
    		cout<<"UPLOAD ANOTHER";
    	}
    	else if(W==H)
    	{
    		cout<<"ACCEPTED";
    	}
    	else
    	{
    		cout<<"CROP IT";
    	}
    	cout<<endl;
    }
    return 0;
}
