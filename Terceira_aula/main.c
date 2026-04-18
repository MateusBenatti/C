#include <stdio.h>

#define TAM_ARRAY 100

int main(void){

	int preco[TAM_ARRAY];

	char x[TAM_ARRAY][TAM_ARRAY];
	
	int i;

	for (i = 0; i < TAM_ARRAY; i++){ //externo
	    int abobora;
		for(abobora = 0; abobora < TAM_ARRAY; abobora++){ //interno
			x[i][abobora] = '\0';
		}
	}

	for (i = 0; i < TAM_ARRAY; i++){
		preco[i] = 0;
	}

	for(i = 0; i < 3; i++){
		printf("Insira um nome de produto: \n");
			scanf("%s", &x[i]);

			printf("Insira o preco de produto: \n");
			scanf("%d", &preco[i]);
	}

	printf("Imprimindo:\n");

	for(i = 0; i < 3; i++){
		printf("%s: %d\n",x[i], preco[i]);
	}





	return 0;
}
