#include <stdio.h>

int main () {

// Variaveis Movimentos das Peças
 int movTorre = 5;
 int movBispo = 5;
 int movRainha = 8;
 int i;
 

 // Torre - Cinco casas para a direita.
 //loop for
 for (i=0; i < movTorre; i++) {
    printf("Torre: Direita \n");
 }
 
 /* Bispo - Cinco casas na diagonal para cima e à direita.
    Para representar a diagonal, você imprimirá a combinação 
    de duas direções a cada casa (ex: "Cima, Direita"). */
 // loop while
 i = 0;
 while (i < movBispo) {
    printf("Bispo: Cima\n");
    printf("Bispo: Direita\n");
    i++;
 }

    
 // Rainha - Oito casas para a esquerda.
 //loop do while
 i = 0;
 do {
    printf("Rainha: Esquerda\n");
    i++;
 } while (i < movRainha);


 return 0;

}