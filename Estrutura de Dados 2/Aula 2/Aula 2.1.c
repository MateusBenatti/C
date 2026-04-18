#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *anomes;
	anomes = fopen("nomes.txt","a+");
	char vnomes[20];
	int i;
	for( i =1;i<=5;i++){
		fscanf(anomes,"%s",vnomes);
		printf("%s \n",vnomes);
	}
	fclose(anomes);
}
