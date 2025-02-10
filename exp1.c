#include<stdio.h>
void toh(int n,char beg,char aux, char end)
{
if (n<=0)
{
printf ("Invalid entry:\n");
}
else if (n==1)
{
printf ("Move disk %d from %c to %c \n",n,beg,end);
}
else
{
toh (n-1,beg,end,aux);
printf("Move disk %d from %c to %c \n" ,n,beg,end);
toh (n-1,beg,end,aux);
//toh (1,beg,aux,aux);
toh(n-1,aux,beg,aux);
}
}
void main() {
int n;
char a,b,c;
//clrscr();
printf("Name: Jayeta Keni\n");
printf(" Enter the no of disks:");
scanf("%d",&n);
toh(n
,
'a', 'b', 'c');
//getch();
}
