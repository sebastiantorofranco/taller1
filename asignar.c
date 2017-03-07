#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *asignarcadena(char *cado, char a){
	int i;
	for(i=0;i<strlen(cado);i++){
		cado[i]=a;
	}
	return cado;
}
void main(int argc, char* argv[]){
	char *cad1 = argv[1];
	asignarcadena(cad1,argv[2][0]);
	printf("%s\n",cad1);
}
