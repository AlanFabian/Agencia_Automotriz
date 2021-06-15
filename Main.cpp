/*Sistema de agencia automotriz


Integrantes:
Alan de Jesus Fabian Garcia 
Paulo Isaac  Garcia Jimenez
Omar Alexis Espinoza Delgado 
Jose Jimenez Villagomez
*/

//LIBRERIAS
#include<iostream>
#include<fstream>
#include<cstring>
//#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include "Agencia.h"



#define MAX 2

//OBJETOS



Automoviles *Auto = NULL;
Agentes_de_Venta *Agente = NULL;
Clientes*Clien;
Gerentes*Gerente;



int Precio;

//Funciones 
void MensajeBienvenida();
int MenuReportes(void);
int MenuGerenteVentas(void);
void ModificarEliminarInformacionCliente();
int  MenuPrincipal(void);
void entradaClientes();
void salidaClientes();

using namespace std;

/*       Programa Principal          */
int main(){
    MensajeBienvenida();
    
    int OpcionMain;
    do{
       OpcionMain=MenuPrincipal();
        //MenuGerenteVentas();

    }while(OpcionMain != 5);
    cout<<"Gracias por utilizar el sistema de Auto Car"<<endl;
     
    

    system("pause");
return 0;
}

//Menu y Bienvenida
void MensajeBienvenida(){
    cout<<"Bienvenido al sistema  de la agencia "<<endl<<" *AUTO-CAR* "<<endl;
    
}
int MenuPrincipal(void){
        int opc, opcAutomoviles, opcAgentes, opcGerentes, opcClientes, opcVentas;
    
    cout<<"Escriba la opcion que desea revisar: "<<endl;
    
     cout<<endl<<" -------------------MENU------------------- "<<endl;
     cout<<endl<<"1. Automoviles"<<endl;
     cout<<endl<<"2. Agentes de Venta"<<endl;
     cout<<endl<<"3. Gerentes"<<endl;
     cout<<endl<<"4. Clientes"<<endl;
     cout<<endl<<"5. Ventas"<<endl;
     cout<<endl<<"6. Salir"<<endl;
     cin>>opc;

     switch(opc){
         
         case 1:
         system("cls");
         cout<<endl<<"----Automoviles-----"<<endl;
         //Aqui meter las distintas opciones para automoviles
         cout<<endl<<"1.Datos Generales de Automoviles "<<endl;
         switch(opc){
            
            case 1:
            cout<<endl<<"----Datos Generales de Automoviles-----"<<endl;
            salidaClientes();
            
          
            break;
        
        }
            
         break;
         
         case 2:
         system("cls");
         //Aqui para Agentes 
         cout<<endl<<"----Agentes----"<<endl;
         cout<<endl<<"1.Generar expediente clientes"<<endl;
         cout<<endl<<"2.Consulta datos de clientes"<<endl;
         cout<<endl<<"3.Consulta datos de ventas"<<endl;
         cout<<endl<<"4.Modificar informacion clientes"<<endl;
         
         switch(opc){
            
            case 1:
            system("cls");
            cout<<endl<<"-----Generar expediente clientes------"<<endl;
            //Llamar void Expediente Clientes
            entradaClientes();

            
            break;
            
            case 2:
            cout<<endl<<"-----Consulta datos de clientes------"<<endl;
            //Llamar void Expediente Clientes
           

            break;

            case 3:
            cout<<endl<<"-----Consulta datos de ventas------"<<endl;
            
            break;
            
            case 4:
            cout<<endl<<"-----Modificar informacion clientes------"<<endl;
            //Llamar void Expediente Clientes
           
            break;
            

         }
         break;
         
         case 3:
         system("cls");
         //Aqui para Gerentes 
         cout<<endl<<"----Gerentes----"<<endl;
         cout<<endl<<"1.Alta vehiculos"<<endl;
         cout<<endl<<"2.Dar de Alta Agentes de venta"<<endl;
         cout<<endl<<"3.Consulta datos de automoviles"<<endl;
         cout<<endl<<"4.Consulta datos de clientes"<<endl;
         cout<<endl<<"5.Consulta datos de ventas"<<endl;         
         cout<<endl<<"6.Modificar informacion automoviles"<<endl;
         cout<<endl<<"7.Modificar informacion agentes de venta"<<endl;
         cout<<endl<<"8.Modificar informacion clientes"<<endl;
         
         switch(opc){

            case 1:
            cout<<endl<<"----Alta vehiculos----"<<endl;
            
            break;

            case 2:
            cout<<endl<<"----Dar de Alta Agentes de venta----"<<endl;
            //Llamar void MaximoAgentes
            
            break;
            
            case 3:
            cout<<endl<<"----Consulta datos de automoviles----"<<endl;
            
            break;

            case 4:
            cout<<endl<<"----Consulta datos de clientes----"<<endl;
            //Repite
            
            break;
            
            case 5:
            cout<<endl<<"----Consulta datos de ventas----"<<endl;
            
            break;

            case 6:
            cout<<endl<<"----Modificar informacion automoviles----"<<endl;
            
            break;

            case 7:
            cout<<endl<<"----Modificar informacion agentes de ventas----"<<endl;
            
            break;
            
            case 8:
            cout<<endl<<"----Modificar informacion clientes----"<<endl;
            //Repite
            
            break;

         }
         break;
         
         case 4:
         system("cls");
         //Aqui para clientes
         cout<<endl<<"----Clientes----"<<endl;
         cout<<endl<<"1. Registro de clientes"<<endl;
         
         switch(opc){
            
            case 1:
            cout<<endl<<"----Registro de clientes----"<<endl;
            //Repite
           
            break;

         }
             
         break;
         
         case 5:
         //Repite Menu reportes

         system("cls");
         //Aqui para ventas
         cout<<endl<<"----Ventas----"<<endl;
         cout<<endl<<"1. Consulta de Ventas Realizadas "<<endl;
         cout<<endl<<"2. Consulta de Ventas a Credito"<<endl;
         cout<<endl<<"3. Consulta de Ventas de Contado"<<endl;
         cout<<endl<<"4. Consulta de Ventas Totales"<<endl;
         
         switch(opc){

            case 1:
            cout<<endl<<"----Consulta de Ventas Realizadas----"<<endl;
           
            break;

            case 2:
            cout<<endl<<"----Consulta de Ventas a Credito----"<<endl;
           
            break;
            
            case 3:
            cout<<endl<<"----Consulta de Ventas de Contado----"<<endl;
            
            break;

            case 4:
            cout<<endl<<"----Consulta de Ventas Totales----"<<endl;
            
            break; 
            
         }
         
         break;
         
         default:
         cout<<endl<<"Ha ocurrido un error"<<endl;

         break;  
    }
     return opc;

}

int MenuReportes(void){
    int OpcMenuReportes, flag;

    do{

    cout<<endl<<" ---MENU--- "<<endl;
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

        switch (OpcMenuReportes){
            
            case 1:
            cout<<endl<<"las ventas realizadas fueron las siguientes:  "<<endl;
            flag=getchar();
            break;

            case 2:
            cout<<endl<<"El total de ventas a credito fueron: "<<endl;
            flag=getchar();
            break;

            case 3:
            cout<<endl<<"El total de ventas de contado fueron: "<<endl;
            flag=getchar();
            break;

            case 4:
            cout<<endl<<"El total en pesos de las ventas totales es de: "<<endl;
            flag=getchar();
            break;

            case 5:
            cout<<endl<<"Perfil clientes de la agencia automotriz: "<<endl;
            flag=getchar();
            break;

            case 6:
            cout<<endl<<"Perfil agentes de ventas actuales: "<<endl;
            break;

            case 7:
            cout<<endl<<"Perfil gerentes: "<<endl;
            flag=getchar();
            break;   

            default:
            cout<<endl<<" Para salir del programa presiona la tecla 8 "<<endl;         
        }
    }while (OpcMenuReportes != 8); 

    return OpcMenuReportes;
   
}
int MenuGerenteVentas(void){
    int OpcMenuGerenteVentas;
    char PalabraMagicaGerente[]="CETI-2021";
    char PalabraMagicaIngresada[20];
    cout<<endl<<" --Gerente de Ventas-- "<<endl;
    cout<<endl<<" --Ingrese la contraseña para  obtener acceso a altas de vehiculos y agentes de venta--"<<endl;
    fflush(stdin);
    gets( PalabraMagicaIngresada);
    if(strcmp (PalabraMagicaGerente,PalabraMagicaIngresada)!=0)
    {
        int opcAltas;
        cout<<endl<<"--Acceso concedido decide la operacion a realizar"<<endl;
        cout<<endl<<"1.Realizar alta de vehiculos"<<endl;
        cout<<endl<<"2.Realizar alta de Agentes de venta"<<endl;
        cin>>opcAltas;
        cout<<"Se comprobara que exista un gerente dentro de los archivos del sistema "<<endl;
        
    }else{
        cout<<"Lo siento la contraseña ingresada no ha sido la correcta"<<endl;
    }
    return 0;

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
void ModificarEliminarInformacionCliente(){
    
  

}

void ventaCredito(){

  int opcionVentaCredito, Enganche, Precio, MontoMensualidad, NumeroVentas;
  float TotalVenta,TotalVentaDescuento;

  
  
  cout<<endl<<"quieres pagar a 12 meses o a 24 meses"<<endl;
  cin>>opcionVentaCredito;

  if(opcionVentaCredito==12){
      
    
    cout<<endl<<"Precio del carro"<<Auto->getPrecio()<<endl;
    cin>>Precio;
    Auto->setPrecio(Precio);
    Enganche=(10%Precio);
    TotalVenta=(Enganche-(Precio+7%Precio))/12;
    cout<<endl<<"Ingresa el numero de ventas a realizar"<<endl;
    cin>>NumeroVentas;
    if(NumeroVentas>2){
        
        TotalVenta*=0.10;
        TotalVentaDescuento=-TotalVenta;
    
    }

  }
  if(opcionVentaCredito==24){
      
    cout<<endl<<"Precio del carro"<<Auto->getPrecio()<<endl;
    cin>>Precio;
    Auto->setPrecio(Precio);
    Enganche=(10%Precio);
    TotalVenta=(Enganche-(Precio+12%Precio)/24);
    cout<<endl<<"Ingresa el numero de ventas a realizar"<<endl;
    cin>>NumeroVentas;
    if(NumeroVentas>2){
        
        TotalVenta*=0.10;
        TotalVentaDescuento=-TotalVenta;
    }
      
  }
  else{
    cout<<endl<<"Selecciona una opcion valida "<<endl;
  }
/**/
/*AUTOMOVILES*/
/*GERENTES*/
/*AGENTES*/
/*CLIENTES*/
}
void entradaClientes(){
    char Nombre[50];
  char Domicilios[50];
  int CodigoCliente,Telefono;

  Clientes*Clien;
  Clien=new Clientes();
  ofstream entrada;
  
  entrada.open("Clientes.dat",ios::out|ios::app|ios::binary);
  if (entrada.fail())
  {
    cout<<" Error al crear el archivo"<<endl;
    cin.get();
  }
  else{
    cout<<"Nombre:"<<endl;
    fflush(stdin);
    gets(Nombre);
    Clien->setNombreCompleto(Nombre);
    cout<<"Domicilio:"<<endl;
    fflush(stdin);
    gets(Domicilios);
    Clien->setDomicilio(Domicilios);
    cout<<"Telefono:"<<endl;
    cin>>Telefono;
    Clien->setTelefono(Telefono);

    entrada.write((char*)&Clien,sizeof(Clientes));
    entrada.close();
  }
}
void salidaClientes(){
  Clientes*Cliente;
  Cliente=new Clientes();
  ifstream salida;
  salida.open(" Clientes.dat",ios::in|ios::binary);
  if(salida.fail())
  {
    cout<<"Error al abrir el archivo"<<endl;
    cin.get();
  }
  else{
    int nreg;
    salida.seekg(0,ios::end);
    nreg=salida.tellg()/sizeof(Clientes);
    salida.seekg(0);

    for(int x=0;x<nreg;x++)
    {
      salida.read((char*)&Cliente,sizeof(Clientes));
      cout<<"Nombre :"<<Cliente->getNombreCompleto()<<endl;
      cout<<"Domicilio :"<<Cliente->getDomicilio()<<endl;
      cout<<"Telefono:"<<Cliente->getTelefono()<<endl;
      cout<<"Codigo de Cliente:"<<Cliente->getCodigoCliente()<<endl;
    }
    salida.close();
    cin.get();
  }
}

