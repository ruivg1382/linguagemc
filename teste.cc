#include<stdio.h>
#include<stdlib.h>




int main(){
	
	int x=10;
	int y=20;
	
	int calcular(x,y){
	return x*y;
} 
	
	int soma=0;
	
	soma=x+y;
	
	printf("%d",soma);
	
	int c=calcular(20,2);
	printf("%d\n",c);
	
	system("pause");
}

