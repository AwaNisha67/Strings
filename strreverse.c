#include<stdio.h>
int reverseString(char str[],int len){
    if(str==NULL){
        return -1;
    }
    int start=0;
    int end=len-1;
    char temp;
    while(start<end){
    temp=str[start];
    str[start]=str[end];
    str[end]=temp;

    start++;
    end--;
    }
}
void main(){
   char str[20];
   int i,len=0;
   printf("Enter a string:");
   gets(str);

   for(i=0;str[i];i++){
    len++;
   }
   printf("Length of the string is: %d",len); 

   reverseString(str,len);

   printf("%s",str); 
}