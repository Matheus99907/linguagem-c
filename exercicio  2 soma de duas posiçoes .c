
// matheus tavares cavalcante//
// soma de duas posi�oes selecionadas//


#include <stdio.h>
#include <locale.h>
#define TAM 8
int valida() {
    int aux;
    printf ("Digite o valor: ");
    scanf ("%d",&aux);
    while (aux <0 || aux >= TAM){
        printf ("Valor invalido. Digite novamente: ");
        scanf ("%d",&aux);
    }
    return aux;
}
int main(){
	setlocale(LC_ALL, "portuguese");
	int array[TAM], i;
	int x, y, a=0, b=0, s=0;
	printf("Digite 8 valores:\n");
	for(i=0;i<TAM;i++){
		printf("Insira o numero v[%d]: ",i); scanf("%d", &array[i]);
	}
	x=valida();
	y=valida();
	
    a=array[x];
	b=array[y];

	s = a+b;
	printf("\nA soma dos valores encontrados nas posi�oes %d e %d: %d", x, y, s);
	
	return 0;
}

