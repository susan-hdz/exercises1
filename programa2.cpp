 #include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	printf("Introduce 2 nuemros: ");
	scanf("%d %d",&a,&b);
	if (a % b==0){
		printf("El valor es divisible con %d",b);
	}
	else{
		printf("No es divisible." );
	}
	
}
