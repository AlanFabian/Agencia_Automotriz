/*Sistema de agencia automotriz
Datos del programa:

Nombres de variables:

Registros:
Automoviles(Marca,Modelo,Numero de Serie,Año,Precio,Tipo(Nuevo o Semi Nuevo))
Agentes de Venta (CodigoAgente,Nombre,Apellido,Edad,Sueldo,Comisiones)
Gerentes(CodigoGerente,Nombre Completo,Domicilio,Telefono)
Clientes(CodigoCliente,Nombre Completo,Domicilio,Telefono)
Ventas(NumeroFolio,CantidadAutomovilesVendidos,CodigoAgentedeVenta,NumeroSerieAutoVendido,VentaTotal,TipoVenta(Contado o Credito),mensualidad)
Reportes:
Cantidad de ventas realizadas
Cantidad de ventas a credito
Cantidad de ventas de contado 
Cantidad en pesos de las ventas totales 
Descripcion de clientes de la agencia automotriz
Descripcion de los agentes de ventas actuales 
Descripcion de los gerentes

Integrantes:
Alan de Jesus Fabian Garcia 
Paulo Isaac  Garcia Jimenez
Omar Alexis Espinoza Delgado 
Jose Jimenez
*/

//LIBRERIAS
#include<iostream>
#include<fstream>

//#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<string.h>

//OBJETOS
#include "Agencia.h"

//Funciones 
void MensajeBienvenida();
int MenuReportes();

using namespace std;

/*       Programa Principal          */
int main(){
    MensajeBienvenida();
    int OpcionMain;
    do{
        OpcionMain=MenuReportes();

    }while(OpcionMain != 8);

    system("pause");
return 0;
}

//Menu y Bienvenida
void MensajeBienvenida(){
    cout<<"Bienvenido al sistema  de la agencia "<<endl<<" *AUTO-CAR* "<<endl;
    
}
int MenuReportes(void){
    int OpcMenuReportes;
    cout<<endl<<" ---MENU-- "<<endl;
    cout<<endl<<" 1.Cantidad de ventas realizadas "<<endl;
    cout<<endl<<" 2.Cantidad de Ventas a Credito  "<<endl;
    cout<<endl<<" 3.Cantidad de Ventas de Contado "<<endl;
    cout<<endl<<" 4.Cantidad en pesos de las ventas totales "<<endl;
    cout<<endl<<" 5.Descripcion de clientes de la agencia automotriz "<<endl;
    cout<<endl<<" 6.Descripcion de los agentes de ventas actuales "<<endl;
    cout<<endl<<" 7.Descripcion de los gerentes"<<endl;
    cout<<endl<<"Si desea Salir del programa,presione cualquier numero distinto"<<endl;
    cin>>OpcMenuReportes;
    cin.ignore();

    return OpcMenuReportes;
   
}

//REPORTES
void CVentasRealizadas(){

}
void CVentasCredito(){

}
void CVentasContado(){

}

void CPesosVentasTotales(){

}
void DClientesAgenciaAutomotriz(){

}
void DClientesAgentesVentasActuales(){

}
void DGerentes(){

}

