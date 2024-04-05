#include<iostream>



void calcular(int valor[]);
int multiplicar(int valor[]);

double media(int valor[]);
void apresentar_resultado(int valor[]);



int main(int argc, char **argv){
	

	int nota[] { 10,12,14,16,19,15,17};
	
	calcular(nota);
	
	
	
	
	
	return 0;
}



void calcular(int nota1[]){
	
	int valor {0};
	
	for(int i=0; i<=7;i++){
		
		valor+=nota1[i];
	}
	
	std::cout <<"Valor de soma das notas: "<<valor<<std::endl;
	
	

	
	
}



int multiplicar(int valor[]){
	
	return 0;
	
}

void apresentar_resultado(int valor[]){
	
	
}