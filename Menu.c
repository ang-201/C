#include<stdio.h>
#include<math.h>   

#define FC 3 // Constante que indica la cantidad de filas y columnas que puede tener una matriz como máximo en el programa

int opc; //Variable global que nos permitirá entrar al switch del menú
int opc_c; // Variable global que nos permite ingresar a las opciones de los subprogramas    
float resultado, temperatura; //Variables globales del programa conversiones de temperatura



void cuadrados(){ 
    printf("\nElegir el número de la opción deseada:\n\n1.Calcular el área de un cuadrado\n2.Calcular el área de un trapecio\n3.Calcular el área de un rectangulo ");
    int opcion; //Declaración de variable que nos permitira entrar al switch de la función
    printf("\n\nOpción:");scanf("%i",&opcion);
    float b_mayor,b_menor,altura,base,lado,resultado; //Variables necesarias para realizar los calculos de las areas
    
	switch (opcion)
        {
            case 1:

				//Obtener el area de un cuadrado
                printf("Valor del lado del cuadrado:");scanf("%f",&lado);
                resultado=lado * lado ;
                printf("El resultado es: %.2f",resultado);

            break;

            case 2:
                //Obtener el area de un trapecio
                printf("Indicar el valor de la base mayor:");scanf("%f",&b_mayor);
                printf("Indicar el valor de la base menor:");scanf("%f",&b_menor);
                printf("Indicar el valor de la altura:");scanf("%f",&altura);
                resultado=((b_mayor + b_menor) * altura/2);
                printf("El resultado es: %.2f",resultado);
            break;

            case 3:
                //Obtener el area de un triangulo
                printf("Indique el valor de la base:");scanf("%f",&base);
                printf("Indique el valor de la altura:");scanf("%f",&altura);
                resultado= base * altura;
                printf("El resultado es: %.2f",resultado);
            break;


            default:
                printf("No ha seleccionado una opción valida");
        }
}


void factorial(){

    int entero,facto=1,i; //Declaración de variables que entraran al ciclo for
    printf("Digite un número:");scanf("%i",&entero); //Se indica el número del cual se quiere obtener su factorial 

    for ( i=1; i <= entero; i ++){
        
        facto = facto * i; //Se inicializa el primer valor del factorial
    }
    printf("El resultado es: %i ",facto);
        
}    



void suma_matrices(){
    printf("Programa para calcular la suma de dos matrices\n\n");

    int matriz_A[FC][FC] , matriz_B[FC][FC], matriz_C[FC][FC],n_filas, n_columnas,filas,columnas; //Declaración de matrices
    
    //Matriz a
    printf("Matriz 1\n \n");

    printf("Indique el número de filas:");scanf("%d",&n_filas);
    printf("Indique el número de columnas:");scanf("%d",&n_columnas);

    //Matriz B
        
    printf("\n");
        
    printf("Matriz 2\n");
    
    printf("\nIndique el número de filas:");scanf("%d",&n_filas);
    printf("Indique el número de columnas:");scanf("%d",&n_columnas);
    printf("\n");
    
    if (matriz_A [n_filas][n_columnas] == matriz_B [n_filas][n_columnas]){
        printf("El número de filas y columnas es el mismo en ambas matrices, por lo que se pueden sumar\n");
        
        printf("\nDigite los valores para su matriz 1\n");
        for (filas=0;filas < n_filas; filas ++){
            for(columnas=0;columnas < n_columnas;columnas ++){
            printf("Indique el elemento:[%d][%d]:",filas  + 1 ,columnas + 1);scanf("%d",&matriz_A[filas][columnas]);
            }    
        }
        
        printf("\nDigite los valores para su matriz 2\n");
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
            printf("\n");        
        } 
        
 
    }    
    else {
        printf("\n");
        printf("Las matrices no tienen el mismo número de filas y columnas por tanto no se pueden sumar");
    }

}    
    

void multiplicacion_matrices(){
     
    int MatrizA[FC][FC],MatrizB[FC][FC],MatrizC[FC][FC],filas,columnas, k, suma,j,i;
    printf("\nMatriz 1\n");
 //Matriz A
    printf("\nIndique el número de filas:");scanf("%d",&filas);
    printf("Indique el número de columnas:");scanf("%d",&columnas);

    for(int i=0; i < filas; i ++){
        for(int j=0;j < columnas; j ++){
            printf("\nIndique el valor[%d][%d]:",i + 1 ,j + 1);scanf("%d",&MatrizA[i][j]);
        }
    }
   //Matriz B 
    printf("\nMatriz 2\n");
    printf("\nIndique el número de filas:");scanf("%d",&filas);
    printf("\nIndique el número de columnas:");scanf("%d",&columnas);

    for(i=0; i < filas; i ++){
        for(j=0;j < columnas; j ++){
            printf("\nIndique el valor [%d][%d]:",i + 1 ,j+ 1);scanf("%d",&MatrizB[i][j]);
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
   

  

void matriz_traspuesta(){
	
	int matriz[FC][FC],n_columnas, n_filas, filas, columnas;
	printf("Digita el número de filas:");scanf("%d",&n_filas);
    printf("Digita el número de columnas:");scanf("%d", &n_columnas);
	
	    
    for(filas = 0;filas < n_filas;filas++){
	    for(columnas = 0;columnas < n_columnas;columnas++){
	        printf("Digita el valor de[%d][%d]:\t", filas+1, columnas+1);scanf("%d", &matriz[filas][columnas]);
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
	    
    printf("\n\n\t\tMatriz traspuesta");//Impresión en pantalla de la matriz traspuesta
	printf("\n\n");
	
    for(filas= 0;filas < n_columnas;filas++){
	    printf("\n\t\t");
	
        for(columnas = 0;columnas < n_filas ;columnas++){
	        printf("%d", matriz[columnas][filas]);
	    }
	    printf("\n");
    }
}  


void fahrenheit(){
    
    printf("\nIndicar el valor de la temperatura(sin la unidad):");scanf("%f",&temperatura);
    printf("\nIndicar la conversión deseada(seleccionar el número de la opción que corresponda): \n\n 1. F --> C \n 2. F --> K\n:");scanf("%i",&opc_c);
    
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
    
    printf("\nIndicar el valor de la temperatura(sin la unidad):");scanf("%f",&temperatura);
    printf("\nIndicar la conversión deseada (seleccionar el número de la opción que corresponda):\n1.C --> F \n2.C --> K\n:") ;scanf("%i",&opc_c);
    
    
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

    printf("\nIndicar el valor de la temperatura:");scanf("%f",&temperatura);
    printf("\nIndicar la conversión deseada: (seleccionar el número de la opción que corresponda)\n1.K --> C \n2.K --> F \n:");scanf("%i",&opc_c);
     
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

void hipotenusa(){
    float co,ca,h;
    printf("Digite el valor de su cateto opuesto:");scanf("%f",&co);
    printf("Digite el valor de su cateto adyacente:");scanf("%f",&co);
    h=sqrt((co*co) + (ca*ca));
    printf("El valor de la hipotenusa es:%f",h);
}


void area(){
	
	float base,alt, a;
	printf("Escribe la base:");scanf("%f",&base);
	printf("Escribe la altura:");scanf("%f",&alt);
	a=base*alt/2;
	printf("El area del triangulo es: %f",a);
	
	
}


void angulo(){
	
	
	float a1,a2,a3;
	printf("Escribe el valor de los 2 angulos:");
	scanf("%f %f",&a1,&a2);
	a3=180 -(a1+a2);
	printf("El tercer angulo mide : %f",a3);
	
}


void sueldo_neto(){
	float bono,iva_a,iva_r,salario_bruto,salario_neto;
	 
	printf("Diguite su salario bruto:");scanf("%f",&salario_bruto);
	
    printf("Diguite el porcentaje de IVA Agregado(no es necesario digitar el simbolo del procentaje):");scanf("%f",&iva_a);
	iva_a = (iva_a/100)*salario_bruto;
	
    printf("Diguite el porcentaje de IVA Retenido:(no es necesario digitar el simbolo del porcentaje):");scanf("%f",&iva_r);
	iva_r = iva_r/100*salario_bruto;
	salario_neto = (salario_bruto+iva_a)-iva_r;
	
    printf("El salario neto es:%.2f\n",salario_neto);
	
    if (salario_neto>10000){
		printf("Su salario es mayor a 10000 por lo que recibira un bono del 5 porciento");
		bono = (salario_neto*bono)/100;
		salario_neto  = salario_neto +  bono;
		
        printf("El salario neto con el bono es:%.2f",salario_neto);
	} 
    
    else {
		printf("Fin del programa");
	}
	
}


int main(){
    
    printf("Bienvenido al programa de cálculos matemáticos diversos\n");
    printf("Seleccionar el número de la opción deseada,\nEjemplo:Si desea obtener el área de un rectangulo eliga el número 1, para ingresar al menú interno del subprograma \n\n");
    printf("Menú\n\n1.Obtener el área de un cuadrado, Obtener el área de un rectangulo, Obtener el área de un trapecio\n2.Obtener el factorial de un número\n3.Suma de dos matrices de 2x2 hasta 10 x 10\n4.Multiplicación de dos matrices de 2x2 hasta 10x10\n5.Trasposición de una matriz de 3 x 3 hasta 10 x 10\n6.Conversión de temperaturas\n7.Obtener el área de un triángulo,Obtener la hipotenusa de un triángulo rectangulo, Obtener el ángulo\n8.Obtener su salario a partir del IVA Agregado y Reducido\n");
    printf("\nOpción:");scanf("%i",&opc);
    
    
    switch (opc){

        case 1:
        cuadrados();
        break;

        case 2:
        factorial();
        break;
    
        case 3:
        suma_matrices();
        break;
        
        case 4:
        multiplicacion_matrices();
        break;
        
        case 5:
        matriz_traspuesta();
        break;
    
    
        case 6:
        printf("\nIndique las unidades en las que se encuentra su temperatura (Elegir el número de la opción deseada)\n");
        printf("\n1.Celcius\n2.Kelvin\n3.Fahrenheit\n");
        printf("\nOpción:");scanf("%i",&opc_c);
        
        if(opc_c ==1){
            
            celcius();
        }
    
        else if (opc_c==2)
        {
            kelvin();
        }
        
        else {

            fahrenheit();
        }
        break;
    
    
        case 7:

        printf("Elegir el número de la opción deseada\n");
        printf("\n1.Obtener el área de un triángulo\n2.Obtener la hipotenusa de un triángulo rectangulo\n3.Obtener el ángulo\n");
        printf("Opción:");scanf("%i",&opc_c);
        
        if(opc_c ==1){
            
            area();
        }
    
        else if (opc_c==2)
        {
            //hipotenusa();
        }
        
        else {

            angulo();
        }
        break;       
    
        case 8:
        sueldo_neto();
    
    }

    return 0;
}    