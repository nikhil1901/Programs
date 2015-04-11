#include <iostream>
#include<stdlib.h>
using namespace std;

int compare(const void *a, const void *b)
{
	return (*(int*)a-*(int*)b);
}

int main()
{
    int t,n,k[102];
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	for(int i=0;i<n;i++)
    	{
    		cin>>k[i];
    	}
    	qsort(k,n,sizeof(int),compare);
    	int i=0,j=n-1,min=65535,max=-1,sum;
    	while(i<j)
    	{
    		sum=k[i]+k[j];
    		if(sum>max)
    			max=sum;
    		else if(sum<min)
    			min=sum;
    		i++;
    		j--;
    	}
    	cout<<max-min<<endl;
    }
    return 0;
}
