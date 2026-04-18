#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0, c = 0, maior = 1000000, imaior = 0;
	int va[5],vb[5];
	
	//va[5] = {2,5,9,6,3};
	
	//Leitura de Dados
	
	for(i = 0; i < 5; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d",&va[i]);
	}
	
	printf("\n");
	
	for(c = 0; c < 5; c++){
		for(i = 0; i < 5; i++){
			if(va[i]<=maior){
				maior = va[i];
				imaior = i;
			}
		}
		vb[c] = maior;
		va[imaior] = 1000000;
		maior = 1000000;
	}
	printf("Os numeros em ordem crescente é: \n");
	for(i = 0; i < 5; i++){
		printf("%d \n",vb[i]);
	}
}
