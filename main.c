#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int matriz[8][8],i,j,p;
	int randNumberl, randNumberc;
	char p;
	srand(time (NULL)); //sorteio baseado em tempo
	printf("\n                    BEM VINDO AO POKEMINA\n \n"); 
	printf(" Temos uma matriz 8x8, contendo nela uma diversidade de \n   Pokemon selvagem e o Pokemon do seu adversario (pc)\n \n");
	printf(" No jogo estao as seguintes regioes de Pokemon: \n  \4 Agua \4 Floresta \4 Terra \4 Eletricidade \4 \n");
	printf("\n Seus Pokemons : 1 \ \n");
	printf("\n     M E N U \n \n 1- Para posicionar seu Pokemon aleatoriamente no tabuleiro; \n 2- Para voce escolher sua posicao \n");
	scanf("%d", &p);
	switch (p){
           
           case 1:
                //aleatorio
                randNumberl = rand() % 10; //regra de limite de sorteio
                randNumberc = rand() % 10; 
                matriz[randNumberl][randNumberc] = 8;
                printf("\n ALEATORIO \n linha %d \n coluna %d \n \n " , randNumberl, randNumberc);
                break;
           
           case 2:
                printf(" Digite a linha que deseja inserir seu Pokemon : ");
                scanf("%d", &i);
                printf("\n Digite a coluna : ");
                scanf("%d", &j);
                printf(" A letra 'P' representa seu Pokemon\n");
                scanf("%c", AQUIIIIIIII
                
                matriz[i][j];
                break;
}
        for(i=0;i<3;i++){
            printf("\n \n Linha %d\n " ,i);
            for(j=0;j<3;j++){
                printf("\n %4d", matriz[i][j]);
            }
}

  system("PAUSE");	
  
  return 0;
}
