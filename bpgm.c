void print_bits(int x)
{
int i;
	for(i=0;i<sizeof(int)*8;i++)
		printf("%d",(x>>(sizeof(int)*8-i-1))&0x1);
printf("\n");
}

void reverse_bits(int x)
{
int t;
int i;
int p=x;
	for(i=0;i<sizeof(int)*8;i++,p>>=1)
	{
		t=t<<1;
		if((x>>i)&0x1)
		{
		 	t=t|0x1;
		}	
		
	}
	print_bits(t);

}
swap_bits(int x)
{
int i;
int j=1,k=1;

	for(i=0;i<sizeof(int)*8/2;i++)
        {
		if((((x)|(1<<i))^((x)|(1<(sizeof(int)*8-i-1))))){
		
		x^=(1<<i);
		x^=(1<<(sizeof(int)*8-i-1)); 		
		}
		
				
	}
	x=~x;
	print_bits(x);
}

int mult(int x,int y)
{
int res;
int flag;
res=x;
	if(y&1)	{
	
		flag=1;
		y>>=1;
	}
while(y>>=1)
	res<<=1;
if(flag)
	res+=x;
return res;
printf("mult result=%d\n",res);
}


pow(int x, int y) {

int res,flag;

res=x;
	for(;y;(y-=1),printf("y=%d\n",y))
	//printf("%d\n",x=mult(x,x));
	x*=res;
printf("\n pow result=%d\n",x);
}


main()
{
int i =13;
//print_bits(i);
//reverse_bits(i);
//swap_bits(i);
mult(8,8);
pow(7,2);
}
