#include<stdio.h>
#include<math.h>   

#define FC 3 // Constante que indica la cantidad de filas y columnas que puede tener una matriz como maximo en el programa

int opc; //Variable global que nos permitira  entrar al switch del menu
int opc_c; // Variable global que nos permite ingresar a las opciones de los subprogramas    
float resultado, temperatura; //Variables globales del programa conversiones de temperatura



void cuadrados(){ 
    printf("\nElegir el numero de la opcion deseada:\n\n1.Calcular el area de un cuadrado\n2.Calcular el area de un trapecio\n3.Calcular el area de un rectangulo ");
    int opcion; //Declaracion de variable que nos permitira entrar al switch de la funcion
    printf("\n\nOpcion:");scanf("%i",&opcion);
    float b_mayor,b_menor,altura,base,lado,resultado; //Variables necesarias para realizar los calculos de las areas
    
	switch (opcion)
        {
            case 1:

				//Obtener el area de un cuadrado
                printf("\nValor del lado del cuadrado:");scanf("%f",&lado);
                resultado=lado * lado ;
                printf("\nEl resultado es: %.2f",resultado);

            break;

            case 2:
                //Obtener el area de un trapecio
                printf("\nIndicar el valor de la base mayor:");scanf("%f",&b_mayor);
                printf("\nIndicar el valor de la base menor:");scanf("%f",&b_menor);
                printf("\nIndicar el valor de la altura:");scanf("%f",&altura);
                resultado=((b_mayor + b_menor) * altura/2);
                printf("\nEl resultado es: %.2f",resultado);
            break;

            case 3:
                //Obtener el area de un triangulo
                printf("\nIndique el valor de la base:");scanf("%f",&base);
                printf("\nIndique el valor de la altura:");scanf("%f",&altura);
                resultado= base * altura;
                printf("\nEl resultado es: %.2f",resultado);
            break;


            default:
                printf("No ha seleccionado una opcion valida");
        }
}


void factorial(){

    int entero,facto=1,i; //Declaracion de variables que entraran al ciclo for
    printf("\nDigite un numero:");scanf("%i",&entero); //Se indica el numero del cual se quiere obtener su factorial 

    for ( i=1; i <= entero; i ++){
        
        facto = facto * i; //Se inicializa el primer valor del factorial
    }
    printf("\nEl factorial de %i es : %i",entero,facto);//Impresi
        
}    



void suma_matrices(){
    
	printf("\nPrograma para calcular la suma de matrices\n");

    int matriz_A[FC][FC] , matriz_B[FC][FC], matriz_C[FC][FC],n_filas, n_columnas,filas,columnas; //Declaracion de matrices
    
    //Matriz a
    printf("\nMatriz 1\n ");

    printf("\nIndique el numero de filas:");scanf("%d",&n_filas);
    printf("\nIndique el numero de columnas:");scanf("%d",&n_columnas);

    //Matriz B
        
    printf("\n");
        
    printf("\nMatriz 2\n");
    
    printf("\nIndique el numero de filas:");scanf("%d",&n_filas);
    printf("\nIndique el numero de columnas:");scanf("%d",&n_columnas);
    printf("\n");
    
        printf("\nDigite los valores para su matriz 1\n");
        for (filas=0;filas < n_filas; filas ++){
            for(columnas=0;columnas < n_columnas;columnas ++){
            printf("\nIndique el elemento[%d][%d]:",filas  + 1 ,columnas + 1);scanf("%d",&matriz_A[filas][columnas]);
            }    
        }
        
        printf("\nDigite los valores para su matriz 2\n");
        for(filas=0;filas < n_filas; filas ++){
            for (columnas=0;columnas < n_columnas;columnas++){
                printf("\nIndique el elemento[%d][%d]:",filas  + 1 ,columnas + 1);scanf("%d",&matriz_B[filas][columnas]);
            }
        }

        printf("\nResultado:\n\n"); 
        //Suma de matrices
        for(filas=0;filas < n_filas; filas ++){
            for (columnas=0; columnas < n_columnas;columnas++){
                matriz_C [filas][columnas]= matriz_A[filas][columnas] + matriz_B[filas][columnas];
            }
        }
    
        printf("\n");
        //Impresion de la matriz
        for (filas=0; filas < n_filas;filas++){
            for(columnas=0;columnas < n_columnas;columnas ++){
            
				printf("\t%d",matriz_C[filas][columnas]);
            }
            printf("\n");        
        	
		} 
        
 
    }    
        
    

void multiplicacion_matrices(){
     
    printf("\nPrograma para multiplicar matrices\n");
	int MatrizA[FC][FC],MatrizB[FC][FC],MatrizC[FC][FC],filas,columnas, k, suma,j,i;
    printf("\nMatriz 1\n");
 	//Matriz A
    
	printf("\nIndique el numero de filas:");scanf("%d",&filas);
    printf("Indique el numero de columnas:");scanf("%d",&columnas);

    for(i=0; i < filas; i ++){
        for( j=0;j < columnas; j ++){
            printf("\nIndique el valor[%d][%d]:",i + 1 ,j + 1);scanf("%d",&MatrizA[i][j]);
    	}
    }
   	
	//Matriz B 
    printf("\nMatriz 2\n");
    printf("\nIndique el numero de filas:");scanf("%d",&filas);
    printf("\nIndique el numero de columnas:");scanf("%d",&columnas);

    for(i=0; i < filas; i ++){
        for(j=0;j < columnas; j ++){
            printf("\nIndique el valor [%d][%d]:",i + 1 ,j+ 1);scanf("%d",&MatrizB[i][j]);
        }
    }
	printf("\nResultado:\n\n");
    //Producto de matrices
    for ( i=0; i < filas; i ++){
        for(j=0; j< columnas;j++){
            int suma=0;
            for (k=0;k < columnas; k ++){
                suma += MatrizA[i][k] * MatrizB[k][j];
                
            }//Impresiòn matriz
    
			MatrizC[i][j]= suma;
            printf("\t%d",MatrizC[i][j]);
           	
        }
        printf("\n");
    	
	}
}
   

  

void matriz_traspuesta(){
	printf("\nPrograma para obtener la matriz traspuesta de una matriz\n");
	
	int matriz[FC][FC],n_columnas, n_filas, filas, columnas;
	printf("\nDigita el numero de filas:");scanf("%d",&n_filas);
    printf("\nDigita el numero de columnas:");scanf("%d", &n_columnas);
	
	    
    for(filas = 0;filas < n_filas;filas++){
	    for(columnas = 0;columnas < n_columnas;columnas++){
	        printf("\nDigita el valor de [%d][%d]:", filas+1, columnas+1);scanf("%d", &matriz[filas][columnas]);
	    }
	}
	
    
    //Impresion en pantalla de la matriz original
    
    printf("\nMatriz inicial:");
    for(filas = 0;filas < n_filas;filas++){
		printf("\n\t\t");
	    for(columnas = 0;columnas < n_columnas;columnas++){
	        printf("%d ", matriz[filas][columnas]);
	    }
	}
	    
    printf("\n\nMatriz traspuesta:");//Impresion en pantalla de la matriz traspuesta
	//printf("\n\t");
	
    for(filas= 0;filas < n_columnas;filas++){
	    printf("\n\t\t");
	
        for(columnas = 0;columnas < n_filas ;columnas++){
	        printf("\t%d", matriz[columnas][filas]);
	    }
	}
}  


void fahrenheit(){
    
    printf("\nIndicar el valor de la temperatura(sin la unidad):");scanf("%f",&temperatura);
    printf("\nIndicar la conversion deseada(seleccionar el numero de la opcion que corresponda): \n\n 1. F --> C \n 2. F --> K\n:");scanf("%i",&opc_c);
    
    if (opc_c==1){
        resultado= (temperatura - 32)*0.55 ;
        printf("\nEl resultado es %.2f ºC",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura + 459.67)*0.55 ;
        printf("\nEl resultado es %.2f K",resultado);
    }    
    

    else{
        printf("\nNo ha seleccionado una opcion valida");
    
    }
    
}


void celcius(){
    
    printf("\nIndicar el valor de la temperatura(sin la unidad):");scanf("%f",&temperatura);
    printf("\nIndicar la conversion deseada (seleccionar el numero de la opcion que corresponda):\n1.C --> F \n2.C --> K\n:") ;scanf("%i",&opc_c);
    
    
    if (opc_c==1){
        resultado= (temperatura * 1.8) + 32 ;
        printf("\nEl resultado es %.2f  °F",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura + 273.15) ;
        printf("\nEl resultado es %.2f K",resultado);
    }    
    

    else{
        printf("\nNo ha seleccionado una opcion valida");
    
    }
    
}


void kelvin(){

    printf("\nIndicar el valor de la temperatura:");scanf("%f",&temperatura);
    printf("\nIndicar la conversion deseada: (seleccionar el numero de la opciÃ³n que corresponda)\n1.K --> C \n2.K --> F \n:");scanf("%i",&opc_c);
     
    if (opc_c==1){
        resultado= (temperatura - 273.15);
        printf("\nEl resultado es %.2f  °C",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura - 273.15)*1.8 + 32 ;
        printf("\nEl resultado es %.2f  °F",resultado);
    }    
    

    else{
        printf("\nNo ha seleccionado una opcion valida");
    
    }
}

void hipotenusa(){
    float co,ca,h;
    printf("\nDigite el valor de su cateto opuesto:");scanf("%f",&co);
    printf("\nDigite el valor de su cateto adyacente:");scanf("%f",&co);
    h=sqrt((co*co) + (ca*ca));
    printf("\nEl valor de la hipotenusa es:%.2f",h);
}


void area(){
	
	float base,alt, a;
	printf("\nEscribe la base:");scanf("%f",&base);
	printf("\nEscribe la altura:");scanf("%f",&alt);
	a=base*alt/2;
	printf("\nEl area del triangulo es: %.2f",a);
	
	
}


void angulo(){
	
	
	float a1,a2,a3;
	printf("\nEscribe el valor del angulo 1:");scanf("%f",&a1);
	printf("\nEscribe el valor del angulo 2:");scanf("%f",&a2);
	a3=180 -(a1+a2);
	printf("\nEl tercer angulo mide : %.2f",a3);
	
}


void sueldo_neto(){
	float bono,iva_a,iva_r,salario_bruto,salario_neto;
	 
	printf("\nDiguite su salario bruto:");scanf("%f",&salario_bruto);
	
    printf("\nDiguite el porcentaje de IVA Agregado(no es necesario digitar el simbolo de porcentaje):");scanf("%f",&iva_a);
	iva_a = (iva_a/100)*salario_bruto;
	
    printf("\nDiguite el porcentaje de IVA Retenido:(no es necesario digitar el simbolo de porcentaje):");scanf("%f",&iva_r);
	iva_r = iva_r/100*salario_bruto;
	salario_neto = (salario_bruto+iva_a)-iva_r;
	
    printf("\nEl salario neto es:%.2f\n",salario_neto);
	
    if (salario_neto>10000){
		printf("\nSu salario es mayor a 10000 por lo que recibira un bono del 5 porciento\n");
		bono= 5;
		bono = (salario_neto*bono)/100;
		salario_neto  = salario_neto +  bono;
		
        printf("\nEl salario neto con el bono es:%.2f",salario_neto);
	} 
    
    else {
		printf("\nSu salario neto no es mayor a 10000 por lo que no ha recibido un bono");
	}
	
}


int main(){
    printf("\nEnlace repositorio github :https://github.com/ang-201/Programacion-Modular\n");
    printf("\nBienvenido al programa de calculos matematicos diversos\n");
	printf("\nSeleccionar el numero de la opcion deseada");
	printf("\nEjemplo:Si desea obtener el area de un rectangulo eliga la opcion numero 1 para ingresar al menu interno del subprograma \n\n");
    printf("Menu:\n\n1.Obtener el area de un cuadrado, obtener el area de un rectangulo, obtener el area de un trapecio\n");
    printf("2.Obtener el factorial de un numero\n");
	printf("3.Suma de dos matrices de 2x2 hasta 10 x 10\n");
	printf("4.Multiplicacion de dos matrices de 2x2 hasta 10x10\n");
	printf("5.Transposicion de una matriz de 3 x 3\n");
	printf("6.Conversion de temperaturas\n");
	printf("7.Obtener el area de un triangulo,obtener la hipotenusa de un triangulo rectangulo, obtener el valor de un angulo de una circunferencia\n");
   	printf("8.Obtener su salario a partir del IVA agregado y reducido\n\n");
	
	printf("\nOpcion:");scanf("%i",&opc);
    
    
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
        printf("\nIndique las unidades en las que se encuentra su temperatura (Elegir el numero de la opcion deseada)\n");
        printf("\n1.Celcius\n2.Kelvin\n3.Fahrenheit\n");
        printf("\nOpcion:");scanf("%i",&opc_c);
        
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

        printf("Elegir el numero de la opcion deseada\n");
        printf("\n1.Obtener el area de un triangulo\n2.Obtener la hipotenusa de un triangulo rectangulo\n3.Obtener el angulo de una circunferencia\n");
        printf("Opcion:");scanf("%i",&opc_c);
        
        if(opc_c ==1){
            
            area();
        }
    
        else if (opc_c==2)
        {
            hipotenusa();
        }
        
        else {

            angulo();
        }
        break;       
    
        case 8:
        sueldo_neto();
    	break;
    
		default:
		printf("Opcion no valida\n");
			
	}

    return 0;
}    
