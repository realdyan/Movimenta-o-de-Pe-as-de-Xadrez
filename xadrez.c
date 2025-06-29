#include <stdio.h>
#include <string.h>

// Recursividade Torre
 void Torre(int m) {
   if (m > 0)
   {
      printf("Torre: Direita\n");
      Torre(m - 1);
   }
 }


 // Recursividade Bispo
 void Bispo(int n) {
   for (int p = 0; p < n; p++)
   { 
    printf("Bispo: Cima\n");
    for (int j = 0; j < n; j++)
    {
      if (p == j)
      {
     printf("Bispo: Direita\n");
    }
   }
   }
  }
 
 
 // Recursividade Rainha
 void Rainha(int p) {
   if (p > 0) {
      printf("Rainha: Esquerda\n");
      Rainha(p - 1);
   }
 }

 
int main () {

// Variaveis Numero de Casas a andar
 int movTorre;
 int movBispo;
 int movRainha;
 int movCavalo = 1;
 int i;

 
 // Torre : Entrada de dados e Movimentação
  printf("Torre: Mover quantas Casas ?\n");
  scanf("%i", &movTorre);

  Torre(movTorre);



 printf("\n");


  // Bispo : Entrada de dados e chamda da funcao movBispo
  printf("Bispo: Mover quantas Casas ?\n");
  scanf("%i", &movBispo);

  Bispo(movBispo);

  printf("\n");


  // Rainha : Entrada de dados e Movimentação
  printf("Rainha: Mover quantas Casas ?\n");
  scanf("%i", &movRainha);

  Rainha(movRainha);


 
 printf("\n");
 //Cavalo
 //O programa deverá imprimir no console a direção de cada
 //etapa do movimento do Cavalo ("Baixo", "Baixo", "Esquerda")

 for (i = 0; i < movCavalo; i++)
 {
   while (i < 2)
   {
      printf("Cavalo: Baixo\n");
      i++;
   }
   printf("Cavalo: Esquerda\n");
 }
 





 return 0;

}