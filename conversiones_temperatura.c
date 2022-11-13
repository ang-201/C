//Programa que realiza conversiones de temperatura
#include<stdio.h>


int opc, opc_c;
float temperatura,resultado;


void fahrenheit(){
    
    printf("Indicar el valor de la temperatura:");scanf("%f",&temperatura);
    printf("\n\n");
    printf("Indicar la conversión deseada( seleccionar el número de la opción que corresponda): \n\n 1. F--> C \n 2. F-->K\n:");scanf("%i",&opc_c);
    
    if (opc_c==1){
        resultado= (temperatura - 32)*0.55 ;
        printf("El resultado es %.2f °C",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura + 459.67)*0.55 ;
        printf("El resultado es %.2f K",resultado);
    }    
    

    else{
        printf("No ha seleccionado una opción valida");
    
    }
    
}
        

void celcius(){
    printf("Indicar la conversión deseada (seleccionar el número de la opción que corresponda):\n1.C--> F \n2.C-->K\n:") ;scanf("%i",&opc_c);
    printf("Indicar el valor de la temperatura:");scanf("%f",&temperatura);
    
    if (opc_c==1){
        resultado= (temperatura * 1.8) + 32 ;
        printf("El resultado es %.2f °F",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura + 273.15) ;
        printf("El resultado es %.2f K",resultado);
    }    
    

    else{
        printf("No ha seleccionado una opción valida");
    
    }
    
}

void kelvin(){

    printf("Indicar el valor de la temperatura:");scanf("%f",&temperatura);
    printf("Indicar la conversión deseada: (seleccionar el número de la opción que corresponda)\n1.K--> C \n2.K-->F \n:");scanf("%i",&opc_c);
     
    if (opc_c==1){
        resultado= (temperatura - 273.15);
        printf("El resultado es %.2f °C",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura - 273.15)*1.8 + 32 ;
        printf("El resultado es %.2f °F",resultado);
    }    
    

    else{
        printf("No ha seleccionado una opción valida");
    
    }
}


int main(){

    printf("Indique la unidad del valor de la temperatura (seleccionar el número de la opción que corresponda):");
    printf("\n");
    printf("\n1.°F\n2.°C\n3. K\n:");scanf("%i",&opc);


    switch(opc)
    { 
        
        case 1:
        fahrenheit();
        break;
    
        case 2:
        celcius();
        break;


        case 3:
        kelvin();
        break;   
    
    
        default:
            printf("No ha seleccionado una opción valida");
    }    
    return 0;
}