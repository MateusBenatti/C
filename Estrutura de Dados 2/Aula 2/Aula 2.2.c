#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *anomes;
	int i;
	anomes = fopen("nomes.txt", "a+");
	char vnome[20];
	char vnomep[20];
	int resposta = 0;
	int naoencontrado=0;
	printf("Digita o Nome procurado:");
	scanf("%s",&vnomep);
	for( i=1;i<=10;i++){
		fscanf(anomes,"%s", vnome);
		resposta=strcmp(vnome,vnomep);
		
		if(resposta==0){
			printf("Valor Localizado: %s", vnome);
			naoencontrado=0;
			exit(1);
		}else{
			naoencontrado=1;
		}
	}
	
	if(naoencontrado==1){
		printf("Valor não Localizado");
	}
	fclose(anomes);
}
