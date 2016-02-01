#include <stdio.h>

void compare(char *s1,char *s2)
{
int i=0,j=0;
if(strlen(s1)<strlen(s2))
	{
	printf("strings cannot be equal\n");
	return;
	}
for(i=0;i<strlen(s1);i++)
{
	for(j=0;j<strlen(s2);j++)
	if(s1[i+j]==s2[j])
		continue;
	else
	{
        printf(">>strings cannot be equal\n");
	break;
        
        }

if(j==strlen(s2))
{
printf("Strings are equal\n");
return;
}
}
}

main()
{
char s1[]={'r','s','o','m','e','t','\0'};
char *s2="some";
compare(s1,s2);
}
