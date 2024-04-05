#include <iostream>
#include<string>

class Humano{
	
	public:
		int idade;
		void viver();
};

void Humano::viver(){
	
	std::cout <<"Ola eu estou a viver + "<<idade;
}

int main(){
	
	
	Humano a;
	a.idade=50;
	a.viver();
	
	system("pause");
	return 0;
}
