//Matheus tavares cavalcante//
//programa aonde o valor não pode ser 0//
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float v1, v2, r;
	printf("Primeiro valor:"); scanf("%f", &v1);
	printf("Segundo valor:"); scanf("%f", &v2);
	
	while(v2==0){
		printf("Valor invalido, por favor insira um numero diferente de 0:"); scanf("%f", &v2);
	}
	printf("%.2f : %.2f = %.2f", v1, v2, r=v1/v2);
	
	return 0;
	
}
