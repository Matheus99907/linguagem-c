
// matheus tavares cavalcante//	


//crie um programa que calcule a soma dos numeros positivos e a quantidade de negativos dentro de um vetor

#include <stdio.h>
#include <locale.h>
#define TAM 10
int main(){
	setlocale(LC_ALL, "portuguese");
	float contPosi=0, array[TAM];
	int contNeg=0, i;
	printf("Insira 10 numeros Reais: \n");
	for (i=0;i<TAM;i++){
		scanf("%f", &array[i]);
	}
	printf("A soma de todos os positivos �:\n");
	for(i=0;i<TAM;i++){
		if(array[i]>0){
			contPosi+=array[i];
	    }
	}
	printf("%.02f", contPosi);
	
	printf("\n\nE o total de numeros negativos s�o:");
	for(i=0;i<10;i++){
		if(array[i]<0){
			contNeg+=1;
		}
	}
	printf("\n%d", contNeg);
	
	return 0;
}

