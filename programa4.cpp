#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	printf("Introduce el primer numero: ");
	scanf("%d",&a);
	printf("Introduce el sugundo numero: ");
	scanf("%d",&b);
	if (a==b){
		printf("Los dos son igules. ");
	}
	else if (a<b){
	printf("El mayor es: %d ",b);
	}
	else if (a>b){
		printf("El mayor es: %d",a);
	}
	
	}
