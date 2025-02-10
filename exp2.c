#include <stdio.h> 
#include<stdlib.h> 
#define SIZE 100  
 
int stack[SIZE]; 
int top = -1; 
 
void push(); 
void pop(); 
void display(); 
 
int main() 
{ 
    int choice ; 
    while (1) 
  { 
      printf("BY JAYETA KENI");  
     printf("\n Stack operation :\n"); 
     printf("1.Push(insert)\n"); 
     printf("2.Pop(delete)\n"); 
     printf("3.Display\n"); 
     printf("4.exit\n"); 
     printf("enter your choice:"); 
     scanf("%d",&choice); 
     switch(choice) 
    { 
      case 1 : 
      push(); 
      break; 
     case 2: 
     pop(); 
     break; 
     case 3 : 
     display(); 
     break; 
     case 4: 
     printf("exiting program\n"); 
     exit(0); 
     default: 
     printf("invalid choice! please try again"); 
     } 
  } 
} 
 
void push() { 
    int value; 
    if (top==SIZE-1) { 
        printf("stack overflow!cannot insert.\n"); 
    } 
     else {  
     printf("enter the value to push:"); 
     scanf("%d",&value); 
     stack[++top]=value; 
     printf("%d pushed onto the stack.\n",value); 
  } 
} 
 
void pop()  
  { 
    if (top==-1)  
    { 
        printf("stack underflow! nothing to delete.\n"); 
    } 
 else 
 { 
     printf("%d popped from the stack.\n",stack [top--]); 
    } 
   
 } 
 
void display() 
{ 
    int i; 
    if (top==-1) { 
        printf("stack is empty!\n"); 
    } 
  else  
  { 
        printf("stack elements are :\n"); 
    for (i=top;i>=0;i--) { 
        printf("%d\n",stack[i]); 
    } 
  } 
 
 }
