//Concatenate two strings
#include<stdio.h>
#include<conio.h>
void main(){
char s1[20],s2[20];
int i,j,len1=0,len2=0;
clrscr();
printf("Enter 1st string: ");
gets(s1);
for(i=0;s1[i];i++){
len1++;
}
printf("Length of 1st String: %d\n",len1);
printf("Enter 2nd String: ");
gets(s2);
for(i=0;s2[i];i++){
len2++;
}
printf("Length of 2nd String: %d\n",len2);
//concatination
for(i=0;s2[i];i++){
 s1[len1+i]=s2[i];
}
printf("%s ",s1);
getch();
}