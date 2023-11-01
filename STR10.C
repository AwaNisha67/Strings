//enter bound number and print character on that bound
#include<stdio.h>
#include<conio.h>
void main(){
char str1[]={"Hello,World"};

int idx,i;
clrscr();
printf("Enter the bound number: ");
scanf("%d",&idx);

if(idx>=0 && idx<11){
 printf("Character on that bound number is %c",str1[idx]);
 }
 getch();
}