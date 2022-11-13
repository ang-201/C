// Programa: triangulo.c

/*

La suma de cada cateto al cuadrado es igual a la hipotenusa al cuadrado
Triángulo rectángulo: un ángulo de 90° y todos los lados diferentes

Calcula la hipotenusa
*/

#include<stdio.h>
#include<math.h>

void hipotenusa(){


    float co, ca, h;
    
	printf("Indique el valor del cateto opuesto:");
	scanf("%f",&co);
    printf("Indique el valor del cateto adyacente:");
	scanf("%f",&ca);   
    h=sqrt(co*co + ca*ca);
    printf("La hipotenusa mide: %f",h);


}


void area(){
	
	float base,alt;
	float a;
	printf("Escribe la base:");
	scanf("%f",&base);
	printf("Escribe la altura:");
	scanf("%f",&alt);
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

int main(){
	
	
	char opc;
	printf("Eliga la opcion que desee: a)Hipotenusa de un triangulo rectangulo ,  b) area de un triangulo   c)valor de un angulo ");
	scanf("%c",&opc);
	
	
	
	switch(opc){
		
		
		case 'a':
		hipotenusa();
		break;
		
		
		case 'b':
		area();
		break;
		
		
		
		case 'c':
		angulo();
		break;
	  	
		
		
	}
	
	
	return 0;
	

}
