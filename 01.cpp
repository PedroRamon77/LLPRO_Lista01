#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int *p;
	int v[5];
	
	for(int i=0;i<5;i++){
		printf("Digite o %d� valor: ",i+1);
		scanf("%d",&v[i]);	
	}	
	p=v;
	printf("\n\n");
	for(int x=0;x<5;x++){
		printf("O valor %2d e o seu endere�o de mem�ria � %p\n",*(p+x),p+x);	
	}

	return 0;
}
