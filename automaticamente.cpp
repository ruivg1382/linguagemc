#include<iostream>

int main(){
	
	std::string zona[]{"Tarrafal","Calheta","Santiago","Praia","Picos","Assomada","Cidade Velha", "Sao Domingos", "Orgoes"};
	
	for (auto i:zona){
		
		std::cout <<"As os municipios de ilha de Santiago: "<<i<<std::endl;
	}
	
	
	
	return 0;
}