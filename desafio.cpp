#include<iostream>


int main(int argc, char **argv){
	
	int idade;
	double media;
	int soma; 
	int tamanho;
	
	tamanho=0;
	soma=0;
	
	std::cout <<"Digite sua idade:"<<std::endl;
	std::cin >>idade;
	
	while(idade > 0){
		
		
		soma+=idade;
		tamanho+=1;
		
		std::cout<<"Digite outra idade"<<"\n";
		std::cin >>idade;
		
		
		
	}
	
	
	if(idade < 0){
		
		std::cout<<" a soma: "<<soma<<"\n";
		
		media=(soma)/tamanho;
		
		std::cout <<" A media de idade: "<<media<<std::endl;
		std::cout<<"O tamanho: "<<tamanho<<"\n";
	
		
		return 0;
		
	}
	
	
	
	
	
	
	return 0;
}