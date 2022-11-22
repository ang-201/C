//Factorial
#include<stdio.h>


void factorial(){

    int entero,facto=1,i;
    printf("Digite un numero:");scanf("%i",&entero);

    for ( i=1; i <= entero; i ++){
        
        facto = facto * i;
        printf("El resultado es: %i ",facto);
        
    }
        
    
    
    
}    
        
        
int main(){
    
    factorial();
    return 0;
}

