//count all vowels {a,e,i,o,u}
#include<stdio.h>
#include<conio.h>
void main(){
char st1[20];
int i,len=0,count=0;
clrscr();
printf("Enter a string: ");
gets(st1);
for(i=0;st1[i];i++){
len++;
}
printf("Length of the string: %d",len);

for(i=0;st1[i];i++){
if(st1[i]=='a' || st1[i]=='e' || st1[i]=='i' || st1[i]=='o' || st1[i]=='u'){
  count++;
 }
}
printf("\nNumber of vowels: %d",count);
getch();
}