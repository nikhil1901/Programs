#include <iostream>
using namespace std;

int main()
{
   int T;
   long long N;
   cin>>T;
   while(T--)
   {
   	cin>>N;
   	if(N%21==0)
   		cout<<"The streak is broken!\n";
   	else
   	{
   		int s=0;
   		while(N!=0)
   		{
   			int t=N%100;
   			if(t==21)
   			{
   				cout<<"The streak is broken!\n";;
   				break;
   			}
   			N=N/10;
   		}
   		if(N==0)
   			cout<<"The streak lives still in our heart!\n";
   	}
   }
    return 0;
}
