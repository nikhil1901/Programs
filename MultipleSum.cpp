#include <iostream>
using namespace std;

int main()
{
    long int N,A,B,i;
    long long sum=0;
    cin>>N>>A>>B;
    for(i=1;i<N;i++)
    {
    	if(i%A==0 && i%B==0)
    		sum+=i;
    	else if(i%A==0)
    		sum+=i;
    	else if(i%B==0)
    		sum+=i;
    }
    cout<<sum;
    return 0;
}
