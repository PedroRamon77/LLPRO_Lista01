#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int n=-1;
	
	while(n<1){
		printf("Digite o valor de N: ");
		scanf("%d",&n);	
	}

 	printf("\n");
 	int v[n];
    
	for(int i=0;i<n;i++){
		printf("Digite o %dº valor: ",i+1);
		scanf("%d",&v[i]);
	}
	
	int *ponteiro;
	
	ponteiro=v;
	
	printf("\n\nOrdem Inversa\n\n");
	for(int j=n-1;j>=0;j--){
		printf("%d \n",*(ponteiro+j));
	}

	return 0;
}
