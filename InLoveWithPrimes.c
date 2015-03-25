#include <stdio.h>

int isPrime(unsigned int num)
{
	int i;
	if(i==2)
	{
		return 1;
	}
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			//printf("not prime\n");
			return 0;
		}
	}
	return 1;
}

int main()
{
    unsigned int tc, i, num;
    scanf(" %d",&tc);
    while(tc!=0)
    {
    	scanf(" %d",&num);
    	i=2;
    	while(i<num)
    	{
    		if(isPrime(i) && isPrime(num-i))
    		{
    			printf("Deepa\n");
    			break;
    		}
    		i++;
    	}
    	if(i==num)
    	{
    		printf("Arjit\n");
    	}
    	tc--;
    }
    return 0;
}
