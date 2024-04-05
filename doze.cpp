#include <iostream>
#include <string>

using namespace std;

class Aluno{
	
	private:
		string nome;
		int idade;
		float peso;
	
	public:
		
		void setNome(string n){
			nome=n;
		}
		
		string getNome(){
			
			return nome;
		}
		
		void setIdade(int age){
			idade=age;
		}
		
		int getIdade(){
			
			return idade;
		}
		
		void setPeso(float heigthy){
			peso=heigthy;
			
		}
		
		float getPeso(){
			return peso;
		}
};

int main(){
	
	Aluno al;
	al.setNome("Jorge Fonseca");
	al.setIdade(26);
	al.setPeso(78.9);
	cout <<"Nome: "+ al.getNome() <<endl;
	cout <<"Idade: "<<al.getIdade() <<endl;
	cout <<"Peso:" << al.getPeso() <<endl;
	
	
	
	system("pause");
	return 0;
}