#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[100];  
    int  i,j,k,count=0,n;
 
    printf("Inserire una frase: ");
    fgets(s, sizeof(s), stdin);
     
    for(j=0;s[j];j++);
	 n=j; 
	for(i=0;i<n;i++)  {
     	count=1;
    	if(s[i]){
 		  for(j=i+1;j<n;j++){
	        if(s[i]==s[j]){
                count++;
                s[j]='\0';
	     	}
	      }
	      printf(" '%c' = %d \n",s[i],count);
       }  
 	}
    return 0;
}