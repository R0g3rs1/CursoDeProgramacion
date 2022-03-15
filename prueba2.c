#include <stdio.h>

int main() {
    
    int numero;
    int acum = 0;
    int cont = 0;
    for(int i=1 ; i<=10 ; i++){
    
    printf("Ingrese un numero entero: \n");
    scanf("%d",&numero);
    
    if(numero>=0){
        acum = numero + acum;
    }else{
        cont++;
};}
    printf("la suma de los numeros positivos es:%d \n",acum);
    printf("la cantidad de numeros negativos son:%d \n",cont);
    return 0;
}