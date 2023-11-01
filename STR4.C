//input: this is the title
//output: This Is The Title
#include<stdio.h>
#include<conio.h>
void title(char *,int);
void main(){
char str[20];
int i,len,count=0;
clrscr();
printf("Enter the title: ");
gets(str);
for(i=0;str[i];i++){
 count++;
 }
len=count;
printf("\nLength of the title is: %d",len);

title(str,len);
printf("\n\t\t'%s'",str);
getch();
}
void title(char *str,int len){
int i;

for(i=0;i<len;i++){

 if(i==0 && str[i]>=92 && str[i]<=122){
  str[i]=str[i]-32;
  }

  else if(str[i]==32){

   if(str[i+1]>=92 && str[i+1]<=122)
     str[i+1]=str[i+1]-32;
  }
 }
}