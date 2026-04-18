#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define TAM_STR 20

int main(void){


	char stringDemonstracao[TAM_STR] = "Abacaxi";
	char charProcessado;
	char charOriginal = 'a';

	//Operador ternário: ?:
	// condição ? valor_se_verdade : valor_se_falso;
    //int x = 6;
	//x = ((x == 4) ? 3 : 5);

	//funções de tratamento de maiúsculo e minúsculo - começo
	//presentes na biblioteca ctype.h
	//islower(char) retorna verdadeiro ou falso
	printf("É minusculo? ");
	if(islower(charOriginal))
		printf("Sim");
	else
		printf("Nao");

	//isupper(char) retorna verdadeiro ou falso
	printf("\nÉ maiusculo? ");
	if(isupper(charOriginal))
		printf("Sim");
	else
		printf("Nao");

	//toupper(char) retorna o char em maiúsculo
	charProcessado = toupper(charOriginal);
	printf("\nDepois do 'toupper' %c", charProcessado);

	//tolower(char) retorna o char em minusculo
	charProcessado = tolower(charProcessado);
	printf("\nDepois do 'tolower' %c", charProcessado);
	//fim

	// Exercício: Escrever função que converta uma string de digitos em um valor inteiro.


	//Cast - começo
	int x = 0;
	double y = 3.141592;
	char charA = 'A';

	printf("\n%d", (int)y);

	x = (int)charA;
	printf("\n%x", x);
	printf("\n%x", charA);
	//Fim

	//strlen(char[]) retorna o tamanho da string fornceda em size_t, requerendo cast para int ou long.
	//Presente na biblioteca string.h
	printf("\n%s com comprimento %d", stringDemonstracao, (int)strlen(stringDemonstracao));



	//
	char stringCopiada[TAM_STR];

	strcpy(stringCopiada, "Maca");
	printf("\n%s", stringCopiada);

	strncpy(stringCopiada, stringDemonstracao, TAM_STR);
	printf("\n%s", stringCopiada);

	//

	return 0;
}
