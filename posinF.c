#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int posinF(char *cado, char a){
	int i;
	int n = strlen(cado);
	for(i=n-1;i>=0;i--){
		if(cado[i]==a){
			return i;
		}
	}
	return -1;
}

void main(int argc, char* argv[]){
	printf("%i\n",posinF(argv[1],argv[2][0]));
}
