#include<stdio.h>
#include<math.h>
#define FC 3   //Dimensiones de las matrices
int resultado, temperatura;

// Definiendo la variable que nos permitira entrar al switch y a los condicionales dentro del switch
int opc, opc_c;

//Caso 1
void hipotenusa(){
    
    float co, ca, h;
    printf("Indique el valor del cateto opuesto:");scanf("%f",&co);
    printf("Indique el valor del cateto adyacente:");scanf("%f",&ca);   
    h=(pow(co,2)+ pow(ca,2));
    h=sqrt(h);
    printf("La hipotenusa mide: %f",h);
}


void area(){
	
	float base,alt, a;
	printf("Escribe la base:");scanf("%f",&base);
	printf("Escribe la altura:");scanf("%f",&alt);
	a=base*alt/2;
	printf("El area del triangulo es: %.2f",a);
	
	
}

void angulo(){
	
	
	float a1,a2,a3;
	printf("Escribe el valor de los 2 angulos:");
	scanf("%f %f",&a1,&a2);
	a3=180 -(a1+a2);
	printf("El tercer angulo mide : %f",a3);
	
}



void factorial(){

    int entero,facto=1,i;
    printf("Digite un numero:");scanf("%i",&entero);

    for ( i=1; i <= entero; i ++){
        
        facto = facto * i;
        
    }
    printf("El resultado es: %i ",facto);    
}    


      
void suma_matrices(){
    printf("Programa para calcular la suma de dos matrices\n\n");

    int matriz_A[FC][FC] , matriz_B[FC][FC], matriz_C[FC][FC],n_filas, n_columnas,filas,columnas;
    
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


void multiplicacion_matrices(){
     
    int MatrizA[FC][FC],MatrizB[FC][FC],MatrizC[FC][FC],filas,columnas, k, suma,j,i;
    printf("Matriz 1\n");
    //Matriz A
    printf("Indique el numero de filas:");scanf("%d",&filas);
    printf("Indique el numero de columnas:");scanf("%d",&columnas);

    for(int i=0; i < filas; i ++){
        for(int j=0;j < columnas; j ++){
            printf("Indique los valores de su matriz[%d][%d]:",i + 1 ,j + 1);scanf("%d",&MatrizA[i][j]);
        }
    }
   //Matriz B 
    printf("\nMatriz 2\n");
    printf("Indique el numero de filas:");scanf("%d",&filas);
    printf("Indique el numero de columnas:");scanf("%d",&columnas);

    for(i=0; i < filas; i ++){
        for(j=0;j < columnas; j ++){
            printf("Indique los valores de su matriz [%d][%d]:",i + 1 ,j+ 1);scanf("%d",&MatrizB[i][j]);
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



void sueldo_neto(){
	float bono,iva_a,iva_r,salario_bruto,salario_neto;
	 
	printf("Diguite su salario bruto:");scanf("%f",&salario_bruto);
	
    printf("Diguite el porcentaje de IVA Agregado:");scanf("%f",&iva_a);
	iva_a = (iva_a/100)*salario_bruto;
	
    printf("Diguite el porcentaje de IVA Retenido:");scanf("%f",&iva_r);
	iva_r = iva_r/100*salario_bruto;
	salario_neto = (salario_bruto+iva_a)-iva_r;
	
    printf("El salario neto es:%.2f\n",salario_neto);
	
    if (salario_neto>10000) {
		printf("Digitar el valor de su bono:");scanf("%f",&bono);
		bono = (salario_neto*bono)/100;
		salario_neto = salario_neto + bono;
		
        printf("El salario neto con el bono es:%.2f",salario_neto);
	} 
    
    else {
		printf("Fin del programa");
	}
	
}


int main(){
    printf("\nBienvenido al programa de calculos matematicos diversos\n");
    printf("Menú\n");
    printf("Digite el número de la opción deseada:\n");
    printf("\n1.Obtener el area de un triangulo, hipotenusa de un triangulo rectangulo,valor de un angulo\n2.Obtener el factorial de un número\n3.Realizar la suma de matrices\n4.Realizar la multiplicación de matrices\n5.Conversiónes de temperatura\n6.Obtener su salario neto, considerando el IVA Agregado y el IVA Reducido\n");
    scanf("%i",&opc);
    printf("\n");


    if (opc >=1 || opc <=6){
        switch (opc){
        
            case 1:
            printf("Digite el número de la opción deseada:1.Obtener el area de un triangulo,\n2.hipotenusa de un triangulo rectangulo,\n3.valor de un angulo\n");scanf("%d",&opc_c);
            
            if (opc_c==1){
            area();
            }
            
            else if (opc_c==2){
            hipotenusa();
            
            }
             
            else{
            angulo();
            
            }
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
            printf("Indique la unidad en la que se encuentra la temperatura(Elegir el numero que corresponda)\n1.Celsius\n2.Kelvin.\n3.Fahrenheit\n");scanf("%d",&opc_c);
            if (opc_c==1){
                celcius();
            }
            
            else if (opc_c==2){
                kelvin();
            }
            
            else{
                fahrenheit();
        
            }
            
            break;
    
            case 6:
            sueldo_neto();
            break;

            default:
                printf("Digite el número de la opción deseada:\n");
                printf("\n1.Obtener el area de un triangulo, hipotenusa de un triangulo rectangulo,valor de un angulo\n2.Obtener el factorial de un número\n3.Realizar la suma de matrices\n4.Realizar la multiplicación de matrices\n5.Conversiónes de temperatura\n6.Obtener su salario neto, considerando el IVA Agregado y el IVA Reducido\n");
                scanf("%i",&opc);
        
        }
    
    }
    
    else{
        printf("Fin del programa");
    } 
    

    
    return 0;

}
