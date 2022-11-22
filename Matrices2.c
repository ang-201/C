#include <stdio.h>
#define F 2
#define C 2

void multiplicacion_matrices(){
     
    int MatrizA[F][C],MatrizB[F][C],MatrizC[F][C],filas,columnas, k, suma,j,i;

 //Matriz A
    printf("Indique el numero de filas");scanf("%d",&filas);
    printf("Indique el numero de columnas");scanf("%d",&columnas);

    for(int i=0; i < filas; i ++){
        for(int j=0;j < columnas; j ++){
            printf("Indique los valores de su matriz [%d][%d]",i + 1 ,j + 1);scanf("%d",&MatrizA[i][j]);
        }
    }
   //Matriz B 
    
    printf("Indique el numero de filas");scanf("%d",&filas);
    printf("Indique el numero de columnas");scanf("%d",&columnas);

    for(i=0; i < filas; i ++){
        for(j=0;j < columnas; j ++){
            printf("Indique los valores de su matriz [%d][%d]",i + 1 ,j+ 1);scanf("%d",&MatrizB[i][j]);
        }
    }

    //Producto de matrices
    for ( i=0; i < filas; i ++){
        for(j=0; j< columnas;j++){
            int suma=0;
            for (k=0;k < columnas; k ++){
                suma += MatrizA[i][k] * MatrizB[k][j];
                
            }
            MatrizC[i][j]= suma;
            printf("\t%d",MatrizC[i][j]);
            
        }
        printf("\n");
    }
}
   



