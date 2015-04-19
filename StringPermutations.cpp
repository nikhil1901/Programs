#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

void permutation(char s[], int start, int end)
{
    int j;
    char temp;
    if(start==end)
        cout<<s<<endl;
    
    for(j=start;j<=end;j++)
    {
        temp=s[start];
        s[start]=s[j];
        s[j]=temp;
        permutation(s,start+1,end);
        temp=s[start];
        s[start]=s[j];
        s[j]=temp;
    }
}

int compare(const void *a, const void *b)
{
    return(*(char*)a- *(char*)b);
}

int main() {
	char str[100];
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>str;
	    N=strlen(str);
	    qsort(str,N,sizeof(char),compare);
	    cout<<"str= "<<str<<endl;
	    permutation(str,0,N-1);
	}
	return 0;
}
