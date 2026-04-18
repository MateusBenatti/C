#include <stdio.h>
#include <stdlib.h>

void bubble( int piItem[], int iQtdElementos ){
	register int i,j;
	register int iAux;
	for(i=1;i<iQtdElementos;i++){
		for(j=iQtdElementos-1;j>=i;j--){
			if(piItem[j-1] > piItem[j]){
				iAux = piItem[j-1];
				piItem[j-1] = piItem[j];
				piItem[j] = iAux;
			}
		}
	}
	return;
}

int main(void){
	int iContador;
	int q;
	
	printf("Digite a quantidade de numeros a serem ordenados: ");
	scanf("%d",&q);
	
	int aBubble[q];
	
	for(iContador = 0; iContador < q;iContador++){
		printf("Digite o valor: ");
		scanf("%d",&aBubble[iContador]);
	}
	
	
	bubble(aBubble, q);
	printf("Ordenado:");
	
	for(iContador = 0; iContador < q; iContador++){
		printf(" %d", aBubble[iContador] );
	}
	printf("\n");
	return 0;
}

