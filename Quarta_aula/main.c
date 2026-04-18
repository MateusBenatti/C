#include <stdio.h>

#define TAM_ARRAY 100


struct produto {
	int preco;
	char* nome;
};

void PrintProduto(struct produto);
struct produto InicializaProduto(struct produto, char[], int);

int main(void){

	int 			x;
	char			nomeInput[50];
	struct produto	prod1;

	int 			x2;
	char			nomeInput2[50];
	struct produto	prod2;


	printf("Insira um nome de produto: \n");
	scanf("%s", nomeInput);

	printf("Insira o preço do produto: \n");
	scanf("%d", &x);

	printf("Insira um nome de produto: \n");
	scanf("%s", nomeInput2);

	printf("Insira o preço do produto: \n");
	scanf("%d", &x2);

	prod1 = InicializaProduto(prod1, nomeInput, x);
	prod2 = InicializaProduto(prod2, nomeInput2, x2);

	PrintProduto(prod1);
	PrintProduto(prod2);


	/*int preco[TAM_ARRAY];

	char x[TAM_ARRAY][TAM_ARRAY];

	for (int i = 0; i < TAM_ARRAY; i++){ //externo
		for(int abobora = 0; abobora < TAM_ARRAY; abobora++){ //interno
			x[i][abobora] = '\0';
		}
	}

	for (int i = 0; i < TAM_ARRAY; i++){
		preco[i] = 0;
	}

	for(int i = 0; i < 3; i++){
		printf("Insira um nome de produto: \n");
			scanf("%s", &x[i]);

			printf("Insira o preco de produto: \n");
			scanf("%d", &preco[i]);
	}

	printf("Imprimindo:\n");

	for(int i = 0; i < 3; i++){
		printf("%s: %d\n",x[i], preco[i]);
	}*/


	return 0;
}

struct produto InicializaProduto(struct produto produtoInit, char nomeProd[], int preco){
	produtoInit.nome = nomeProd;
	produtoInit.preco = preco;

	return produtoInit;
}

void PrintProduto(struct produto produtoImprimir){

	printf("\n\nO nome do produto é: %s\nO professor disse que seu preço é: R$%d", produtoImprimir.nome, produtoImprimir.preco);

}
