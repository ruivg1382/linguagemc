#include<iostream>

int contar(int n){
	
	
	int i=0;
	
	for(i=0; i<=n; i++)
	
	
	std::cout<<i<<std::endl;
}


int trabalhar(int x){
	
	while(x<10){
		
		std::cout<<"Estou a trabalhar "+x <<std::endl;
		x++;
	}
}

int main(){
	
	int num=2;
	
	std::cout << "Hello World" << std::endl;
	

	
	trabalhar(num);
	
	system("pause");
	
	return 0;
}




