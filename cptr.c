/* main(){
	char *p;
		printf("%d %d ",sizeof(*p),sizeof(p));
}

*/


/*
main(){
int a[2][2][2] = { {10,2,3,4}, {5,6,7,8}  };
int *p,*q;
p=&a[2][2][2];
*q=***a;
printf("%d----%d",*p,*q);
}
*/

/*
main(){
int i=400,j=300;
printf("%d..%d");
}
*/

/*
main(){
char *p;
p="Hello";
printf("%c\n",*&*p);
}
*/
/*
void main(){
	int i=5;
	printf("%d",i++ + ++i);
}

*/
main( ){
char  *q;
int  j;
for(j=0; j<3; j++) scanf(“%s” ,(q+j));
for(j=0; j<3; j++) printf(“%c” ,*(q+j));
for(j=0; j<3; j++) printf(“%s” ,(q+j));
}
