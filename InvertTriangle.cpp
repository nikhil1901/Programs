#include <iostream>
using namespace std;

int main() {
	long long T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		N=(N*(N+1))/2;
		N=N/3;
		cout<<N<<endl;
	}
	return 0;
}
