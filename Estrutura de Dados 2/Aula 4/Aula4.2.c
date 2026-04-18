#include<stdio.h>
#include<string.h>

int main(){
	char stra[30] = "Engenharia";
	char strb[30] = "engenharia";
	
	//Comparação
	//strcmp(stra,strb) - 0(Strings Iguais), -1 (Stirng A Menor que B), 1 (String A Maior que B)
	int verigual = strcmp(stra,strb);
	
	//strncmp(stra,strb, nCaracters);
	printf("O Resultado: %d",verigual);
	
}
