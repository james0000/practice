#include<stdio.h>
main()
{
char i=500, *c;
int *p;


printf("%d:%d--int:%d \n",(int)sizeof(*c),(int)sizeof(c),(int)sizeof(*p));

printf("ptr=%d\n",(int)sizeof(p));
}
