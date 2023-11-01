//to print each character in new line
#include<stdio.h>
#include<conio.h>
void main(){
char s1[]={"Hello World"};
int i;
clrscr();
printf("%s\n",s1);

for(i=0;s1[i];i++){
 printf("\t%c\n",s1[i]);
 }
getch();
}