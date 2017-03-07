#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int longCadena(char *cado);
void copiarCaracteres(int N, char *cado, char  *cadd);
int compararCadenas(char *cado, char *cadd);
void copiarCadena(char *cado, char *cadd);
void concat(char *cado, char *cadd, char *cadf);
char *HaciaMayusculas(char *cado, char *cadd);

int main(int argc, char *argv[]){

	char *cad01 = argv[1];
	char *cad02, *cad03, *cad04;
	char *cad05 = argv[2];
	char *cad06;
	int N = argc;
	int from = argc;
	int to = 5;
	
	/*Copiar la cadena*/
	
	int n = longCadena(cad01);
	cad02 = (char *)malloc (n + 1 * sizeof(char));
	copiarCadena(cad01, cad02);
	
	/*Copiar caracteres especificos de la cadena*/
	
	cad03 = (char *)malloc (N + 1 * sizeof(char));
	copiarCaracteres(N, cad01, cad03);
	
	/*Comparar las cadenas*/
	
	compararCadenas(cad01, cad05);
	
	/*Concatenar cadenas*/
	
	concat(cad01, cad05, cad06);
	
	/*Pasar la cadena hacia mayusculas*/
	*HaciaMayusculas(cad01, cad05);
	

}
int longCadena(char *cado){
	int i = 0;
	while(cado[i]!='\0'){
		i++;
	}
	printf("longituda cadena: %d\n", i);
	return i;
}

void concat(char *cado, char *cadd, char *cadf){
	printf("CONCATENAR: %s, y %s\n", cado, cadd);
	int a = longCadena(cado);
	int b = longCadena(cadd);
	int c = a + b;
	int i;
	
	cadf = (char *)malloc ((c + 1) * sizeof(char));
	
	for(i=0;i<a;i++){
		cadf[i] = cado[i];
	}
	for(i=0;i<=b;i++){
		cadf[a] = cadd[i];
		a++;
	}
	printf("%s\n", cadf);
}

int compararCadenas(char *cado, char *cadd){
	printf("COMPARAR:%s, %s\n", cado, cadd);
	int A = longCadena(cado);
	int B = longCadena(cadd);
	int i;
	int p, q = 0;
	
	if(A=B || A > B){
		p = B;
	}
	else{
		p = A;	
	}
	
	for(i=0;i<p;i++){
		if(cado[i]==cadd[i]){
			q++;
			if(q==p){
				printf("0\n");
				return 0;
			}
			else{
				if(cado[i]=='\0'){
					printf("-1\n");
					return -1;
				}
				else{
					if(cadd[i]=='\0'){
						printf("1\n");
						return 1;
					}
					else{
						if(cado[i]>cadd[i]){
							printf("Uno\n");
							return 1;
						}
						else{
							printf("Menos uno\n");
							return -1;
						}
					}
				}
			}
		}
	}
}

void copiarCadena(char *cado, char *cadd){
	printf("COPIAR LA CADENA: %s\n", cado);
	int i;
	int l = longCadena(cado);
	for(i=0;i<l;i++){
		cadd[i] = cado[i];
	}
	printf("%s\n", cadd);
}

void copiarCaracteres(int N, char *cado, char *cadd){
	printf("COPIAR CARACTERES: %c, %c, %c\n", cado[0], cado[1], cado[2]);
	int i;
	for(i=0;i<N;i++){
		cadd[i] = cado[i];
	}
	printf("Caracteres resultantes: %s\n", cadd);
}

char *HaciaMayusculas(char *cado, char *cadd){
	int i;
	int a = longCadena(cado);
	for(i=0;i<a;i++){
		cadd[i]= cado[i] - 32;
	}
	printf("%s\n", cadd);
}




