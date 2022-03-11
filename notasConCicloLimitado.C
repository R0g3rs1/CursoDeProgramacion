#include <stdio.h>

float promedio (float nota1,float nota2,float nota3);

int main() {
    
    float nota1,nota2,nota3;
    
    for(int i=1; i<=3;i++){
        
        printf("%d",i);
        printf("\n ingrese nota 1 :");
        scanf("%f",&nota1);
        printf("\n ingrese nota 2 :");
        scanf("%f",&nota2);
        printf("\n ingrese nota 3 :");
        scanf("%f",&nota3);
        
        if((nota1>=6)&&(nota2>=6)&&(nota3>=6)){
            printf("Aprobo");
            
        }else{ 
            printf("No Aprobo");
        }
        float promediocalc = promedio(nota1,nota2,nota3);
        printf("\n su promedio es :%.2f",promediocalc);
        printf("\n+++++++++++++++++++++++++++++++++++++\n");
        
    }
    
    return 0;
}

    float promedio(float nota1,float nota2, float nota3){
        
        float prom = (nota1 + nota2 + nota3)/3;
        return prom;
    }
