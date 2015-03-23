#include <stdio.h>

int main()
{
    char string1[100],string2[100];
    int input1[26],input2[26],i;
    for(i=0;i<26;i++){
    	input1[i]=0;input2[i]=0;}
    scanf(" %s",string1);
    scanf(" %s",string2);
    i=0;
    while(string1[i]!='\0' && string2[i]!='\0'){
    	input1[string1[i]-97]++;
    	input2[string2[i]-97]++;
    	i++;}
    if(!(string1[i]=='\0' && string2[i]=='\0')){
    	printf("NO");
    	return 0;}
    for(i=0;i<26;i++){
    	if(input1[i]!=input2[i])
    		break;}
    if(i==26)
    	printf("YES");
    else
    	printf("NO");
    return 0;
}
