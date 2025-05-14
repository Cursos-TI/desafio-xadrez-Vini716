#include <stdio.h>

int main(){

int t = 0;
int b = 1;
//Mover a torre para direita pulando 5 casas
printf("Torre:\n");
while (t < 5)
{
   printf("Direita\n"); //imprime a direção do movimento
   t++; //incrementando para parar na quinta casa 
}
printf("\n");
//Movendo o bispo pra diagonal em 5 casas
printf("Bispo:\n");
do
{
    printf("Cima, Direita\n", b);//imprime a direção do movimento
    b++;
} while (b <= 5);

printf("\n");

printf("Rainha:\n");
for (int r = 0; r < 8; r++)
{
    printf("esquerda\n");//imprime a direção do movimento
}

 return 0;
}
