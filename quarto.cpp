#include <iostream>
#include <string>

#define retornar return

namespace trabalhar{
	
	int numero=10;
	char sexo;
	string nome;
}

int desporto(int jogadores){

	std::cout<<jogadores;
	std::cout<<"\nJodaores" <<std::endl;
}



typedef int inteiro;


int main(){
	
 trabalhar::numero=10;
 inteiro a=100;
	
    std::cout <<"Helo" <<std::endl;
    std::cout <<trabalhar::numero*5;
    
    desporto(20);
    
	system("pause");
	retornar 0;
}



