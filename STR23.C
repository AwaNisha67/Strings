//23. Sort thr string in ascending order
//ip:- bcda
//op"- abcd
#include<stdio.h>
#include<conio.h>
void main(){
char str[20],temp;
int i,j,len=0;
clrscr();
printf("Enter a string: ");
gets(str);
for(i=0;str[i];i++){
 len++;
 }
printf("Length of the string: %d",len);
for(i=0;i<len;i++){
 for(j=i+1;j<len;j++){
   if(str[i]>str[j]){
     temp=str[i];
     str[i]=str[j];
     str[j]=temp;
   }
  }
 }
printf("Sorted string: ");
printf("%s",str);
getch();
}