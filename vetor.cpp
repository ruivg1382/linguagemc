#include<stdio.h>
#include<stdlib.h>





int main(){
	
	int numero[3];
	
	for(int i=0; i<3; i++){
		
		printf("diga o numero:");
		scanf("%d", &numero);
	}
	
	
	for(int i=0; i<3; i++){
		
		printf("o numero %d", numero[i]);
	}
	
}