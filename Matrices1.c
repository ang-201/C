#include<stdio.h>
#include <stdlib.h>

#define F 10
#define C 10

      
void suma_matrices(){
    printf("Programa para calcular la suma de dos matrices\n\n");

    int matriz_A[F][C] , matriz_B[F][C], matriz_C[F][C],n_filas, n_columnas,filas,columnas;
    
    printf("Matriz 1\n \n");

    printf("Indique el número de filas:");scanf("%d",&n_filas);
    printf("Indique el número de columnas:");scanf("%d",&n_columnas);

    //Matriz a
    
    for (filas=0;filas < n_filas; filas ++){

        for(columnas=0;columnas < n_columnas;columnas ++){
            printf("Indique el elemento: [%d][%d]:",filas  + 1 ,columnas + 1);scanf("%d",&matriz_A[filas][columnas]);
        }
    }


    //Matriz B
    printf("\n");
    printf("Matriz 2\n");
    
    printf("Indique el número de filas:");scanf("%d",&n_filas);
    printf("Indique el número de columnas:");scanf("%d",&n_columnas);
    printf("\n");

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
    for (filas=0; filas < n_filas;filas ++){
        
        for(columnas=0;columnas < n_columnas;columnas ++){
            printf("\t%d",matriz_C[filas][columnas]);
        }
        printf("\n");    
    }
    
}



void multiplicacion_matrices(){
     

#define FILAS_MATRIZ_B 2
#define COLUMNAS_MATRIZ_B 2 
#define FILAS_MATRIZ_A 2
#define COLUMNAS_MATRIZ_A 2



    int matrizA[FILAS_MATRIZ_A][COLUMNAS_MATRIZ_A] = {
            {3, 4},
            {7, -2}
            
    };
    
    int matrizB[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B] = {
            {1, 2},
            {0,4}
    };

    if (COLUMNAS_MATRIZ_A != FILAS_MATRIZ_B) {
        printf("Columnas de matriz A deben ser igual a filas de matriz B");
        return 0;
    }
    //Lugar en donde se almacena el resultado
    int producto[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B];

    // Necesitamos hacer esto por cada columna de la segunda matriz (B)
    for (int a = 0; a < COLUMNAS_MATRIZ_B; a++) {
        // Dentro recorremos las filas de la primera (A)
        for (int i = 0; i < FILAS_MATRIZ_A; i++) {
            int suma = 0;
            // Y cada columna de la primera (A)
            for (int j = 0; j < COLUMNAS_MATRIZ_A; j++) {
                // Multiplicamos y sumamos resultado
                suma += matrizA[i][j] * matrizB[j][a];
            }
            // Lo acomodamos dentro del producto
            producto[i][a] = suma;
        }
    }

    // Recorrer producto
    printf("Imprimiendo producto\n");
    for (int i = 0; i < FILAS_MATRIZ_B; i++) {
        for (int j = 0; j < COLUMNAS_MATRIZ_B; j++) {
            printf("%d ", producto[i][j]);
        }
        printf("\n")
    }
