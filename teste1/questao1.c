#include <stdio.h>
int main (void){
	int Num;
	int S=0;
	printf("Escolha um numero:");
	scanf("%d",&Num);
	while(Num>0){
		S=S+Num;
		Num=Num-1;
	}
    printf("somou %d/n", S);


}
