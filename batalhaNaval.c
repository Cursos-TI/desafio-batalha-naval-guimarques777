#include <stdio.h>


int main(){

int campo[10][10] = {0};



int navio1[3]= {3,3,3};
int navio2[3]= {3,3,3};

int linha1 = 2;
int coluna1= 4;

for(int i = 0; i < 3; i++){
campo[linha1][coluna1 + i] = navio1[i];
}

int linha2 = 7;
int coluna2 = 9;

for (int j = 0; j < 3 ; j++){
campo[linha2 + j][coluna2]= navio2[j];

}

printf ("Tabuleiro\n");
for(int i=0; i < 10; i++ ){
   for(int j = 0; j < 10; j++){
      printf("%d", campo[i][j]);
}

printf("\n");



}





    return 0;
}