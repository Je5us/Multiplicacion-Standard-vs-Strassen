#include <stdio.h>
#define N 3

void Multiplicacion_clásica(int A[][N], int B[][N], int C[][N]){	
	for(int i = 0; i < N ; i++){
		for(int j = 0; j < N ; j++){
			for(int k = 0; k < N; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}
void mostrar(int M[][N]){
	for(int i = 0; i < N ; i++){
		for(int j = 0; j < N ; j++){
			printf("%d ",M[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int A[N][N] = {{1,0,0},{0,1,0},{0,0,1}};
	int B[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
	int C[N][N] = {0};
	Multiplicacion_clásica(A, B, C);
	mostrar(C);
	return 0;
}
