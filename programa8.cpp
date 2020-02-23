#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	printf("INTRODUCE TRES NUMEROS\nPRIMER NUMERO: ");
	scanf("%d",&a);
	printf("SEGUNDO NUMERO: ");
	scanf("%d",&b);
	printf("TERCER NUMERO: ");
	scanf("%d",&c);
	printf("TE DARE EL ORDEN DE MENOR A MAYOR: ");
	if (a>b){
	if(b>c){
		printf("\nEL PRIMERO ES: %d",c);
		printf("\nEL SEGUNDO ES: %d",b);
		printf("\nEL TERCERO ES: %d",a);
	}
	}
	if(a>c){
	if(b<c){
		printf("\nEL PRIMERO ES: %d",b);
		printf("\nEL SEGUNDO ES: %d",c);
		printf("\nEL TERCERO ES: %d",a);
	}
	}
	if(b>a){
	if(a>c){
		printf("\nEL PRIMERO ES: %d",c);
		printf("\nEL SEGUNDO ES: %d",a);
		printf("\nEL TERCERO ES: %d",b);
	}
	}
	if(b>c){
	if(a<c){
		printf("\nEL PRIMERO ES: %d",a);
		printf("\nEL SEGUNDO ES: %d",c);
		printf("\nEL TERCERO ES: %d",b);
	}
	}
	 if(c>a){
	if(a>b){
		printf("\nEL PRIMERO ES: %d",b);
		printf("\nEL SEGUNDO ES: %d",a);
		printf("\nEL TERCERO ES: %d",c);
	}
	}
	if(c>b){
	if(a<b){
		printf("\nEL PRIMERO ES: %d",a);
		printf("\nEL SEGUNDO ES: %d",b);
		printf("\nEL TERCERO ES: %d",c);
	}
	}
}
