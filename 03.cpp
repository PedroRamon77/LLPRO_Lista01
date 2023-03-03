#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
   	int v1, v2; 
  	int *pv1, *pv2;
	
	printf("Digite o 1º valor: ");
	scanf("%d",&v1);
	printf("Digite o 2º valor: ");
	scanf("%d",&v2);

   	pv1 = &v1;
   	pv2 = &v2;
   
   	*pv1 = *pv1 + *pv2; 
   	*pv2 = *pv1 - *pv2; 
   	*pv1 = *pv1 - *pv2; 
	
	printf("\n\nValores depois da troca:\n 1º valor: %d\n 2º valor: %d\n",v1,v2);
	
   	return 0;
}

