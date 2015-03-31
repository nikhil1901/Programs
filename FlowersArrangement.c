#include <iostream>
using namespace std;

int main()
{
    long long T,length,i;
    string s;
    cin>>T;
    while(T--)
    {
    	cin>>s;
    	length=s.size();
    	for(i=0;i<length;i++)
    	{
    		if(s[i]=='R' && s[i+1]=='Y' && s[i+2]=='Y')
    		{
    			i=i+2;
    		}
    		else if(s[i]=='R' && s[i+1]=='Y')
    		{
    			i++;
    		}
    		else if(s[i]=='R')
    		{
    			
    		}
    		else
    		{
    			break;
    		}
    	}
    	if(i==length)
    	{
    		cout<<"YES";
    	}
    	else
    	{
    		cout<<"NO";
    	}
    	if(T!=0)
    	{
    		cout<<endl;
    	}
    }
    return 0;
}
