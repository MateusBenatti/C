#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0, c = 4, maior = 0, imaior = 0;
	int va[5],vb[5],vc[5];
	
	//va[5] = {2,5,9,6,3};
	
	//Leitura de Dados
	
	for(i = 0; i < 5; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d",&va[i]);
	}
	
	for(i = 0; i < 5; i++){
		vc[i] = va[i]; 
	}
	
	printf("\n");
	//Ordenação Crescente
	
	for(c = 4; c >= 0; c--){
		for(i = 0; i < 5; i++){
			if(va[i]>=maior){
				maior = va[i];
				imaior = i;
			}
		}
		vb[c] = maior;
		va[imaior] = NULL;
		maior = 0;
	}
	
	//Escrita
	printf("Os numeros em ordem crescente é: \n");
	for(i = 0; i < 5; i++){
		printf("%d \n",vb[i]);
	}
	printf("\n");
	//Ordenação Decrescente
	
	for(c = 0; c < 5; c++){
		for(i = 0; i < 5; i++){
			if(vc[i]>=maior){
				maior = vc[i];
				imaior = i;
			}
		}
		vb[c] = maior;
		vc[imaior] = NULL;
		maior = 0;
	}
	
	//Escrita
	printf("Os numeros em ordem decrescente é: \n");
	for(i = 0; i < 5; i++){
		printf("%d \n",vb[i]);
	}
}
