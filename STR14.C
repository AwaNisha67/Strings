//two strings and print the difference
#include<stdio.h>
#include<conio.h>
void main(){
char st1[]={"Helloworld"};
char st2[]={"hELLO"};
int i,len1,len2,diff=0;
clrscr();
for(i=0;st1[i];i++){
 diff=st1[i]-st2[i];
 printf("\n %d: %c - %c = %d",i,st1[i],st2[i],diff);
 }
getch();
}







