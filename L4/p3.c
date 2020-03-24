#include <stdio.h>
#include <stdlib.h>

int main()
{

int m, n, *aux;
aux = (int*)malloc(sizeof(int));
 printf("m=");
  scanf("%d", &m);
 printf("n=");
  scanf("%d", &n);
*aux = m;
m = n;
n = *aux;
 printf("Dupa interschimbare\n m=%d si n=%d\n", m, n);
system("pause");
return 0;

}