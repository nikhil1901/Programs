#include <iostream>
using namespace std;
main()
{
    int N,i=0,j;
    string s[1001];
    cin>>N;
    while(N--)
    {
    	cin>>s[i++];
    	for(j=0;j<i-1;j++)
    		if(s[i-1]==s[j])
    		{
    			i--;
    			break;
    		}
    }
    cout<<i;
    return 0;
}
