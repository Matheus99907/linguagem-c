
// matheus tavares cavalcante//
//crie um programa que imprima o maior elemento e a posi��o dele dentro de um vetor//

#include <stdio.h>
#include <locale.h>
#define TAM 10
int main(){
	setlocale(LC_ALL, "portuguese");
    int array[TAM], maior=0, pos, i;
    for(i=0; i<TAM; i++){
        printf("Digite um valor v[%d]: ", i+1); scanf("%d", &array[i]);
    }
    printf("Maior elemento do vetor:\n");
    for(i=1; i<TAM; i++){
    	if(array[i]>maior){
    		maior=array[i];
    		pos=i+1;
		}
    }
    printf("\nO maior elemento � %d e est� na posi��o %d", maior, pos);

    return 0;
}

