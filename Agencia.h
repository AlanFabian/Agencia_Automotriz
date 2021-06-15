#include<iostream>
#include<string.h>
#include<fstream>
#include<math.h>
#include<fstream>
#include<stdio.h>
#include<math.h>

#define getch()_getch()
//Archivos Automoviles 


using namespace std;

//Clase Padre Agentes de venta,Clientes 
/*
class Personas{
  private:
    char Nombre[40], Apellido[40],Codigo[40];       //variables de la clase 
    int Edad;
    
public:
    Personas();
    ~Personas();
    void setNombre(char *);
    char * getNombre();
    void setApellido(char *);
    char * getApellido();
    void setEdad(int);
    int getEdad();
};
*/

class Automoviles{
 
public:
//Constructores
  Automoviles();
  

//Destructor
  ~Automoviles();

//Set
void setMarca(char*);
char*getMarca();
void setModelo(char*);
char*getModelo();
void setTipo(char*);
char*getTipo();
void setNumero_de_Serie(int);
int getNumero_de_Serie();
void setAnio(int);
int getAnio();
void setPrecio(int);
int getPrecio();
//Archivos binarios
void entradasAutomoviles();
void salidasAutomoviles();
void modificarAutomoviles();
void eliminarAutomoviles();


private:
char Marca[50],Modelo[50],Tipo[50];      //variables de la clase 
  int Numero_de_Serie,Anio,Precio;

};


class Agentes_de_Venta{
  private:
int CodigoAgente,Edad;         //Variables de la clase 
float Sueldo,Comisiones;
char Nombre[50],Apellido[50];

public:
//Agentes_de_Venta(int x):CodigoAgente(x){}
    Agentes_de_Venta();
    Agentes_de_Venta(char Nombre[40],char Apellido[40],int Edad,char Codigo[40]);
    ~Agentes_de_Venta();

    //Funciones Clase 
     void setNombre(char*);
     char*getNombre();
     void setApellido(char*);
     char*getApellido();
     void setEdad(int);
     int getEdad();
     void setCodigoAgente(int);
     int getCodigoAgente();
     void setSueldo(float);
     float getSueldo();
     void setComisiones(float);
     float getComisiones();
     //Archivo binario
     void entradaAgentes_de_Venta();
     void salidasAgentes_de_Venta();
     void eliminarAgentes_de_Venta();
     void modificarAgentes_de_Venta();


    
};
//Hacer una clase padre llamada persona de las cuales gerentes y agentes  hereden nombre y  edad



class Gerentes{
  int CodigoGerente,Edad;         //Variables de la clase
  float Sueldo;
  char Nombre[50],Apellido[50];

public:

    Gerentes();
    Gerentes(char Nombre[40],char Apellido[40],int Edad,char Codigo[40]);
    ~Gerentes();
    void setNombre(char*);
    char*getNombre();
    void setApellido(char*);
    char*getApellido();
    void setEdad(int);
    int getEdad();
    void setSueldo(float);
    float getSueldo();
    void setCodigoGerente(int);
    int getCodigoGerente();

private:
    
};


class Clientes{
    int CodigoCliente,Telefono;        //variables de la clase 
    char NombreCompleto[50],Domicilio[50];
    
    public:
    Clientes();
    ~Clientes();
    
    void setNombreCompleto(char*);
    char*getNombreCompleto();
    void setDomicilio(char*);
    char*getDomicilio();
    void setTelefono(int);
    int getTelefono();
    void setCodigoCliente(int);
    int getCodigoCliente();
    /////
    void entradaClientes();
    void salidaClientes();
    private:
    
};


class Ventas:public Agentes_de_Venta{
  int NumeroFolio,CantidadAutomovilesVendidos,VentaTotal,Numero_de_Serie,CodigoAgentedeVenta;  //variables de la clase 

char *TipoVenta;
  public:
    Ventas();
    ~Ventas();

    //Ventas(int CodigoAgente):Agentes_de_Venta(CodigoAgente){}
    void setNumeroFolio(int);
    int getNumeroFolio();
    void setCantidadAutomovilesVendidos(int);
    int getCantidadAutomovilesVendidos();
    void setVentaTotal(int);
    int getVentaTotal();
    void entradaVentas();
    void setNumero_de_Serie(int);
    int getNumero_de_Serie();
    void setCodigoAgentedeVenta(int);
    int getCodigoAgentedeVenta();
    void setTipoVenta(char*);
    char*getTipoVenta();
    void salidasVentas();
  
    


    
private:
    
};

/* METODOS */

/*Automoviles*/
Automoviles::Automoviles(){
  //Inicializacion por defecto en blanco con constructor 
  strcpy(Marca,"Vacio");
  strcpy(Modelo,"Vacio");
  strcpy(Tipo,"Vacio");
  Numero_de_Serie=0;
  Anio=0;
  Precio=0;

}
Automoviles::~Automoviles(){
    cout<<endl<<"-Automoviles-"<<endl;
}
void Automoviles::setMarca(char*Marca){
  strcpy(this->Marca,Marca);

}
char*Automoviles::getMarca(){
  return Marca;
}
void Automoviles::setModelo(char*Modelo){
  strcpy(this->Modelo,Modelo);
}
char*Automoviles::getModelo(){
 return Modelo;
}
void Automoviles::setTipo(char*Tipo){
  strcpy(this->Tipo,Tipo);
}
char*Automoviles::getTipo(){
  return Tipo;
}
void Automoviles::setNumero_de_Serie(int Numero_de_Serie){
  this->Numero_de_Serie=Numero_de_Serie;
}
int Automoviles::getNumero_de_Serie(){
  return Numero_de_Serie;
}
void Automoviles::setAnio(int Anio){
  this->Anio=Anio;
}
int Automoviles::getAnio(){
  return Anio;
}
void Automoviles::setPrecio(int Precio){
  this->Precio=Precio;

}
int Automoviles::getPrecio(){
  return Precio;
}



/*Agentes de Venta*/
Agentes_de_Venta::Agentes_de_Venta(){
    
}
Agentes_de_Venta::~Agentes_de_Venta(){
    cout<<endl<< " -Agentes de Venta-"<<endl;
}
void Agentes_de_Venta::setNombre(char*Nombre){
  strcpy(this->Nombre,Nombre);
}
char*Agentes_de_Venta::getNombre(){
  return Nombre;

}
void Agentes_de_Venta::setApellido(char*Apellido){
  strcpy(this->Apellido,Apellido);
}
char*Agentes_de_Venta::getApellido(){
  return Apellido;
}
void Agentes_de_Venta::setEdad(int Edad){
  this->Edad=Edad;

}
int Agentes_de_Venta::getEdad(){
  return Edad;
}
void Agentes_de_Venta::setCodigoAgente(int CodigoAgente){
  this->CodigoAgente=CodigoAgente;
}
int Agentes_de_Venta::getCodigoAgente(){
  return CodigoAgente;
}
void Agentes_de_Venta::setSueldo(float Sueldo){
  this->Sueldo=Sueldo;

}
float Agentes_de_Venta::getSueldo(){
  return Sueldo;
}
void Agentes_de_Venta::setComisiones(float Comisiones){
  this->Comisiones=Comisiones;
}
float Agentes_de_Venta::getComisiones(){
  return Comisiones;
}




/*Gerentes*/
Gerentes::Gerentes(){

}
Gerentes::~Gerentes(){
    cout<<endl<< " -Gerentes-"<<endl;
}
void Gerentes::setNombre(char*Nombre){
  strcpy(this->Nombre,Nombre);
}
char*Gerentes::getNombre(){
  return Nombre;
}
void Gerentes::setApellido(char*Apellido){
  strcpy(this->Apellido,Apellido);
}
char*Gerentes::getApellido(){
  return Apellido;
}
void Gerentes::setEdad(int Edad){
 this->Edad=Edad;
}
int Gerentes::getEdad(){
  return Edad;
}
void Gerentes::setSueldo(float Sueldo){
  this->Sueldo=Sueldo;
}
float Gerentes::getSueldo(){
  return Sueldo;
}
void Gerentes::setCodigoGerente(int CodigoGerente){
  this->CodigoGerente=CodigoGerente;

}
int Gerentes::getCodigoGerente(){
  return CodigoGerente;
}


/*Clientes*/
Clientes::Clientes(){

}
Clientes::~Clientes(){
    cout<<endl<< "-Clientes-"<<endl;
}
void Clientes::setNombreCompleto(char*NombreCompleto){
  strcpy(this->NombreCompleto,NombreCompleto);
}
char*Clientes::getNombreCompleto(){
  return NombreCompleto;
}
void Clientes::setDomicilio(char*Domicilio){
  strcpy(this->Domicilio,Domicilio);
}
char*Clientes::getDomicilio(){
  return Domicilio;
}
void Clientes::setTelefono(int Telefono){
  this->Telefono=Telefono;
}
int Clientes::getTelefono(){
  return Telefono;
}
void Clientes::setCodigoCliente(int CodigoCliente){
  this->CodigoCliente=CodigoCliente;
}
int Clientes::getCodigoCliente(){
  return CodigoCliente;
}
void Clientes::entradaClientes(){
  int codigoCliente,Telefono;
char NombreCompleto[50],Domicilio[50];

}


/*Ventas*/
Ventas::Ventas(){

}
Ventas::~Ventas(){
    cout<<endl<< "-Ventas-"<<endl;
}
void Ventas::setNumeroFolio(int NumeroFolio){
    this->NumeroFolio = NumeroFolio;
  }
  
  int Ventas::getNumeroFolio(){
    return NumeroFolio;
  }
  
  void Ventas::setCantidadAutomovilesVendidos(int CantidadAutomovilesVendidos){
    this->CantidadAutomovilesVendidos = CantidadAutomovilesVendidos;
  }
  
  int Ventas::getCantidadAutomovilesVendidos(){
    return CantidadAutomovilesVendidos;
  }
  
  void Ventas::setVentaTotal(int VentaTotal){
    this->VentaTotal = VentaTotal;
  }
  
  int Ventas::getVentaTotal(){
      return VentaTotal;
  }
  void Ventas::setNumero_de_Serie(int Numero_de_Serie){
    this->Numero_de_Serie = Numero_de_Serie;
  }
  int Ventas::getNumero_de_Serie(){
    return Numero_de_Serie;

  }
  
  
  void Ventas::setTipoVenta(char* TipoVenta){
      strcpy(this->TipoVenta, TipoVenta);
  }
  
  char * Ventas::getTipoVenta(){
      return TipoVenta;
  }










void Automoviles::eliminarAutomoviles(){
  Automoviles*Auto;
  Auto=new Automoviles();
  ofstream entrada;

  entrada.open("temp.dat",ios::out|ios::binary);

  ifstream salida;

  salida.open("Automoviles.dat",ios::out|ios::binary);
  if(salida.fail()||entrada.fail())
  {
    cout<<"Error al abrir el archivo"<<endl;
    cin.get();
  }else{
    int nreg;
    char ntem[20];
    //cambiar a codigo para ser mas especifico 
    cout<<"Introduce el modelo del coche a eliminar"<<endl;
    cin>>ntem;

    salida.seekg(0,ios::end);
    nreg=salida.tellg()/sizeof(Automoviles);
    salida.seekg(0);

    for(int x=0;x<nreg;x++){
      salida.read((char*)&*Auto,sizeof(Automoviles));
      if(strcmp(Auto->getModelo(),ntem)==0){
        cout<<"registro borrado"<<endl;
      }else{
        entrada.write((char*)&*Auto,sizeof(Automoviles));

      }

    }
    salida.close();
    entrada.close();
    remove("Automoviles.dat");
    rename("temp.dat","Automoviles.dat");
    cin.get();
  }

}

/*
void Automoviles::modificaAutomoviles(){
  Automoviles*Auto;
  Auto=new Automoviles();
  ofstream entrada;
  entrada.open("temp.dat",ios::out|ios::binary);
  ifstream salida;
  salida.open("Automoviles.dat",ios::in|ios::binary);
  if(salida.fail()||entrada.fail()){
    cout<<"Error al abrir el archivo"<<endl;
    cin.get();
  }
  else{
    int nreg;
    char ntem[30];
    cout<< "introduce el numero de serie del carro a modificar"<<endl;
    cin>>ntem;

    salida.seekg(0,ios::end);
    nreg=salida.tellg()/sizeof(Automoviles);
    salida.seekg(0);
    for(int x=0;x<nreg;x++)
    {
      salida.read((char*)&*Auto,sizeof(Automoviles));
      if(strcmp(Auto->getMarca(),ntem)==0){
        cout<<"Introduzca nueva Marca"<<endl;
        cin>>Auto->getMarca();
        cout<<"Introduzca nuevo Modelo"<<endl;
        cin>>Auto->getModelo();
        cout<<"Introduzca  nuevo Tipo"<<endl;
        cin>>Auto->getTipo();
        cout<<"Introduzca Nuevo año"<<endl;
        cin>>Auto->getAnio();
        cout<<"Introduzca nuevo Precio"<<endl;
        cin>>Auto->getPrecio();
        cout<<"Introduzca nuevo Numero de serie"<<endl;
        cin>>Auto->getNumero_de_Serie();
        cout<<"Registro modifica"<<endl;

      }
      entrada.write((char*)&*Auto,sizeof(Automoviles));
    }
    salida.close();
    entrada.close();
    remove("Automoviles.dat");
    rename("temp.dat","Automoviles.dat");
    cin.get();
  }
}
*/


//Archivos Binarios 
/*
void Ventas::entradaVentas(){
  int NumeroFolio,CantidadAutomovilesVendidos,VentaTotal,Numero_de_Serie,CodigoAgentedeVenta;
  char*TipoVenta;
 
  Ventas*Vent;
  Vent=new Ventas();
  ofstream entrada;

  entrada.open("Ventas.dat",ios::out|ios::app|ios::binary);
  if (entrada.fail())
  {
    cout<<" Error al crear el archivo"<<endl;
    cin.get();
  }
  else{
    cout<<"Numero Folio:"<<endl;
    cin>>NumeroFolio;
    Vent->setNumeroFolio(NumeroFolio);
    cout<<"CantidadAutomovilesVendidos :"<<endl;
    cin>>CantidadAutomovilesVendidos;
    Vent->setCantidadAutomovilesVendidos(CantidadAutomovilesVendidos);
    cout<<"VentaTotal :"<<endl;
    cin>>VentaTotal;
    Vent->setVentaTotal(VentaTotal);
    cout<<"Numero de serie: "<<endl;
    cin>>Numero_de_Serie;
    Vent->setNumero_de_Serie(Numero_de_Serie);
    cout<<"CodigoAgentedeVenta "<<endl;
    cin>>CodigoAgentedeVenta;
    Vent->setCodigoAgentedeVenta(CodigoAgentedeVenta);
    cout<<"Tipo de venta(Contado o Credito) :"<<endl;
    cin>>TipoVenta;
    Vent->setTipoVenta(TipoVenta);
    
    entrada.write((char*)&Vent,sizeof(Ventas));
    entrada.close();

  }
  
}
*/

void Ventas::salidasVentas(){
  Ventas*Vent;
  Vent=new Ventas();
  ifstream salida;
  salida.open(" Ventas.dat",ios::in|ios::binary);
  if(salida.fail())
  {
    cout<<"Error al abrir el archivo"<<endl;
    cin.get();
  }
  else{
    int nreg;
    salida.seekg(0,ios::end);
    nreg=salida.tellg()/sizeof(Automoviles);
    salida.seekg(0);

    for(int x=0;x<nreg;x++)
    {
      salida.read((char*)&Vent,sizeof(Ventas));
      cout<<"Numero de folio :"<<Vent->getNumeroFolio()<<endl;
      cout<<"Cantidad de Automoviles vendidos:"<<Vent->getCantidadAutomovilesVendidos()<<endl;
      cout<<"Venta Total :"<<Vent->getVentaTotal()<<endl;
      cout<<"Numero de Serie:"<<Vent->getNumero_de_Serie()<<endl;
      cout<<"Codigo Agente:"<<Vent->getCodigoAgente()<<endl;
      cout<<"Tipo de Venta:"<<Vent->getTipoVenta()<<endl;
      
    }
    salida.close();
    cin.get();
  }
}


//Agentes de venta 
void Agentes_de_Venta::entradaAgentes_de_Venta()
{
  char Nombre[50];
  char Apellido[50];
  int CodigoAgente,Edad;
  float Sueldo,Comisiones;
  Agentes_de_Venta*Agente;
  Agente=new Agentes_de_Venta();
  ofstream entrada;
  
  entrada.open("Agentes_de_Venta.dat",ios::out|ios::app|ios::binary);
  if (entrada.fail())
  {
    cout<<" Error al crear el archivo"<<endl;
    cin.get();
  }
  else{
    cout<<"Nombre:"<<endl;
    fflush(stdin);
    gets(Nombre);
    Agente->setNombre(Nombre);
    cout<<"Apellido:"<<endl;
    fflush(stdin);
    gets(Apellido);
    Agente->setApellido(Apellido);
    cout<<"Codigo Agente:"<<endl;
    cin>>CodigoAgente;
    Agente->setCodigoAgente(CodigoAgente);
    cout<<"Edad:"<<endl;
    cin>>Edad;
    Agente->setEdad(Edad);
    cout<<"Sueldo:"<<endl;
    cin>>Sueldo;
    Agente->setSueldo(Sueldo);
     cout<<"Comisiones:"<<endl;
    cin>>Comisiones;
    Agente->setComisiones(Comisiones);

    entrada.write((char*)&Agente,sizeof(Automoviles));
    entrada.close();
  }


}


void Agentes_de_Venta::salidasAgentes_de_Venta()
{
  Agentes_de_Venta*Agente;
  Agente=new Agentes_de_Venta();
  ifstream salida;
  salida.open("Agentes.dat",ios::in|ios::binary);
  if (salida.fail())
  {
    cout<<"Error al abrir el archivo"<<endl;
    cin.get();
  }else{
    int  nreg;
    salida.seekg(0,ios::end);
    nreg=salida.tellg()/sizeof(Agente);
    salida.seekg(0);
    for (int x = 0; x < nreg; x++)
    {
      salida.read((char*)&Agente,sizeof(Agentes_de_Venta));
      cout<<"Nombre :"<<Agente->getNombre()<<endl;
      cout<<"Apellido:"<<Agente->getApellido()<<endl;
      cout<<"Codigo Agente: "<<Agente->getCodigoAgente()<<endl;
      cout<<"Edad:"<<Agente->getEdad()<<endl;
      cout<<"Sueldo"<<Agente->getSueldo()<<endl;
      cout<<"Comisiones"<<Agente->getComisiones()<<endl;


    }
    salida.close();
    cin.get();
   
    
  }
}


void Agentes_de_Venta::eliminarAgentes_de_Venta(){
  Agentes_de_Venta*Agente;
  Agente=new Agentes_de_Venta();
  ofstream entrada;
  entrada.open("temp.dat",ios::out|ios::binary);

  ifstream salida;

  salida.open("Agentes.dat",ios::out|ios::binary);
  if(salida.fail()||entrada.fail())
  {
    cout<<"Error al abrir el archivo"<<endl;
    cin.get();
  }else{
    int nreg;
    char ntem[20];
    //cambiar a codigo para ser mas especifico 
    cout<<"Introduce el Nombre del agente de venta a eliminar "<<endl;
    cin>>ntem;

    salida.seekg(0,ios::end);
    nreg=salida.tellg()/sizeof(Automoviles);
    salida.seekg(0);

    for(int x=0;x<nreg;x++){
      salida.read((char*)&*Agente,sizeof(Agentes_de_Venta));
      if(strcmp(Agente->getNombre(),ntem)==0){
        cout<<"registro borrado"<<endl;
      }else{
        entrada.write((char*)&*Agente,sizeof(Agentes_de_Venta));

      }

    }
    salida.close();
    entrada.close();
    remove("Agente de ventas.dat");
    rename("temp.dat","Agente de ventas.dat");
    cin.get();
  }

}

/*

void Agentes_de_Venta::modificarAgentes_de_Venta(){
  Agentes_de_Venta*Agente;
  Agente=new Agentes_de_Venta();
  ofstream entrada;
  entrada.open("temp.dat",ios::out|ios::binary);

  ifstream salida;
  salida.open("Agentes.dat",ios::in|ios::binary);
   
   if (salida.fail()||entrada.fail())
   {
     cout<<"Error al abrir el archivo"<<endl;
     cin.get();

   }else{
     int nreg;
     char ntem[20];
     cout<<"Introduce el nombre del agente de vetnas a modificar"<<endl;
     fflush(stdin);
     gets(ntem);

     salida.seekg(0,ios::end);
     nreg=salida.tellg()/sizeof(Agentes_de_Venta);
     salida.seekg(0);

     for(int x=0;x<nreg;x++){
       salida.read((char*)&*Agente,sizeof(Agentes_de_Venta));
       if(strcmp(Agente->getNombre(),ntem)==0)
       {
         cout<<"Introduce nuevo nombre"<<endl;
         cin>>Agente->getNombre();
         cout<<"Introduce el codigo del agente"<<endl;
         cin>>Agente->getCodigoAgente();
         cout<<"Introduce el apellido del agente"<<endl;
         cin>>Agente->getApellido();
         cout<<"Introduce la edad del agente de ventas"<<endl;
         cout<<"Introduce el sueldo del agente "<<endl;
         cout<<"Introduce las comisiones del agente"<<endl;
         
         cout<<"Registro modificado de manera exitosa"<<endl;
       }
       entrada.write((char*)&*Agente,sizeof(Agentes_de_Venta));
     }
     salida.close();
     entrada.close();
     remove("Agente.dat");
     rename("temp.dat","Agente.dat");

     cin.get();
   }

}   
  */
 





