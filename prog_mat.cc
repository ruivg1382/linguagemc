#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int num1, num2,res;
	
	char op;
	num1=num2=res=0;
	
	printf("Digite numero1:\n");
	scanf("%d",&num1);
	
	printf("Digite numero2:\n");
	scanf("%d",&num2);
	
	printf("operacao");
	scanf("%c",&op);
	
	if(op=='+'){
		
		res=num1+num2;
	}else if(op=='-'){
		res=num1-num2;
	}else if(op=='*'){
		res=num1*num2;
	}else{
		if(num2!=0){
			
				res=num1/num2;
			
		}else{
			printf("Impossivel");
			return 0;
		}
	
	}
	
	printf(" O resultado = %d",res),
	
	system("pause");
	
	return 0;
}