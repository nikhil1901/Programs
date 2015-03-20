//longest consecutive substring
#include <stdio.h>

int main(void) {
	// your code goes here
    int numbers[100],temp,count=0,i,j,max,max_start,start,length,flag;
    printf("Enter the numbers:\n");
    while(scanf(" %d",&temp)!=-1)
    {
        numbers[count++]=temp;
    }
    max=0;
    start=0;
    for(i=0;i<count;i++)
    {
        for(j=i;j<count;j++)
        {
            if(numbers[i]>numbers[j])
            {
                temp=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=temp;
            }
        }
    }
   
        length=0;
        flag=0;
        for(j=0;j<count-1;j++)
        {
            if((numbers[j+1]-numbers[j])==1)
            {
                if(flag==0)
                {
                    flag=1;
                    start=j;    
                }
                length++;
            }
            else
            {
                if(max<length)
                {
                    max=length;
                    max_start=start;
                }
                length=0;
                flag=0;
            }
        }
    printf("\nmax length= %d, sequence:\n",max);
    for(i=max_start;i<max_start+max;i++)
    {
        printf("%d, ",numbers[i]);
    }
    printf("%d",numbers[i]);
	return 0;
}
