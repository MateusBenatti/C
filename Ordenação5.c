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

void selection(int piItem[],int iQtdElementos){
	register int i,j, iMinimo, iAux;
		for( i=0; i<iQtdElementos-1; i++){
			iMinimo=i;
			for( j=i+1; j<iQtdElementos; j++){
				if (piItem[j] < piItem[iMinimo]){
					iMinimo=j;
				}	
			}
	iAux = piItem[i];
	piItem[i] = piItem[iMinimo];
	piItem[iMinimo] = iAux;
	}
	return;
}

void insert(int piItem[], int iQtdElementos){
	register int i,j, iAux;
	for( i=1; i<iQtdElementos; i++){
		iAux = piItem[i];
		for( j=i-1; j>=0 && iAux < piItem[j]; j--){
			piItem[j+1]=piItem[j];
		}
		piItem[j+1]=iAux;
	}
	return;
}

void qs( int *item, int left, int right);
void qs( int *item, int left, int right){
	int i,j;
	char x,y;
	i = left;
	j = right;
	x = item [ (left+right)/ 2];
	
	do
	{
		while(item[i]<x && i<right){
			i++;
		}
		
		while(x<item[j] && j>left){
			j--;
		}
		
		if(i<=j){
			y = item[i];
			item[i] = item[j];
			item[j] = y;
			i++;
			j--;
		}
	} while(i<=j);
	
	if( left<j ){
		qs(item, left, j);
	}
	if( i<right ){
		qs(item, i, right);
	}
	return ;
}

void mergesort(int v[],int inicio,int im){
	int i,j,k,meio,*auxiliar;
	if(inicio == im){
		return;
	}

	meio = (inicio+im)/ 2;
	mergesort(v,inicio,meio);
	mergesort(v,meio+1,im);

	i = inicio;
	j = meio+1;
	k = 0;
	auxiliar = (int *) malloc(sizeof(int) * (im-inicio+1));
	while(i<meio+1 || j<im+1){
		if( i == meio+1){
			auxiliar[k] = v[j];
			j++; k++;
		}else if ( j == im+1){
			auxiliar[k] = v[i];
			i++; k++;
		}else if (v[i] < v[j]){
			auxiliar[k] = v[i];
			i++; k++;
		}else{
			auxiliar[k] = v[j];
			j++; k++;
		}
	}
	for( i=inicio; i<=im; i++){
		v[i] = auxiliar[i-inicio];
	}
	free(auxiliar);
	return ;
}

int main(void){
	int iContador , q = 500;
	
	int Vet[q], VetC[q];
	
	for(iContador = 0; iContador < q; iContador++){
		Vet[iContador] = rand() % 100;
	}
	for(iContador = 0; iContador < q; iContador++){
		VetC[iContador] = Vet[iContador];
	}
	
	printf("Vetor Aleatorio: ");
	for(iContador = 0; iContador < q; iContador++){
		printf(" %d", Vet[iContador]);
	}
	printf("\n\n");
	
	//Bubble
	bubble(Vet, q);
	printf("Ordenado BubbleSort:");
	
	for(iContador = 0; iContador < q; iContador++){
		printf(" %d", Vet[iContador] );
	}
	printf("\n\n");
	for(iContador = 0; iContador < q; iContador++){
		VetC[iContador] = Vet[iContador];
	}
	
	//Seleção
	selection(Vet, q);
	printf("Ordenado Selecao:");
	for(iContador = 0; iContador < q; iContador++){
		printf(" %d ", Vet[iContador] );
	}
	printf("\n\n");
	for(iContador = 0; iContador < q; iContador++){
		VetC[iContador] = Vet[iContador];
	}
	
	//Incerção
	insert(Vet, q);
	printf("Ordenado Incercao:");
	for(iContador = 0; iContador < q; iContador++){
		printf(" %d ", Vet[iContador] );
	}
	printf("\n\n");
	for(iContador = 0; iContador < q; iContador++){
		VetC[iContador] = Vet[iContador];
	}
	
	//QuickSort
	qs(Vet,0,q-1);
	printf("Ordenado QuickSort:");
	for(iContador = 0; iContador < q; iContador++){
		printf(" %d ", Vet[iContador] );
	}
	printf("\n\n");
	for(iContador = 0; iContador < q; iContador++){
		VetC[iContador] = Vet[iContador];
	}
	
	//MergeSort
	mergesort(Vet, 0, q-1);
	printf("Ordenado MergeSort:");
	for(iContador = 0; iContador < q; iContador++){
		printf(" %d ", Vet[iContador] );
	}
	printf("\n\n");
	
	return 0;
}


