#include <iostream>
using namespace std;

int **crear_matriz(int n){

	// reserva la memoria
	int **mat = new int *[n]; //cantidad de fila n
	for(int i=0 ; i<n ; i++ ){
		//cada fila se rellena con una columna n
		mat[i]= new int [n];
	}
	return mat;
}

int **mult_matriz(int **mat1, int **mat2, int n){
	int **mat3 = crear_matriz(n);

	//calcular la multiplicacion

	return mat3;
}


int main(){
	int n;

	cin >> n;

	//reserva la memoria
	int **mat1 = crear_matriz(n);
	int **mat2 = crear_matriz(n);
	
	//se pide para la matriz 1
	for(int i=0; i<n ; i++){ // cantidad de fila
		for(int j=0;j<n;j++){ // cantidad bde columnas
			cin >> mat1[i][j];
		}
	}

	//se pide para la matriz 1
	for(int i=0; i<n ; i++){ // cantidad de fila
		for(int j=0;j<n;j++){ // cantidad bde columnas
			cin >> mat2[i][j];
		}

	}

	for(int i=0; i<n ; i++){ // cantidad de fila
		for(int j=0;j<n;j++){ // cantidad bde columnas
			cout << mat1[i][j] <<" ";
		}
		cout << endl;
	}

}
