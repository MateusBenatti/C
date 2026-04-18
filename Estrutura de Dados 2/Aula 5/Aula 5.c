#include <stdio.h>
#include <string.h>

int main(){
	int c = 'a';
	char fonte[] = "Teste aula - Estrutura de Dados, II";
	char deli[] = "-,";
	
  	printf("Frase original: %s\n", fonte);
  	
  	printf("Digite a letra a ser encontrada: ");
	scanf("%c",&c);
	
	printf("\n\nUsando o STRLEN\n");
 	printf("O tamanho da String e: %lu", strlen(fonte));
 	
 	printf("\n\nUsando o STRCHR");
  	if(strchr(fonte, c) != NULL){
   	 printf("\nO caractere '%c' foi encontrado!\n", c);
   	 printf("String a partir dele: %s\n", strchr(fonte, c));
  	} else {
   	 printf("\nO caractere %c não foi encontrado!\n", c);
  	}
  	
  	printf("\n\nUsando o STRTOK\n");
  	char *resultado = strtok(fonte, deli);
  	while(resultado != NULL){
    	printf("%s\n", resultado);
    	resultado = strtok(NULL, deli);
 	}
 	
  	return 0;
}
