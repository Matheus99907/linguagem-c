
// matheus tavares cavalcante//	


//programa com fins de mostrar o salario final//


#include <stdio.h>

int main(){
	float sfin,c,cv,vt,sfix;
	printf("Carros vendidos:"); scanf("%f", &cv);
	printf("Valor total das vendas:"); scanf("%f", &vt);
	printf("Salario fixo:"); scanf("%f", &sfix);
	printf("Valor da comissao por venda:"); scanf("%f", &c);
	
	c = c*cv;
	vt=(vt*5)/100;
	sfin+=sfix;
	sfin+=c;
	sfin+=vt;
	
	printf("Salario final %.2f", sfin);
	
    return 0;
}


