main() {

	int i=43;
	int res;
	printf("int_sz %d\n",sizeof(int *));
		while(i)
		{
			res=(res*10)+(i%10);
			i=i/10;
		}
printf("result=%d\n",res);

}
