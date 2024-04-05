#include <iostream>
#include <string>


class Person{
	
	private:
		int idade;
		
	public:
		void apresentar(){
			std::cout<<idade;
		}
		void setIdade(int valor){
			idade=valor;
		}
};

int main(){
	
	Person p;
	p.setIdade(89);
	//p.apresentar();
	
	system("pause");
	return 0;
}
