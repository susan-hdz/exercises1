#include<stdio.h>
#include<stdlib.h>
int main(){
	int y1,y2,x1,x2,M;
	printf("INTRODUCE EL VALOR Y1: ");
	scanf("%d",&y1);
	printf("INTRODUCE EL VALOR DE Y2: ");
	scanf("%d",&y2);
	printf("INTRODUCE EL VALOR DE X1: ");
	scanf("%d",&x1);
	printf("INTRODUCE EL VALOR DE X2: ");
	scanf("%d",&x2);
	if (x1-x2==0){
	printf("LA PENDIENTE ES VERTICAL. ");
}
	else{
		M=(y2-y1)/(x2-x1);
		printf("LA PENDIENTE ES IGUA A %d",M);
	}
}
