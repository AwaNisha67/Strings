//Stack using Dynamic memory allocation
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack{
  int data;
  struct stack *next;
};
typedef struct stack node;
node *start=NULL,*nn;

void push(int value){
if(start == NULL){
start=(node*)malloc(sizeof(node));
start->data=value;
start->next=NULL;
printf("\nValue has been inserted for the 1st time");
return;
}
else{
nn=(node*)malloc(sizeof(node));
if(nn != NULL){
  nn->data=value;
  nn->next=start;
  start=nn;
  printf("\nValue has been inserted ");
  }
  else{
  printf("\nStack is already full....");
  }
 }
}
void pop(){
if(start==NULL){
printf("\nStack is empty");
return;
}
start=start->next;
printf("\nValue has been deleted.");
}
void display(){
if(start==NULL){
printf("\nStack is empty");
return;
}
node *items=start;

while(items != NULL){
printf("->%d",items->data);
items=items->next;
}
}
void main(){
int ch,value;
clrscr();
printf("\nPress 1:Insert a value.");
printf("\nPress 2:Delete a value.");
printf("\nPress 3:Display value.");
printf("\nPress 4:Exit the program.");
while(1){
printf("\nEnter your choice:");
scanf("%d",&ch);

switch(ch){
   case 1:printf("\nEnter value to insert:");
   scanf("%d",&value);
   push(value);
   break;
   case 2:pop();
   break;
   case 3:display();
   break;
   case 4:printf("\nCode has been terminated.");
   exit(0);
   default:printf("\nInvalid Choice..");
  }
 }
getch();
}