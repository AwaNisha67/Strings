//small letters- 97-122
//capital letters - 65-90
#include<stdio.h>
#include<conio.h>
void sent(char *,int );
void main(){
char str[20];
int len,i,count=0;
clrscr();
printf("Enter a sentence: ");
gets(str);
for(i=0;str[i];i++){
 count++;
 }
len=count;
printf("\nLength of the sentence is: %d ",len);

sent(str,len);
printf("%s",str);

getch();
}
void sent(char *str,int len){
int i;
for(i=0;i<len;i++){
 if(i==0 && (str[i]>=92 && str[i]<=122)){
  str[i]=str[i]-32;
 }
 else if(str[i]==46){ //ie"."
  if(str[i+1]>=92 && str[i+1]<=122){
   str[i+1]=str[i+1]-32;
  }
  else{
   if(str[i+2]>=92 && str[i+2]<=122){
    str[i+2]=str[i+2]-32;
   }
  }
 }
}
}