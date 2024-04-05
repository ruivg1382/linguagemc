#include <iostream>


int main(){
	
	int escolha ={};
	
	std::cout<<"que numero escolhes?"<<std::endl;
	std::cin>>escolha;
	
	switch(escolha){
		
		case 1 ... 10:
			std::cout<<"O numero esta entre 1 e 10"<<std::endl;
		  	break;
		case 11 ... 20:
			std::cout<<"O numero esta entre 11 e 20"<<std::endl;
			break;
		default:
			std::cout<<"inaceitavel";
	}
	
	
	
	return 0;
}