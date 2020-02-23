#include<stdio.h>
#include<stdlib.h>
int main(){
	char a;
	printf("PULSA UNA TECLA: ");
	a=getchar();
	switch(a){
		case'1':
		case'2':
		case'3':
		case'4':
		case'5':
		case'6':
		case'7':	
		case'8':
		case'9':
		case'0':
	printf("ES NUMERO. ");
		break;
	default:
	printf("ES LETRA. ");
		
	}
}
