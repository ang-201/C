#include<stdio.h>
#include <stdlib.h>

#define F 10
#define C 10

      
void suma_matrices(){
    printf("Programa para calcular la suma de dos matrices\n\n");

    int matriz_A[F][C] , matriz_B[F][C], matriz_C[F][C],n_filas, n_columnas,filas,columnas;
    
    //Matriz a
    printf("Matriz 1\n \n");

    printf("Indique el número de filas:");scanf("%d",&n_filas);
    printf("Indique el número de columnas:");scanf("%d",&n_columnas);

    //Matriz B
        
    printf("\n");
        
    printf("Matriz 2\n");
    
    printf("Indique el número de filas:");scanf("%d",&n_filas);
    printf("Indique el número de columnas:");scanf("%d",&n_columnas);
    printf("\n");
    
    
    if(n_filas==n_columnas){
    
        for (filas=0;filas < n_filas; filas ++){
            for(columnas=0;columnas < n_columnas;columnas ++){
            printf("Indique el elemento: [%d][%d]:",filas  + 1 ,columnas + 1);scanf("%d",&matriz_A[filas][columnas]);
            }    
        }
        

        for(filas=0;filas < n_filas; filas ++){
            for (columnas=0;columnas < n_columnas;columnas++){
                printf("Indique el elemento:[%d][%d]:",filas  + 1 ,columnas + 1);scanf("%d",&matriz_B[filas][columnas]);
            }
        }

          
        //Suma de matrices
        for(filas=0;filas < n_filas; filas ++){
            for (columnas=0; columnas < n_columnas;columnas++){
                matriz_C [filas][columnas]= matriz_A[filas][columnas] + matriz_B[filas][columnas];
            }
        }
    
        printf("\n");
        //Impresión de la matriz
        for (filas=0; filas < n_filas;filas++){
            for(columnas=0;columnas < n_columnas;columnas ++){
            printf("\t%d",matriz_C[filas][columnas]);
            }
        }
        printf("\n");    
        
    }
        
    
    else {
        printf("\n");
        printf("Las matrices no tienen el mismo numero de filas y columnas por tanto no se pueden sumar");
    }
    
    
    
    
    
    
}


int main(){

    suma_matrices();
}