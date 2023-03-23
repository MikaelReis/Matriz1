#include <stdio.h>

int main()
{
   {
  int matriz[4][4];
  int i, j, cont;
  float somaImpar, somaPar;
  float media;
  somaImpar = 0 ;
  somaPar = 0;
  cont = 0;
  
  printf ("\nDigite valor para os elementos da matriz\n\n");
  
    for ( i=0; i<4; i++ ){
    for ( j=0; j<4; j++ ){
    {
      printf ("\nElemento[%d][%d]:=", i , j );
      scanf ("%d", &matriz[ i ][ j ]);
        }
    }
    }
    for(i = 0; i < 4 ; i++){
        for(j = 0; j < 4 ; j++){
        if(j%2 == 0){
            somaPar=somaImpar + matriz[i][j];
            cont = cont + 1;
        }
        else { 
            somaImpar = somaImpar + matriz[i][j];
                
            }
        }
    }
media = somaImpar / cont;
printf("\nA soma dos Valores das colunas impares e %f", somaImpar);
printf("\nA media dos valores das colunas pares e %f", media);
    

return 0;
}

}
