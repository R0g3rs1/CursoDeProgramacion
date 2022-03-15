#include <stdio.h>

int main() {
    
int numero;
int acum = 0;
int acum1 = 0;
int cont = 0;
int promedio;

 printf("ingrese un numero:");
        scanf("%d",&numero);
    while(numero!=0){
       
    
    if((numero%2)==0){
        cont++;
        acum =acum + numero;
        promedio = acum + cont ;
    }else{
        acum1 = acum1 + numero;
    }
         printf("ingrese un numero:");
        scanf("%d",&numero);
    };
     printf("promedio de numeros pares:%d \n",promedio);
     printf("la suma de los numeros impares son:%d \n",acum1);
    
    return 0;
    }
