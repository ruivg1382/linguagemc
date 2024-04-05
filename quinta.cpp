#include <iostream>
#include<stdio.h>


class Jornal{
	
	public:
		
		void apresentar(){
			
			std::cout<<" Algumas Consideracoes\n";
		}
};

class Alunos{
	public:
	string nome;
		
		void apresentar(){
			std::cout<<"O meu nome "<<nome<<std::endl;
		}
};


int main(){
	
	
	Jornal j;
	
	j.apresentar();
	
	Alunos al;
	al.nome="Mariana";
	
	al.apresentar();
	
	
	system("pause");
	return 0;
}
