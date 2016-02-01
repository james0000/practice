
void rev(char *str) {

	int i,len=strlen(str);
	int j=0;
	printf("INITIAL  %s --%d\n",str,strlen(str));
	for (i=0;i<len/2;i++) {
		str[i]^=str[len-i-1];
		str[len-i-1]^=str[i];
		str[i]^=str[len-i-1];	
		printf("%c\n",str[i]);
	}
	printf("FINAL string %s",str);

}


main () {

char *str="find";


        int i,len=strlen(str);
        int j;
	str=(char *)malloc(18);
	str[4]='\0';
	strcpy(str,"define hello");

	//str[7]='\0';
        printf("INITIAL  %s --%d\n",str,j=len=strlen(str));
	len=strlen(str);
	j=len-1;
        for (i=0;i<len/2;i++,j--) {
                str[i]^=str[j];
                str[j]^=str[i];
                str[i]^=str[j];
         //       printf("%c\n",str[i]);
        }

printf("FINAL string: %s\n",str);
///printf("INITIAL  %s --%d\n",s,strlen(s));
//rev(s);

}
