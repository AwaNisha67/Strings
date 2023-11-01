#include<stdio.h>
#include<conio.h>
void main(){
char st1[]={"Hello World"};
int i,len=0;
char temp,cpy[20];
clrscr();
for(i=0;st1[i];i++){
 len++;
 }
printf("Length of the string: %d",len);
for(i=0;i<len/2;i++){
 temp=st1[i];
 st1[i]=st1[len-1-i];
 st1[len-1-i]=temp;

 }
printf("\nReversed: %s",st1);
//copying
for(i=0;i<len;i++){
 cpy[i]=st1[i];
}
printf("\n Copied String : %s",cpy);
getch();
}