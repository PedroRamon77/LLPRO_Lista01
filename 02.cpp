#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	char frase[500];
	char *pf;
	
	printf("\nDigite uma frase: ");
	gets(frase);
	
	pf=frase;
	
	for(int i=0;i<500;i++){
		if(*(pf+i)=='a'||*(pf+i)=='A'||*(pf+i)=='e'||*(pf+i)=='E'||*(pf+i)=='i'||*(pf+i)=='I'||*(pf+i)=='o'||*(pf+i)=='O'||*(pf+i)=='u'||*(pf+i)=='U'){
			*(pf+i)=' ';
		}
		if(*(pf+i)=='\0'){
			break;
		}
	}
	printf("\n\nA frase digitada sem vogais: %s\n\n",pf);
	
	return 0;
}
