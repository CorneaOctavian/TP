#include <stdio.h>
#include <stdlib.h>

int main()
{
int *p, v[20] = { 1,3,2,51,5,2,0 };
	p = v;
 printf("Pointerul indica spre primul element al tabloului, v[0]=%d\n", v[0]);
p++;
 printf("Dupa incrementarea adresei pointer-ului, indexul elementului spre care indica creste cu 1 si indica spre v[1]=%d\n", v[1]);
(*p)--;
 printf("Dupa decrementarea valorii pointer-ului, valoarea  elementului spre care indica scade cu 1 : v[1]=%d\n", v[1]);
p--;
 printf("Dupa decrementarea adresei pointer-ului, indexul elementului spre care indica scade cu 1 si indica spre v[0]=%d\n", v[0]);
(*p)++;
 printf("Dupa incrementarea valorii pointer-ului, valoarea elementului spre care indica creste cu 1 : v[0]=%d\n", v[0]);
system("pause");
return 0;

}