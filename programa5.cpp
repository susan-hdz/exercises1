#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,c;
	printf("INTRODUCE TU EDAD: ");
	scanf("%d",&a);
	if(a>10){
	if(a<60){
		printf("EL COSTO DEL BOLETO: $75");
	}
	}
	if(a<10){
		c=75*.60;
		printf("EL COSTO DEL BOLETO ES DE: $ %d",c);
	} 
	if(a>60){
		c=75*.55;
		printf("EL COSTO DEL BOLETO ES DE: $ %d",c);
	}
}
