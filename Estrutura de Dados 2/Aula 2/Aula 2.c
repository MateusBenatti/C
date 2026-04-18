#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *nomes;
	nomes = fopen("nomes.txt", "a+");
	char nome[20];
	int i;
	for (i=1;i<=5;i++){
		printf("Digite um nome: ");
		scanf("%s",nome);
		fprintf(nomes,"%s \n", nome);
	}
	fclose(nomes);
}
