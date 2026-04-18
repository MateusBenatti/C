#include<stdio.h>
#include<string.h>

int main(){
	char string1[30] = "Engenharia";
	char string2[30] = "Computação";
	int tamanho = 0;
	
	strcat(string1,string2);
	printf("%s",&string1);
	
	strcpy(string1,"Engenharia");
	strcat(string1," da ");
	printf("\n%s",string1);
	strncat(string1,string2,4);
	printf("\n%s",string1);
	
	tamanho = strlen(string1);
	printf("\nO tamanho da string e: %d",tamanho);
	
}
