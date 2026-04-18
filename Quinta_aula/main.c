#include <stdio.h>

void LeNumero(int*);
void LeNumeroX(int);

int main(void){

	int x;
	int* xPtr; //Ponteiro de X

	x = 7;
	xPtr = &x; //O & referencia o x, ou seja, aq esta falando q xPtr referencia x

	printf("x: %d\n", x);
	printf("end. x: %x\n", &x);
	printf("xPtr: %x\n", xPtr);
	printf("vr. xPtr: %d\n", *(xPtr));

	LeNumero(&x);
	printf("vr. xPtr: %d\n", *(xPtr));
	printf("x: %d\n", x);

	//printf("x: %d\n", x);
	//printf("xPtr: %x\n", xPtr);

	LeNumeroX(x);
	printf("vr. xPtr: %d\n", *(xPtr));
	printf("x: %d\n", x);



	return 0;
}

void LeNumero(int* intPtr){ //Dá certo
	printf("Insira um numero: \n");
	scanf("%d", intPtr);
}

void LeNumeroX(int intVlr){ //Não dá certo
	printf("Insira um numero: \n");
	scanf("%d", &intVlr);
	printf("intPtr dentro da LeNumeroX: %d\n", intVlr);
	//Perde o valor porque não retorna.
}





//Escrever um código que receba um número inteiro em uma variável e verificar se esse número é par ou impar a partir do ponteiro para essa variável.
