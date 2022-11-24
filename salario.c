#include<stdio.h>

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

	sueldo_neto();
}