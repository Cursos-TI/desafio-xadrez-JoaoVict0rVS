#include <stdio.h>

// Void da torre
void torre(int t){
    if (t > 0) {
        printf("Torre para direita\n");

        torre(t - 1);
    }
}

// Void do bispo
void bispo(int b){

        while (b > 0){

            while (b > 2) {
                printf("Bispo para cima e para direita ");
                b--;
            }
            printf("\n");
            printf("Bispo para cima e para direita");
            b--;
        }
        printf("\n");
    }

// Void da rainha
void rainha(int r){
    if (r > 0) {
        printf("Rainha para esquerda\n");

        rainha(r - 1);
    }
}




        int main(){
            int v1 = 5, v2 = 8;
            // Chamar torre
            torre(v1);
        printf("\n");

            // Chamar bispo
            bispo(v1);
        printf("\n");

            // Chamar rainha
            rainha(v2);
        printf("\n");

            // Mover cavalo
            for (int c = 1, c2 = 1; c <= 1 && c > 0; c++) {
                while (c2 <= 2){
                    printf("Cavalo para cima\n");
                    c2++;
                }
                    printf("Cavalo para direita\n");
            }


            return 0;


}