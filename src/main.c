/* Vitor Nagata RA178499 
 *
 * Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {
  char c, a = 0;  //c = caractere atual, a = caractere anterior
  int i = 0;      //numero de palavras

  do {

    scanf("%c",&c);
   
    if (c == ' ' || c == '.' || c == ',' || c == '?' || c == '!' || c == '-' || c == '\n' || c == ';' || c == ':'){  //caracteres especiais
      if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {  //caracter anterior eh uma letra
	i++;
      } else if (a >= '0' && a <= '9'){           //caracter anterior eh um numeor
	if (c == '.' || c == ',' || c == ';'){    //caso de float
	  scanf("%c",&c);                         //verifica proximo caractere
	  if (!(c >= '0' && c <= '9')){i++;}
	} else {                                  //caso nao seja float
	  i++;
	}
      }
    }

    a = c;
    
  } while (c != '\n');

  printf("%d\n", i);
  return 0;
}
