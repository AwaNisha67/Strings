#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
  char s1[20],s2[10];
  int i,k,j,l1,l2,c1=0,c2=0,loc;
  clrscr();
  printf("Enter a string: ");
    gets(s1);
  for(i=0;s1[i];i++){
    c1++;
  }
  printf("Length of the string: %d",c1);
    l1=c1;
  printf("\nString to add: ");
    gets(s2);
  for(i=0;s2[i];i++){
    c2++;
  }
printf("Length of the string to add : %d",c2);
l2=c2;

for(i=0;s1[i];i++)
  if(s1[i]=='i' && s1[i+1]=='s' && (s1[i+2]==' ' || '\0') && (s1[i-1]==' ' || '\0')){
   loc=i;
 for(k=1;k<=l2-strlen("is");k++){

  for(j=l1+k;j>loc;j--){
   s1[j+1]=s1[j];
   }
  }
   for(i=0;i<l2;i++){
    s1[loc+i]=s2[i];
    }
}
printf("\n%s",s1);
getch();
}