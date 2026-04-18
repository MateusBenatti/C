#include<stdio.h>
#include<string.h>

int main(){
	char nome[25];
	char sobrenome[25];
	char nomecompleto[50] = "";
	printf("Digite o nome: ");
	scanf("%s",&nome);
	printf("Digite o sobrenome: ");
	scanf("%s",&sobrenome);
	
	//copia o sobrenome para a variavel nome
	//strcpy(nome,sobrenome); - string1,string2
	//strncpy - (sDestino,sOrigem,nCaracteres);
	
	//Concatenação
	//strncat - (string1,string2, nCaracterString2);
	strncat(nomecompleto,nome,2);
	
	//strcat - (string1,string2);
	strcat(nomecompleto," ");
	strcat(nomecompleto,sobrenome);
	printf("O nome completo e: %s",nomecompleto);
}
