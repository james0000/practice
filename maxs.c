#define MAX2(a,b) ((a)>(b))?a:b
#define MAX(a,b,c) ((a)>(b))?MAX2(a,c):MAX2(b,c)
int a[]={11, 3, 5,6,14,10,1,7,2,81};

int max_sum(int s,int e) {
static maxsum,i,j;

if(s<0||e<0||e>s) return -1;
if(s==e) return a[e];
if(s==e+1) return a[s]+a[e];

a=maxsum+max_sum(s+1,e);
b=maxsum+max_sum(s+1,e+1);
c=maxsum+max_sum(s,e+1);

	if(a>b) {

		if(a>c) {
				
			
		}
		else
		{
			
		}
	}
	 else {
		if(b>c) {
		}
		else
		{
		
		}
	}

if(maxsum<res){
i=s;j=e;
}
}

main() {

	int i;
	//int a[]={11, 3, 5,6,14,10,1,7,2,81};
	int sum=0;

	for( i=0;i<sizeof(a)/sizeof(int)-1;i++){
	
		if(sum<a[i]+a[i+1])
			sum=a[i]+a[i+1];		
	
	}

	printf("Max 2 sum is %d\n",sum);
	
printf("Max subarry sum is %d\n",max_sum(0,3));//sizeof(a)/sizeof(int)));


}
