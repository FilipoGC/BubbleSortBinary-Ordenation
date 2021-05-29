#include <stdio.h>
#include <stdlib.h>

void print(int *v, int tam){

	int i;
	for(i = 0; i < tam; i++) printf("%d ", v[i]);
	printf("\n");
};

void swap(int *p1, int *p2){

	int aux = *p1;
	*p1 = *p2;
	*p2 = aux;

};
void bubbleBi (int tam, int *v) {
	int i;
	int j;
	int k;
	for(j = 0; j <= tam; j++) {
		print(v, tam);
		if (j % 2 == 0) {
			for(i = 0; i < tam-j; i++) {
				if( v[i] > v[i+1]) swap(&v[i], &v[i+1]);
			}
		}else	
			for(k = tam-j ; k > 0; k--){
				if( v[k] < v[k-1]) swap(&v[k], &v[k-1]);
						
			}		
	}
};


void main () {
	int tam = 9;
	int v[] = {16, 21, 45, 3, 11, 53, 8, 26, 49};
	bubbleBi(tam, v);
}




