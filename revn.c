void rev(int x) {

	int t=x,res=0;
		while(t){
			res=(res*10)+(t%10);
			t=t/10;
		}
		printf("%d is reverse of %d\n",res,x);

}

void rev2(int x){

	int m,n;
	int i,j;
	int count=0;
	int flag=1;

	m=0xffffffff;
	n=x;
	while(flag){
	  if ( n & (0x1<<count)){
		


	 }
		


	}
	


}
main() {

rev(143);
printf("\n");
rev(1000000003);
}
