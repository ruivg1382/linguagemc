#include <iostream>

using namespace std;


int main(){
	
	bool final = false;
	string produto;
	double preco = 0;
	string resposta;
	double total = 0;
	
	while (!final){
		
		cout <<"Que produto quer comprar?"<<endl;
		cin >>produto;
		cin >>preco;
		cout <<"Ja terminaste de de comprar?"<<endl;
		cin >> resposta;
		if(resposta == "sim"){
		
			final =true;
		}
		
		preco +=preco;
		
		
	}
	
	cout <<preco<<endl;
	
	return 0;
	
}