#include<iostream>
using namespace std;
 
int main()
{
	int T;
	long long A,B;
	cin>>T;
	while(T--)
	{
		cin>>A>>B;
		if(A>B)
			cout<<A<<" ";
		else
			cout<<B<<" ";
		cout<<A+B<<endl;	
	}
	return 0;
}
