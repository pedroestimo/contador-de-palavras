/* Contador de palavras
 * Pedro Henrique Estimo RA158339
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */


#include <stdio.h>
#include <string.h>
 
int main() {
	char string[1000];
 	int i=0, tam;
	int n=0; 
 	
 	scanf("%[^\n]s", string);
 	tam = strlen(string); 
 	for (i=0; i<=tam; i++){ 			
 		if((string[i] == ' ')||(string[i] == '.')||(string[i] == ',')||(string[i] == '-')||(string[i] == '!') || (string[i] == '\0')){
			i = i+1;
			while((string[i] == ' ')||(string[i] == '.')||(string[i] == ',') || (string[i] == '-') || (string[i] == '!') ){		
 				i++;
			}
			if(string[i-1] == '.' || string[i-1]==','){
					if(47 < string[i] && string[i]<58){
						n=n-1;
					}	
			} 
			n=n +1; 
		 }
	}
	printf("%d\n", n);
	return 0;
 }

