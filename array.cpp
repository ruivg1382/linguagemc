#include <iostream>


void recebe_array(int arr[]){
	
	arr[3]=100;
}



int main(){
	
	int vetores[10] {10,11,21,22,90,12,15,17,19,10};
	
	
	
	for (int i=0; i<10; i++){
		
		//std::cout<<vetores[i]<<std::endl;
		if(vetores[i]%2==0){
			
			std::cout<<vetores[i]<<std::endl;	
		}
	}
	
	std::cout <<"Separador"<<"\n";
	
	recebe_array(vetores);
	
	for (int i=0; i<10; i++){
		
		std::cout<<vetores[i]<<std::endl;
	
	}
	
	
	return 0;
}