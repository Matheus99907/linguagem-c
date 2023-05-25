//Matheus tavares cavalcante//
//teste de mesa//
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x,y,z;
	char r
	printf("X="); scanf("%d", &x);
	printf("y="); scanf("%d", &y);
	z=(x*y)+5;
	if(z<=0){
		r='A';
	}
	else{
		if(z<=100){
			r='B';
		}
		else{
			r='C';
		}
	}
	printf("%d,%c", z,r);
}
