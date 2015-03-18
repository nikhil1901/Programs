//to find the number of trailing zeroes in factorial of a number
#include <stdio.h>

int main(void) {
	// your code goes here
	int N,temp,count=0,divisor=5;
	printf("\nEnter the number:");
	scanf(" %d",&N);
	while(divisor<=N)
	{
	  temp=N/divisor;
	  count=count+temp;
	  divisor=divisor*5;
	}
	printf("\nTrailing zeroes in its factorial are: %d",count);
	return 0;
}
