#include <iostream>



int main(int argc, char **argv){
	
	std::string full_name {};
	int age {0};
	double weight {};
	char sexo {};
	bool solteiro = {};
	
	std::cout <<"Informe o seu nome: "<<"\n";
	std::getline(std::cin,full_name);
	
	
	std::cout <<"Informe a sua idade: "<<"\n";
	std::cin >>age;
	
	std::cout <<" Quantos pesas: "<<"\n";
	std::cin >>weight;
	
	std::cout <<"O sexo: "<<"\n";
	std::cin >>sexo;
	
	std::cout <<"O estado Civil "<<"\n";
	std::cin >>solteiro;
	
	
	
	
	
	
	
	return 0;
}