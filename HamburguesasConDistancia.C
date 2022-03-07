#include <stdio.h>
int main()
 { 
    int IngresoPedido;
     printf("Desea ingresar un pedido \n");
     printf("Si,Ingrese 1.\n");
     printf("No,Ingrese 0.\n");
     scanf("%d",&IngresoPedido);
     while(IngresoPedido==1){
     int cantHamburguesas ;
     int cantPapasFritas ;
     int cantGaseosas ;
     int cantHelado ;
     int cantEnsalada ;
    
   
     printf("************MENU**************\n");
     printf("*PRODUCTO      PRECIO        *\n");
     printf("*Hamburguesas  $600          *\n");
     printf("*Papas Fritas  $300 *\n");
     printf("*Gaseosa       $250 *\n");
     printf("*Helado        $300 *\n");
     printf("*Ensalada      $200 *\n");
     printf("******************************\n");
     printf("ingrese la cantidad de hamburguesas : ");
     scanf("%d",&cantHamburguesas);
     printf("ingrese la cantidad de Papas Fritas : ");
     scanf("%d",&cantPapasFritas);
     printf("ingrese la cantidad de Gaseosas : ");
     scanf("%d",&cantGaseosas);
     printf("ingrese la cantidad de Helado : ");
     scanf("%d",&cantHelado);
     printf("ingrese la cantidad de Ensalada : ");
     scanf("%d",&cantEnsalada);
    int x2;
    int y2;
    float dist;
    float PDeEnvio;
    
   
    printf("Ingrese las coordenadas de destino \n");
    printf("x2 :");
    scanf("%d",&x2);
    printf("y2 :");
    scanf("%d",&y2);
    
    dist = pow(pow(2- x2,2)+ pow(3 -y2,2),0.5);
    PDeEnvio = dist * 70;
    
    
    
    
     int precio = cantHamburguesas*600 + cantPapasFritas*300 + cantGaseosas*250 + cantHelado*300 + cantEnsalada*200;
     int cantidadTotal = cantHamburguesas + cantPapasFritas + cantEnsalada + cantGaseosas + cantHelado;
     if(cantidadTotal >= 5){
     int PFDescuento = precio - 0.1 *precio;
     printf("Precio final con descuento = $%d \n",PFDescuento); }
     else{ printf("\n el precio final es :$%d ",precio); }
    printf("Costo de envio es : %.2f \n",PDeEnvio);
     printf("GRACIAS VUELVAS PRONTO!! \n");
     printf("Desea ingresar un pedido \n");
     printf("Si,Ingrese 1.\n");
     printf("No,Ingrese 0.\n");
     scanf("%d",&IngresoPedido);}
    
     printf("CIERRE DE SISTEMA.");
    
    
     return 0;
    
     }
