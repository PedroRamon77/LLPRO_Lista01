#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	char frase[500], copia_frase[500];
	char *pf;
	int x=0;
	
	printf("\nDigite uma frase: ");
	gets(frase);
	
	pf=frase;
	
	for(int i=0;i<500;i++){
		if(!(*(pf+i)=='a'||*(pf+i)=='A'||*(pf+i)=='e'||*(pf+i)=='E'||*(pf+i)=='i'||*(pf+i)=='I'||*(pf+i)=='o'||*(pf+i)=='O'||*(pf+i)=='u'||*(pf+i)=='U')){
			copia_frase[x]=*(pf+i);
			x++;
		}
		if(*(pf+i)=='\0'){
			break;
		}
	}
	printf("\n\nA frase digitada sem vogais: %s\n\n",copia_frase);
	
	return 0;
}
