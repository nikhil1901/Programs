//Calculating factorial of any number upto 100
#include <stdio.h>
#define MAX 200

int main(void) {
	int i,j,N,length,carry,factorial[200];
    printf("Enter the number:");
	scanf(" %d",&N);
	for(i=0;i<MAX;i++)
	{
	    factorial[i]=0;
	}
	factorial[0]=1;
	for(i=1;i<=N;i++)
	{
	    j=0;
	    carry=0;
	    while(j<MAX)
	    {
	        
	        factorial[j]=factorial[j]*i;
	        factorial[j]=factorial[j]+carry;
	        carry=factorial[j]/10;
	        factorial[j]=factorial[j]%10;
	        j++;
	    }
	}
	for(i=MAX-1;i>=0;i--)
	{
	    if(factorial[i]!=0)
	    {
	        length=i;
	        break;
	    }
	}
	printf("\nlength of the factorial=%d digits",length+1);
	printf("\nfactorial=");
	for(i=length;i>=0;i--)
	{
	    printf("%d",factorial[i]);
	}
	return 0;
}
