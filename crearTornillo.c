//Este es el archivo de un tornillo

#include<stdio.h>

int main(void){
	int* tornillo;
	for(int i=0; i<100; i++){
		crearTornillo(tornillo);
	}
}

void crearTornillo(int* num_tornillos){
	num_tornillos+=1;
}