#include <iostream>
using namespace std;

int process()
{
	long long D,i=0;
	cin>>D;
	while(D>0)
	{
		i++;
		D=D-i;
		
	}
	switch(i%3)
	{
		case 0:cout<<"SL"<<endl;
			break;
		case 1:cout<<"LB"<<endl;
			break;
		case 2:cout<<"BS"<<endl;
	}
}


int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		process();
	}
    return 0;
}
