#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	int T;
	double B,LS,RS,x,y;
	cin>>T;
	while(T--)
	{
		cin>>B>>LS;
		x=(LS*LS);
		y=(B*B);
		cout<<setprecision(6)<<sqrt(x-y)<<" "<<setprecision(6)<<sqrt(x+y)<<endl;
	}
	return 0;
}
