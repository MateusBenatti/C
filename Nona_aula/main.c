#include <stdio.h>
#include <stdlib.h>

struct node {
	int dado;
	struct node* proximoNode;
};


int main(void){

	printf("Começou\n");

	struct node* primeiroNode = NULL; //lista em branco, inexistente

	struct node* anteriorNode = NULL;
	struct node* atualNode = NULL;

	for (int i = 0; i < 3; i++) {
		anteriorNode = atualNode;
		atualNode = NULL;

		int x = 0; //intermediário

		//Criação do atual node
		atualNode = (struct node*)malloc(sizeof(struct node));

		printf("Insira um inteiro: \n");
		scanf("%d", &x);


		atualNode->dado = x;
		atualNode->proximoNode = NULL;

		if (primeiroNode == NULL) {
			primeiroNode = atualNode; //Define primeiro
		}
		else {
			anteriorNode->proximoNode = atualNode; //Encadeia o primeiro com o segundo node da lista
												   //Encadeia o anterior com o atual node da lista
		}

	}



	struct node* atualNodeImpressao = primeiroNode;

	while(atualNodeImpressao != NULL) {
		printf("O valor do dado é %d e end. do próximo é %x.\n", atualNodeImpressao->dado, atualNodeImpressao->proximoNode);
		atualNodeImpressao = atualNodeImpressao->proximoNode;
	}

	printf("Acabou\n");

	return 0;
}
