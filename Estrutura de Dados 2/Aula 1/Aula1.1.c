#include<stdio.h>
#include<stdlib.h>

struct strlivros{
	int codigo_livro;
	char titulo[100];
	char autor[50];
	char assunto[100];
	char editora[25];
	int ano;
	int edicao;
	
}livros;

void main(){
	
	FILE *biblio;
	biblio = fopen("bliblioteca.txt","a+");
	
	printf("Digite o código do livro: ");
	scanf("%d", &livros.codigo_livro);
	fflush(stdin);
	printf("Digite o título do livro: ");
	gets(livros.titulo);
	printf("Digite o autor do livro: ");
	gets(livros.autor);
	printf("Digite o assunto do livro: ");
	gets(livros.assunto);
	printf("Digite a editora do livro: ");
	gets(livros.editora);
	printf("Digite o ano do livro: ");
	scanf("%d", &livros.ano);
	printf("Digite a edição do livro: ");
	scanf("%d", &livros.edicao);
	
	fprintf(biblio,"%d \n",livros.codigo_livro);
	fprintf(biblio,"%s \n",livros.titulo);
	fprintf(biblio,"%s \n",livros.autor);
	fprintf(biblio,"%s \n",livros.assunto);
	fprintf(biblio,"%s \n",livros.editora);
	fprintf(biblio,"%d \n",livros.ano);
	fprintf(biblio,"%d \n",livros.edicao);
	fclose(biblio);
	
}
