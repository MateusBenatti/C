#include <stdio.h>
#include <stdlib.h>

struct endereco {
	char* logradouro;
	char* numero;
	char* CEP;
	char* bairro;
};

struct pessoa {
	char* nome; //ponteiro
	int idade; //normal
	struct endereco* enderecoX; //ponteiro
};


int main(void){


	struct endereco tomate;

	//Criação de strings para endereço
	tomate.logradouro = (char*)malloc(100*sizeof(char));
	tomate.numero = (char*)malloc(8*sizeof(char));
	tomate.CEP = (char*)malloc(10*sizeof(char));
	tomate.bairro = (char*)malloc(100*sizeof(char));

	printf("Insira o logradouro:\n");
	scanf("%s", tomate.logradouro);

	printf("Insira o número:\n");
	scanf("%s", tomate.numero);

	printf("Insira o CEP:\n");
	scanf("%s", tomate.CEP);

	printf("Insira o bairro:\n");
	scanf("%s", tomate.bairro);

	//---

	struct pessoa* pessoaPtr;

	struct pessoa pessoaImp;

	pessoaPtr = &pessoaImp;

	pessoaImp.nome = (char*)malloc(150*sizeof(char));
	pessoaImp.enderecoX = &tomate;

	printf("Insira o nome:\n");
	scanf("%s", pessoaImp.nome);

	printf("Insira o idade:\n");
	scanf("%d", &(pessoaImp.idade));


	printf("A pessoa %s que tem %d anos de idade mora em %s, %s, cujo CEP é %s no bairro %s",
			pessoaPtr->nome,
			pessoaImp.idade,
			pessoaImp.enderecoX->logradouro,
			pessoaImp.enderecoX->numero,
			pessoaImp.enderecoX->CEP,
			pessoaImp.enderecoX->bairro);




	return 0;
}
