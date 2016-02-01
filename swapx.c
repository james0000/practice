main()
{
int a=10;
int b=5;
int k=8;
int i,count=0; 
printf("a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
printf("AFTER swap a=%d,b=%d\n",a,b);
printf("\nEnter a number:");
scanf("%d",&k);
if((k&(k-1)))
printf("Number is not power of 2\n");
else
printf("Number is power of 2\n");
i=k;
while(i)
{

if(i&0x1)
count++;
i=i>>1;
}
printf("\nnumber of bits set is %d\n",count);

}
