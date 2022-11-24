//Programa para bbtener una matriz traspuesta  de 3*3
	
	#include<stdio.h>
	#define FC 3
	
void Matriz_traspuesta(){
	
	int matriz[FC][FC],n_columnas, n_filas, filas, columnas;
	printf("Digita el numero de columnas:");scanf("%d", &n_columnas);
	printf("Digita el numero de filas:");scanf("%d",&n_filas);
	    
    for(filas = 0;filas < n_filas;filas++){
	    for(columnas = 0;columnas < n_columnas;columnas++){
	    printf("Digita el valor de [%d][%d]:\t", filas+1, columnas+1);scanf("%d", &matriz[filas][columnas]);
	    }
	}
	
    /*
    printf("\n\n\t\tMatriz original");//Impresion en pantalla de la matriz original
	printf("\n\n");
	*/  
    
    for(filas = 0;filas < n_filas;filas++){
	printf("\n\t\t");
	    for(columnas = 0;columnas < n_columnas;columnas++){
	        printf(" %6d ", matriz[filas][columnas]);
	        }
	}
	    
    printf("\n\n\t\tMatriz transpuesta");//Impresión en pantalla de la matriz traspuesta
	printf("\n\n");
	
    for(filas= 0;filas < n_columnas;filas++){
	    printf("\n\t\t");
	
        for(columnas = 0;columnas < n_filas ;columnas++){
	        printf(" %6d ", matriz[columnas][filas]);
	        }
	}
	
    printf("\n\n\n");
	
}



