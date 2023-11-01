#include<stdio.h>
#include<conio.h>
void concetenate(char [],char[],char[],int ,int);
void main(){
//concatinate two strings
//Hello World
char s1[5],s2[5],s3[10];
int i,j,len1=0,len2=0;
clrscr();
printf("String 1: ");
gets(s1);
printf("String 2: ");
gets(s2);

for(i=0;s1[i];i++){
 len1++;
 }
for(i=0;s2[i];i++){
 len2++;
 }
printf("\nLength of String1: %d",len1);
printf("\nLength of String2: %d",len2);
concetenate(s1,s2,s3,len1,len2);
printf("\nConcatenated string: %s",s3);
getch();
}
void concetenate(char s1[],char s2[], char s3[], int len1,int len2){
int i,j;
//1s string copying to s3
for(i=0;i<len1;i++){
  s3[i]=s1[i];
}
for(j=0;j<len2;j++){
 s3[len1+j]=s2[j];
 }
s3[len1+len2]='\0';
}