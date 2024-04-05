#include<iostream>
#include<string>



using namespace std;


void soma(int &a,int &b,int &z){
	
	z=a+b;
}



int  main(){
	
	
	int a=5;
	int b=20;
	int c=0;
	
	
	soma(a,b,c);
	
	cout <<c<<endl;
	
	

	
	
	
	
	
	
	return 0;
}


class Aluno{
	public:
		string nome;
		int idade;
		double peso;
		
	public:
		string apresentacao(string nome, int idade, double peso){
			return nome;
		}
};