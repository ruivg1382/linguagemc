#include<stdio.h>
#include<stdlib.h>


int main(){
	
	float num1, num2,num3,maior;
	
	printf("Digite os tres numeros:");
	scanf("%d",&num1);
	
	scanf("%d",&num2);
	
	scanf("%d",&num3);
	
	
	if(num1>num2 && num1>num3){
		
		maior=num1;
	}else if(num2>num3){
		
		maior=num2;
	}else{
		
		maior=num3;
	}
	
	printf("O maior e %d",maior);
}