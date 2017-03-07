#include <stdio.h>
#include <stdlib.h>
int len(char *cado){
	int i;
	int n=0;
	for(i=0;cado[i]!='\0';i++){
		n++;
	}
	return n;
}

int posin(char *cado, char x){
	int i;
	int n = len(cado);
	for(i=0;i<n;i++){
		if(cado[i]==x){
			return i;
		}
	}
	return -1;
}

void main(int argc, char* argv[]){
	printf("%i\n",posin(argv[1],argv[2][0]));
}
