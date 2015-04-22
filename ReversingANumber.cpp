#include <iostream>
using namespace std;

int main()
{
    long T;
    char N[100];
    cin>>T;
    while(T--)
    {
    	cin>>N;
    	if(N[0]%2==0)
    		cout<<"EVEN\n";
    	else
    		cout<<"ODD\n";
    }
    return 0;
}
