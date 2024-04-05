#include <iostream>
#include <string>


using namespace std;

class Homem{
	
	public:
		
	
		
		
		Homem(string nome, int idade){
			
			cout<<"Eu sou Homem"<<endl; 
			cout<<"Nome "<<nome<<endl;
			cout<<"Idade: "<<idade<<endl;
		}
		
};



int main(){
	
	
	Homem h("Pedro", 78);

	
	
	
	system("pause");
	return 0;
}