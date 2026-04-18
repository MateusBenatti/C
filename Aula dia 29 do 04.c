#include <stdio.h>
#include <stdlib.h>

struct node {
	int dado;
	struct node* proximoNode;
};

struct node* deletaNodePorValor(struct node*, int);
struct node* buscaPorValor(struct node*, int);
struct node* posicao(struct node*, int);
struct node* insereEmOrdemDecrescenteNaLista(struct node*, int);
struct node* insereEmOrdemCrescenteNaLista(struct node*, int);
struct node* insereNodeNoComecoDaLista(struct node*, int);
struct node* insereNodeNoFinalDaLista(struct node*, int);
struct node* FilaNode(struct node*, int);
void imprimeLista(struct node*);


int main(void){

	printf("Começou nova implementação\n");

	struct node* primeiroNodeDecrescente = NULL;
	struct node* primeiroNodeCrescente = NULL;
	struct node* primeiroNodeInicio = NULL;
	struct node* primeiroNodeFinal = NULL;
	struct node* FilaDoNode = NULL; //lista em branco, inexistente

	int i;
	for (i = 0; i < 3; i++) {

		int x;

		printf("Insira um inteiro: \n");
		scanf("%d", &x);
		
		FilaDoNode = FilaNode(FilaDoNode, x);
		/*primeiroNodeDecrescente = insereEmOrdemDecrescenteNaLista(primeiroNodeDecrescente, x);
		primeiroNodeCrescente = insereEmOrdemCrescenteNaLista(primeiroNodeCrescente, x);
		primeiroNodeInicio = insereNodeNoComecoDaLista(primeiroNodeInicio, x);
		primeiroNodeFinal = insereNodeNoFinalDaLista(primeiroNodeFinal, x);*/
	}

	/*printf("\n\nImpressão da lista com nós inseridos em ordem decrescente\n");
	imprimeLista(primeiroNodeDecrescente);
	printf("\n\nImpressão da lista com nós inseridos em ordem crescente\n");
	imprimeLista(primeiroNodeCrescente);
	printf("\n\nImpressão da lista com nós inseridos no início\n");
	imprimeLista(primeiroNodeInicio);
	printf("\n\nImpressão da lista com nós inseridos no final\n");
	imprimeLista(primeiroNodeFinal);*/

	/*printf("\n\nO valor da posicao é: ");
	struct node* posicaoNode = posicao(primeiroNodeFinal, 5);
	if(posicaoNode != NULL) {
		printf("O valor do dado é %d e end. do próximo é 0x%x.\n", posicaoNode->dado, posicaoNode->proximoNode);
	} else {
		printf("A posição buscada não existe.\n");
	}*/


	/*printf("\n\nO node buscado é: ");
	struct node* buscadoNode = buscaPorValor(primeiroNodeFinal, 4);
	if(buscadoNode != NULL) {
		printf("O valor do dado é %d e end. do próximo é 0x%x.\n", buscadoNode->dado, buscadoNode->proximoNode);
	} else {
		printf("O valor buscado não existe na lista.\n");
	}

	printf("\nRemovendo elemento com valor 5\n");
	primeiroNodeFinal = deletaNodePorValor(primeiroNodeFinal,5);
	printf("Impresso depois de removido o node com dado igual a 5\n\n");
	imprimeLista(primeiroNodeFinal);*/
	printf("A ordem da fila �: ");
	imprimeLista(FilaDoNode);


	printf("\nAcabou nova implementação\n");


	return 0;
	system("pause");
}

struct node* FilaNode(struct node* primeiroNode, int numero){
	struct node* primNode = primeiroNode;
	struct node* atualNode = primeiroNode;
	struct node* anteriorNode = NULL;
	
	
	primNode = atualNode;
	atualNode->proximoNode = anteriorNode;
	anteriorNode = atualNode;
	
	
	return primNode;
}
/*
struct node* deletaNodePorValor(struct node* primeiroNode, int valorBuscado) {

	struct node* primNode = primeiroNode;
	struct node* atualNode = primeiroNode;
	struct node* anteriorNode = NULL;

	if(primeiroNode != NULL) {

		if(primeiroNode->dado == valorBuscado) {
			primNode = primeiroNode->proximoNode;
		} else {

			while(atualNode != NULL){
				if(atualNode->dado != valorBuscado){
					anteriorNode = atualNode;
					atualNode = atualNode->proximoNode;
				} else {
					break;
				}
			}

			if(atualNode != NULL){
				anteriorNode->proximoNode = atualNode->proximoNode;
			}
		}

		if(atualNode != NULL){
			free(atualNode);
		}
	}

	return primNode;
}

struct node* buscaPorValor(struct node* primeiroNode, int valorBuscado) {

	struct node* atualNode = primeiroNode;

	while(atualNode != NULL) {
		if(atualNode->dado == valorBuscado){
			break;
		} else {
			atualNode = atualNode->proximoNode;
		}
	}

	return atualNode;
}


struct node* posicao(struct node* primeiroNode, int posicaoNum) {

	struct node* atualNode = primeiroNode;

	for(int i = 0; i < posicaoNum; i++) {
		if(atualNode != NULL) {
			atualNode = atualNode->proximoNode;
		} else {
			break;
		}
	}

	return atualNode;
}

struct node* insereEmOrdemDecrescenteNaLista(struct node* pNode, int numero) {
	struct node* primeiroNode = pNode;
	struct node* atualNode = pNode;
	struct node* novoNode = NULL;
	struct node* anteriorNode = NULL;

	novoNode = (struct node*) malloc(sizeof(struct node));
	novoNode->dado = numero;
	novoNode->proximoNode = NULL;

	if(atualNode != NULL) { //Lista com elementos

		while(atualNode != NULL) {
			if(novoNode->dado < atualNode->dado) {
				anteriorNode = atualNode;
				atualNode = atualNode->proximoNode;
			} else {
				break;
			}
		}

		if(anteriorNode == NULL) {
			primeiroNode = novoNode;
		} else {
			anteriorNode->proximoNode = novoNode;
		}

		novoNode->proximoNode = atualNode;

	} else { //Lista vazia
		primeiroNode = novoNode;
	}

	return primeiroNode;
}

struct node* insereEmOrdemCrescenteNaLista(struct node* pNode, int numero) {
	struct node* primeiroNode = pNode;
	struct node* atualNode = pNode;
	struct node* novoNode = NULL;
	struct node* anteriorNode = NULL;

	novoNode = (struct node*)malloc(sizeof(struct node));
	novoNode->dado = numero;
	novoNode->proximoNode = NULL;


	if(atualNode != NULL) {

		while(atualNode != NULL) {

			if (novoNode->dado > atualNode->dado) {
				anteriorNode = atualNode;
				atualNode = atualNode->proximoNode;
			} else {
				break;
			}
		}

		if(anteriorNode == NULL) {
			primeiroNode = novoNode;
		} else {
			//         <-         v          ->
			// anteriorNode -> novoNode -> atualNode
			anteriorNode->proximoNode = novoNode;
		}

		novoNode->proximoNode = atualNode;


	} else { //Lista vazia
		primeiroNode = novoNode;
	}

	return primeiroNode;
}

struct node* insereNodeNoComecoDaLista(struct node* pNode, int numero) {

	struct node* novoNode = NULL;

	novoNode = (struct node*)malloc(sizeof(struct node));
	novoNode->dado = numero;
	novoNode->proximoNode = pNode;

	return novoNode;
}


struct node* insereNodeNoFinalDaLista(struct node* pNode, int numero) {

	struct node* primeiroNode = pNode;
	struct node* atualNode = pNode;
	struct node* novoNode = NULL;

	novoNode = (struct node*)malloc(sizeof(struct node));
	novoNode->dado = numero;
	novoNode->proximoNode = NULL;


	if(atualNode != NULL) { //Lista não vazia

		while(atualNode->proximoNode != NULL) {
			atualNode = atualNode->proximoNode;
		}

		atualNode->proximoNode = novoNode;

	} else { //Lista vazia
		primeiroNode = novoNode;
	}

	return primeiroNode;
}*/


void imprimeLista(struct node* pNode) {

	struct node* atualNodeImpressao = pNode;

	while(atualNodeImpressao != NULL) {
		printf("O valor do dado é %d e end. do próximo é 0x%x.\n", atualNodeImpressao->dado, atualNodeImpressao->proximoNode);
		//if(atualNodeImpressao->proximoNode != NULL)
		//	printf("EXEMPLO: O valor do dado é %d e valor do próximo dado é %d.\n", atualNodeImpressao->dado, atualNodeImpressao->proximoNode->dado);
		atualNodeImpressao = atualNodeImpressao->proximoNode;
	}
}


