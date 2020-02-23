#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y;
	printf("INGRESE EL VALOR DE X: ");
	scanf("%d",&x);
	if (x<0){
	if(x==0){
		y=x+3;
		printf("F(X) ES IGUA A %d",y);
	}
	}	
	if(x>0){
		y=(x*x)+2*x;
		printf("F(X) ES IGUAL A %d",y);
	}
}
