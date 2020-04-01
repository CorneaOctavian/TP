#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 8

int stack[MAX_SIZE],top=-1,binary[MAX_SIZE],i;

void DecimalToBinary( int nr)
{
int k;
i=0;
for (k=0;k<MAX_SIZE;k++)
 binary[i]=0;
  while (nr>0)
{
 binary[i]=nr%2;
 nr=nr/2;
 i++;
}
	
}

void BinaryInverse(int nr)
{
nr = nr^255;
DecimalToBinary(nr);
}

void push(int nr)
{
 if (top==MAX_SIZE-1)
{
 printf("\n Stiva este plina\n ");
 return;
}
 stack[++top]=nr;
}

void pop()
 {
if (top==-1)
 {
printf("\n Stiva este goala\n");
return;
 }
top--;
 }
int main()
{
 int m,i,p,l;
printf("Numarul de elemente:");
 scanf("%d",&m);
for (i=0;i<m;i++)
  {
printf("Scrieti elementul %d:",i+1);
 scanf("%d",&l);
DecimalToBinary(l);
printf("Forma binara:");
 for (p=7;p>=0;p--)
printf("%d",binary[p]);
printf("\n");
BinaryInverse(l);
 for (p=0;p<=7;p++)
push(binary[p]);
printf("Forma binara inversata este:");
while (top!=-1)
    {
printf("%d",stack[top]);
pop();
    }
printf("\n"); 
  }
system("pause");
return 0;
}






