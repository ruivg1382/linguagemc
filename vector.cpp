#include <iostream>
#include <vector>



int main(int argc, char *argv[]){
	
	std::vector <int> numeros;
	
	numeros.push_back(10);
	numeros.push_back(20);
	numeros.push_back(23);
	
	std::cout<<numeros[0]<<std::endl;
	
	
	//Tamanho do vector
	
	std::cout<<numeros.size()<<std::endl;
	
	for (size_t i =0; i<numeros.size();i++){
		
		std::cout<<numeros[i]<<std::endl;
	}
	
	
	
	return 0;
}