//input:- THis IS ToggLe
//output:- thIS is tOGGlE
#include<stdio.h>
#include<conio.h>
void toggle(char [],int);
void main(){
char str[20];
int i,len,count=0;
clrscr();
printf("Enter a sentence: ");
gets(str);
for(i=0;str[i];i++){
 count++;
}
len=count;
printf("\nLength of the sentence is: %d\n",len);

toggle(str,len);
printf("%s",str);
getch();
}
void toggle(char str[],int len){
int i=0;
for(i=0;i<len;i++){
 if(str[i]>=92 && str[i]<=122){
 str[i]=str[i]-32;
 }
 else if(str[i]>=65 && str[i]<=90){
 str[i]=str[i]+32;
  }
 }
}