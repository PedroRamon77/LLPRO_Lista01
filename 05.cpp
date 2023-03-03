#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float n,dobro;
	float *pn,*pdobro;
	
	printf("Digite um valor: ");
	scanf("%f",&n);
	
	pn=&n;
	dobro=2*(*pn);
	pdobro=&dobro;
	
	printf("\n\nO dobro de %.2f é %.2f\n",*pn,*pdobro);
	
	return 0;
}

