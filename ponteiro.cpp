#include<iostream>


int main(){
	
	int numero=10;
	int *pnumero=&numero;
	
	
	std::cout<<" o numero e "<<numero<<"\n";
	std::cout <<"O endereco do numero"<<&numero<<"\n";
	
	std::cout<<" o valor de pnumero"<<*pnumero<<"\n";
	std::cout<<"o endereco de pnumero"<<pnumero<<"\n";
	
	
	
	
	return 0;
}