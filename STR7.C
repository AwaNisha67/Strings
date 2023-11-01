#include<stdio.h>
#include<conio.h>

int comp(char [],char[],int,int);
void main(){
  char st1[20],st2[20];
  int x,i,len1=0,len2=0;
  clrscr();

  printf("Enter the 1st string: ");
gets(st1);

for(i=0;st1[i];i++){
 len1++;
 }
printf("\nLength of string1 is: %d",len1);

printf("\nEnter the 2nd string: ");
gets(st2);
for(i=0;st2[i];i++){
 len2++;
 }
printf("\nLength of string2 is: %d",len2);

x = comp(st1,st2,len1,len2);
if(x==-1){
printf("\nNot same");
}
else if(x==-2){
printf("\nMismatched length");
}
else{
printf("\nMatched");
}
getch();


}
int comp(char st1[],char st2[],int len1,int len2){
int i;
if(len1==len2){
   for(i=0;i<len1;i++){
     if(st1[i]==st2[i]){
	return 1;
      }

      else{
      return -1;
      }
   }
 }
 else{
 return -2;
 //printf("Length of the string is mismatched.");
 }
}