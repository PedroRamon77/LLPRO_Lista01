#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float n,dobro;
	float *pn;
	
	printf("Digite um valor: ");
	scanf("%f",&n);
	
	pn=&n;
	dobro=2*(*pn);
	
	printf("\nValor Original: %.2f\n",*pn);
	printf("Dobro: %.2f",dobro);

	return 0;
}

