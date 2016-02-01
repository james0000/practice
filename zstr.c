main ( ){
int i=10,k=22;
char *p="GO0D";
char a[]="GOOD";

i=i++;
printf("%d\n",i);
k=++k;
printf("\nk=%d\n",k);

printf("strlen(p): %d \tsizeof(p)=%d \t sizeof(*p)=%d\n",strlen(p),sizeof(p),sizeof(*p));

printf("strlen(a):%d\tsizeof(a)=%d\n",strlen(a),sizeof(a));

}
