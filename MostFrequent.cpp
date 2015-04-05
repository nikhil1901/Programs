#include <iostream>
using namespace std;

int main()
{
    long long N,pos[10001],neg[10001],temp,pposition,nposition,i;
    cin>>N;
    for(i=0;i<10001;i++)
    {
    	pos[i]=0;
    	neg[i]=0;
    }
    for(i=0;i<N;i++)
    {
    	cin>>temp;
    	if(temp>=0)
    	{
    		pos[temp]++;
    	}
    	else
    	{
    		temp=temp*-1;
    		neg[temp]++;
    	}
    }
    int pmax=0,nmax=0;
    for(int i=0;i<10001;i++)
    {
    	if(pos[i]>pmax)
    	{
    		pmax=pos[i];
    		pposition=i;
    	}
    	if(neg[i]>nmax)
    	{
    		nmax=neg[i];
    		nposition=i;
    	}
    }
    if(pmax>nmax)
    {
    	cout<<pposition;
    }
    else
    {
    	cout<<"-"<<nposition;
    }
    return 0;
}
