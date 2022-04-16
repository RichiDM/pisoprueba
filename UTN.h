/*
 * UTN.h
 *
 *  Created on: 15 abr. 2022
 *  Author: Maldonado Ricardo
 */

#ifndef UTN_H_
#define UTN_H_
/**
 * @brief funcio que sirve para el ingreso de kilometraje en numeros no menores a 0
 * @return regresa el kolometraje que elusuario ingreso
 */
float funcionIngresarKilometros();
float funcionPreciosVueloLatam();
float funcionPreciosVueloAerolineas();
float funcionDebitoConDescuento(float valor);
float funcionCreditoConAumento(float precio);
float funcionCambioPesosaBitcoin(float valor);
float funcionCalcularPrecioUnitario(float valor, float km);
float funcionSacarLaDiferencia(float valor1, float valor2);


#endif /* UTN_H_ */
