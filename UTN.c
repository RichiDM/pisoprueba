/*
 * UTN.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Maldonado Ricardo
 */
#include <stdio.h>
#include <stdlib.h>


float funcionIngresarKilometros()
{
    float kilometros;

    printf("ingresar kilometros\n");
    scanf("%f",&kilometros);

    return kilometros;

}
float funcionPreciosVueloLatam()
{

   float precioLatam;

   printf("ingresar el precio de empresa Latam :");
   scanf("%f",&precioLatam);


   return precioLatam;

}
float funcionPreciosVueloAerolineas()
{

   float precioAerolineas;

   printf("\ningresar el precio de empresa Aerolineas :");
   scanf("%f",&precioAerolineas);


   return precioAerolineas;

}
float funcionDebitoConDescuento(float valor)
{

    float descuento;
    float totalDescontado;

    descuento=valor*0.10;
    totalDescontado=valor-descuento;

   // printf("el valor con debito es  es :%.2f\n ",totalDescontado);

    return totalDescontado;

}
float funcionCreditoConAumento(float precio)
{
    float aumento;
    float totalConAumento;

    aumento=precio*0.25;
    totalConAumento=precio+aumento;

    //printf("el valor del vuelo latam con credito es :%f\n ",totalConAumento);

    return totalConAumento;


}
float funcionCambioPesosaBitcoin(float valor)
{
    float precioEnBitcoin;
    float btc;

    btc=4606954.55;
    precioEnBitcoin=valor/btc;

    return precioEnBitcoin;
}
float funcionCalcularPrecioUnitario(float valor,float km)
{
    float precioUnitarioFinal;

    precioUnitarioFinal=valor*km;

    return precioUnitarioFinal;
}
float funcionSacarLaDiferencia(float valor1,float valor2)
{
   float diferencia;

   if(valor1>valor2)
   {
       diferencia=valor1-valor2;
   }
   else
   {
       if(valor1<valor2)
       {
           diferencia=valor2-valor1;
       }
   }

   return diferencia;
}


