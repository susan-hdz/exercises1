#include<stdio.h>
#include<stdlib.h>
int main (){
	float a,b,c,d,e;
	int opt;
	printf("1.AREA DE TRIANGUO\n2.AREA DE TRAPECIO\n3.AREA DE RECTANGULO\n");
	printf("ELIGE UNA OPERACION: ");
	scanf("%d",&opt);
	printf("INTRODUCE A ALTURA: ");
	scanf("%f",&a);
	switch(opt){
		case 1: printf("INTRODUCE LA BASE: ");
		scanf("%f",&b);
		c=a*b/2;
		case 2: printf("INTRODUCE EL LADO 1: ");
		scanf("%f",&d);
		printf("INTRODUCE EL LADO 2: ");
		scanf("%f",&e);
		c=a*(d+e)/2;
		case 3: printf("INTRODUCE LA BASE: ");
		scanf("%f",&b);
		c=a*b;
	}
	printf("EL AREA ES: %.2f",c);
}
