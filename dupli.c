/*ANAGRAM*/
#include<stdio.h>
#include<string.h>
int check_anagram(char* str1, char* str2)
{
int l1 = strlen(str1);
int l2=strlen(str2);
if(l1 != l2)
return 0;
 
int val=0;
int sum1=0,sum2=0;
int i;
for( i=0;i < l1; i++)
 {
   sum1 += str1[i];
   sum2 += str2[i];
   val ^= str1[i] ^ str2[i];
}
 
if((val == 0) && (sum1 == sum2))
   return 1;
else
   return 0;
 
return 0;
}






/*Find the duplicates in an array*/

int GCD(int x,int y) {

	if((x>0) && (y>0))
	if(x>y)
		return GCD(x-y,y);
	else if(x==y)
		return x;
	else
		return GCD(x,y-x);

	return -1;
}
	


main() {
	
	int res,lcm;
	int x=9,y=15;
	
	int *p;
	char *s="GOOD";
	char a[]={'G','O','O','D'};
	if(!strcmp(s,a))
		printf("\n strings are equal\n");
	else
		printf(" s=\"GOOD\" & a={'G','O','O','D'}; are not equal\n");
	printf("\n strlen =%d %d\n",strlen(s),a[4]);	
	p=&x;
	printf("BE %8x -- %d\n",p,*p);
	*p++;
	printf("AF%8x -- %d\n",p,*p);
	res=GCD(x,y);

	lcm=x*y/GCD(x,y);

	printf("\nGCD=%d    LCM=%d\n",res,lcm);
	
	

}
