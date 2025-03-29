#include <stdio.h>

int main (){

    // Variaveis torre e bispo
    int t = 1, b = 1;
    
    // Mover torre
    while (t <= 5) {
        printf("Torre para direita\n");
        t++;
    }

printf("\n");
    
        // Mover bispo
        do {
            printf("Bispo para cima\n");
            printf("Bispo para direita\n");
            b++;
        } while (b <= 5);

printf("\n");
    
    // Mover Rainha
   for (int r = 1; r <= 8; r++) {
    printf("Rainha para esquerda\n");
   }
   
printf("\n");

        // Mover cavalo
        int c2 = 1;

        for (int c = 1; c <= 1; c++) {
            while (c2 <= 2){
                printf("Cavalo para cima\n");
                c2++;
            }
                printf("Cavalo para direita\n");
        }


    return 0;

}
