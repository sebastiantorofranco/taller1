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

char existe(char *cado, char x){
	int i;
	int n = len(cado);
	for(i=0;i<n;i++){
		if(cado[i]==x){
			printf("Si esta\n");
		}
		else{
			printf("No esta\n");
		}
	}
}

int main(){
	char a = 'o';
	char *cad01 = "hola";
	
	existe(cad01, a);
	
}
