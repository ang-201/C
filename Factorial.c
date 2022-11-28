//Factorial
#include<stdio.h>


void factorial(){

    int entero,facto=1,i; //Declaración de variables que entraran al ciclo for
    printf("Digite un número:");scanf("%i",&entero); //Se indica el número del cual se quiere obtener su factorial 

    for ( i=1; i <= entero; i ++){
        
        facto = facto * i; //Se inicializa el primer valor del factorial
    }
    printf("El resultado es: %i ",facto);
        
}    
        
        
int main(){
    
    
    factorial();
    return 0;


    
}

