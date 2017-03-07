#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int LongCadena(char * cado){
	int i = 0;
	while(cado[i]!='\0'){
		i++;
	}
	return i;
}

char main(){
	int a, b, c;
	char cado[100];
	char cadd[100];

	printf("Enter the string:\n");
	scanf("%s\n", cado);
	
	for(a=0;cado[a] != '\0';a++){
		c = a - 1;
	}
	for(b=0;b <= a-1;b++){
		cadd[b] = cado[a];
		a--;
	}
	printf("the reverse string is: %s", cadd);
}
