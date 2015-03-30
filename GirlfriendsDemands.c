#include <iostream>
using namespace std;

int main()
{
    string s;
    long long Q,a,b,count;
    cin>>s;
    cin>>Q;
    count=s.size();
    while(Q--)
    {
    	cin>>a>>b;
    	
    	if(s[(a-1)%count]==s[(b-1)%count])
    	{
    		cout<<"Yes"<<endl;
    	}
    	else
    	{
    		cout<<"No"<<endl;
    	}
    }
    return 0;
}
