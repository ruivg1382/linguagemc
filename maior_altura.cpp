#include <iostream>
#define MAXALTURA 3.50


int main(){
	
	
	double altura[]{1.90,2.06,1.57,1.87,1.67};
	
	double maior=0.0;
	
	for (auto i:altura){
		
		if(i>maior){
			
			maior=i;
		}
	}
	
	
	std::cout <<"Maior altura: "<<maior<<std::endl;
	
	double menor=MAXALTURA;
	
	for (auto j:altura){
		
		if(j<menor){
			menor=j;
		}
	}
	
	std::cout <<"Menor altura: "<<menor<<std::endl;
	
	
	
	return 0;
}