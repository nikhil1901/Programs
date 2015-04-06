#include <iostream>
using namespace std;

int process()
{
	long long string1[26],string2[26],count;
    char s[100002],temp;
    int i;
    for(i=0;i<26;i++)
    {
    	string1[i]=0;
    	string2[i]=0;
    }
	cin.getline(s,100001);
    	for(count=0;s[count]!='\0';count++)
    	{
    		if(s[count]>='a' && s[count]<='z')
    			string1[s[count]-'a']++;
    	}
    	//cout<<s<<endl;
    	cin.getline(s,100001);
    	for(count=0;s[count]!='\0';count++)
    	{
    		if(s[count]>='a' && s[count]<='z')
    			string2[s[count]-'a']++;
    	}
    	for(i=0;i<26;i++)
    	{
    		count=string1[i]-string2[i];
    		string2[i]=string2[i]-string1[i];
    		string1[i]=count;
    		//cout<<"string1[i]="<<string1[i]<<endl;
    		//cout<<"string2[i]="<<string2[i]<<endl;
    	}
    	int flag1=0,flag2=0;
    	for(i=0;i<26;i++)
    	{
    		if(string1[i]>0)
    		{
    			flag1=1;
    		}
    		if(string2[i]>0)
    		{
    			flag2=1;
    		}
    	}
    	if(flag1==1 && flag2==1)
    		cout<<"You draw some."<<endl;
    	else if(flag1==1)
    		cout<<"You win some."<<endl;
    	else if(flag2==1)
    		cout<<"You lose some."<<endl;
    	else
    		cout<<"You draw some."<<endl;
}

int main()
{
	int T;
	char s[10];
    cin>>T;
    cin.getline(s,100000);
    while(T--)
    {
    	process();
    }
    return 0;
}
