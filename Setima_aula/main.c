#include <stdio.h>
#include <stdlib.h>

struct pessoa {
	char* nome; //ponteiro
	int idade; //normal
};

int main(void){

 int* intPtr = NULL; //Ponteiro
 //int x = 5; //Int normal
 //intPtr = &x;
 //x = 9;

 // malloc()
 intPtr = (int*)malloc(sizeof(int));

 if(intPtr != NULL)
	 (*intPtr) = 8;


 printf("End intPtr: %x\n", &intPtr); //Endereço de intPtr
 printf("Cont intPtr: %x\n", intPtr); //Valor dentro de intPtr (numérico)
 if(intPtr != NULL)
	 printf("Ref intPtr: %x\n", *intPtr); //Valor dentro da variável cujo endereço está dentro de intPtr
 else
	 printf("Memória insuficiente\n.");


 //------------------


 char* nomeCompleto = NULL;

 /* Allocate SIZE bytes of memory.  */
 //extern void *malloc (size_t __size) __THROW __attribute_malloc__ __wur;

 nomeCompleto = (char*)malloc(50*sizeof(char)); //Asterisco, nesse caso, é sinal de multiplicação

 if(nomeCompleto != NULL){
	 printf("Insira um nome:\n");
	 scanf("%s",nomeCompleto);
	 printf("\nO nome inserido é: %s", nomeCompleto);
 }
 else
	 printf("Memória insuficiente\n.");



 //-----------------
 //Versão com ponteiro intermediário no nome

 struct pessoa* pessoaPtrA = NULL;
 char* nomePtr = NULL;

 pessoaPtrA = (struct pessoa*)malloc(sizeof(struct pessoa));

 nomePtr = (char*)malloc(100*sizeof(char));
 //pessoaPtr->nome = (char*)malloc(100*sizeof(char));

 //Ideal tratar ponteiros nulos

 printf("Insira um nome: \n");
 scanf("%s", nomePtr);
 //scanf("%s", pessoaPtr->nome);

 pessoaPtrA->nome = nomePtr; //pega o nome lido e passa para o nome da struct via referência

 printf("Insira uma idade:\n");
 scanf("%d", &(pessoaPtrA->idade));

 printf("A pessoa se chama %s e tem idade %d.\n", pessoaPtrA->nome, pessoaPtrA->idade);


 //-----------------
 //Versão com nome direto

  struct pessoa* pessoaPtrB = NULL;
  //char* nomePtr = NULL;

  pessoaPtrB = (struct pessoa*)malloc(sizeof(struct pessoa));

  //nomePtr = (char*)malloc(100*sizeof(char));
  pessoaPtrB->nome = (char*)malloc(100*sizeof(char));

  //Ideal tratar ponteiros nulos

  printf("Insira um nome: \n");
  //scanf("%s", nomePtr);
  scanf("%s", pessoaPtrB->nome);

  //pessoaPtr->nome = nomePtr; //pega o nome lido e passa para o nome da struct via referência

  printf("Insira uma idade:\n");
  scanf("%d", &(pessoaPtrB->idade));

  printf("X - A pessoa se chama %s e tem idade %d.\n", pessoaPtrB->nome, pessoaPtrB->idade);






	return 0;
}
