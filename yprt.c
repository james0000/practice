 main(){
	char *p="GOOD";
	char a[]="GOOD";
printf("\n sizeof(p) = %d, sizeof(*p) = %d, strlen(p) = %d", (int)sizeof(p), (int)sizeof(*p), (int)strlen(p));
	printf("\n sizeof( = %d, strlen( = %d --sizeof(*a)=%d\n", (int)sizeof(a), (int)strlen(a),(int)sizeof(*a));
}
