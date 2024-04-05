#include<iostream>

using namespace std;

int main(){
	
	float num1,num2,resultado;
	char operacao;
	
	cout <<"digite o primeiro numero:"<<endl;
	cin >>num1;
	
	cout <<"digite a operacao"<<endl;
	cin >>operacao;
	
	cout <<"digite o segundo numero:"<<endl;
	cin >>num2;
	
	if (operacao == '+'){
		
		resultado = num1+ num2;
		
	}else if(operacao == '-' ){
		
		resultado = num1 - num2;
		
	}else if(operacao == '*'){
		
		resultado = num1 * num2;
		
	}else{
		
		if (num2 ==0){
			
			cout <<" impossivel"<<endl;
			break;
			
			
		}else{
			
			resultado = num1/num2;
			
		}
	}
	
	
	cout <<num1<<" "<<operacao<<num2<<"="<<" "<<resultado;	
	
	
	
	
	
	return 0;
}