#include <stdio.h>
int main (void){
    int N[5];
    int m=0;
    int i;
    int cont=0;
    int S=0;
    for (i=0;i<=4;i++){
        printf("Escreva a nota:");
        scanf("%d",&N[i]);
        S+=N[i];
        m=S/5;
    }        
    for (i=0;i<=4;i++){
        if (N[i]>m){
            cont+=1;  

        }
    } 
    printf("Media %d/n",m);
    printf("Acima da media: %d/n",cont);    
}
