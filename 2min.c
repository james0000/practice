

main() {
int a[]={11,4,8,7,5,1,12,3};
int i,j;
int min1=a[1],min2,sum=0;
min2=a[0];
min1=min2=200;
	for(i=0;i<sizeof(a)/sizeof(int);i++) {
	
		if(a[i]<min2) {
			if(a[i]<min1){
				min2=min1;
				min1=a[i];
			}
			else {
				min2=a[i];
			
		
			}
			sum+=a[i];		
		}
	}
	printf("\nsmallest of all %d <-->  2nd smallest is %d\n",min1,min2);
}

