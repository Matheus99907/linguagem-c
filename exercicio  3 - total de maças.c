
// matheus tavares cavalcante//	


//total de ma�as//


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float m;
	int totalm;
	
	printf("Total de ma�as compradas:"); scanf("%d",&totalm);
	
	if(totalm < 12){
		m=1.30;
		m=m*totalm;
	}
	else{
		m=1.00;
		m=m*totalm;
	}
	
	printf("Ma�as compradas: %d\n", totalm);
	printf("Custo total: %.2f", m);
	
    return 0;
}
