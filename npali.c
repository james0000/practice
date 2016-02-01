long pow(int x, int y)
{
	if (!y) return 1;
	return x * pow(x,y-1);
}	


main() {
	
int i,j,t,count=0,k;
int a[100];
int b=0;;
i=24524;
k=0;
t=i;
while(t>0){a[k++]=t%10; t=t/10;count++; printf("\nt=%d\n",t); }
t=0;
printf("count=%d\n",count);
for (j=0;j<count;j++) printf("%d,\t",a[j]);

//while(t<k/2) {if(a[t]==a[k-t-1]) continue; else {printf("\n####***NOT PALINDROME\n"); return;}t++;}
t=0;
//while(t<count/2) {if(a[t]==a[count/2+t]) t++; }
printf("\n");
for(b=0;b<count/2;b++)
if(a[b]==a[count-b-1])
{
	printf("%d",b);
	continue;
}
else
{
printf("\n####***NOT PALINDROME\n"); return;
}
printf("\nPalnindrome\n");

printf("count=%d\n",count);
t=i;	
k=i;
	for(j=1;j<count/2;j++) {
		
		if(t/pow(10,count-j)==(k%pow(10,j))){ k=k/pow(10,j); continue; }
		else {

			printf("\n NOT palindrome\n");
			return;
		}

	}
	printf("\nPalnindrome\n");
}

