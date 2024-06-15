#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("Escreva 1 numero: ");
	scanf("%d",&a);
	printf("Escreva 2 numero: ");
	scanf("%d",&b);
	printf("Escreva 3 numero: ");
	scanf("%d",&c);
	if (a>b && a>c){
		printf("%d",a);
	}
	if (b>a && b>c){
		printf("%d",b);
	}
	if (c>a && c>b){
		printf("%d",c);
	}
	return 0;
}
