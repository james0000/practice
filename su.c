int sum(int x, int y) {


int res=0,i,carry=0;
int a=x,b=y;

for(i=0;i<sizeof(int)*8-1;i++)
	if(((a&(1<<i))&&(b&(1<<i))))
		if (carry)
		  res|=(1<<i);
		else
		   carry=1;
	else if ((!a&(1<<i) &&(b&(1<<i))) || (!(b&1<<i)&& (a&(1<<i))))

		{
			if(!carry)
			
			res|=(1<<i);
			else
			carry=1;
		}
	else{
		if(carry)
			res|=(1<<i);	

		carry=0;

		}
return res;
}



main() {

int i=0;

printf("sum=%d\n",sum(7,6));

}


