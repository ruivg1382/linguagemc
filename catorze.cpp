#include <iostream>
#include <string>

using namespace std;

class Numero{
	
	public:
		int number;
		
		Numero(int n){
			
			number=n;
			
		}
};


int main(){
	

    
	cout <<Numero(10)<<endl;
	
	
	
	
	system("pause");
	return 0;
}