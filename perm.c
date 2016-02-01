#include<stdio.h>
void main(void ) {
 int x,n;
 int i;
 int flag=0;
 int t;
 	printf("Enter a number \t");
 	scanf("%d",&x);
 	t=x;
 	printf("Enter a number \t");
 	scanf("%d",&n);
 	if(n%2==0)
 		i=n;
 	else{
 		flag=1;
 		i=n-1;
 		}
 	while(i>=1){
 	
 		x=x<<1;
 		i=i/2;
printf("Final result=%d\n",x);
 	}
 	if(flag)
 		x*=t;
 		
 printf("Final result=%d\n",x);
 	
 

}
