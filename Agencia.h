#include<iostream>
#include<string.h>
#include<fstream>
#include<math.h>


class Automoviles{
  char Marca[50],Modelo[50],Tipo[50];      //variables de la clase 
  int Numero_de_Serie,Anio,Precio;

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
void getPrecio(int);
int setPrecio();

//Get
private:

};


class Agentes_de_Venta{
int CodigoAgente,Edad;         //Variables de la clase 
float Sueldo,Comisiones;
char Nombre[50],Apellido[50];

public:
Agentes_de_Venta(int x):CodigoAgente(x){}
    Agentes_de_Venta();
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

private:
    
};
//Hacer una clase padre llamada persona de las cuales gerentes y agentes  hereden nombre y  edad



class Gerentes{
  int CodigoGerente,Edad;         //Variables de la clase
  float Sueldo;
  char Nombre[50],Apellido[50];

public:

    Gerentes();
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
    
    private:
    
};


class Ventas:public Agentes_de_Venta{
  int NumeroFolio,CantidadAutomovilesVendidos,VentaTotal;  //variables de la clase 

char TipoVenta;
  public:
    Ventas();
    Ventas(int CodigoAgente):Agentes_de_Venta(CodigoAgente){}
    void setNumeroFolio(int);
    int getNumeroFolio();
    void setCantidadAutomovilesVendidos(int*);
    int getCantidadAutomovilesVendidos();
    void setVentaTotal(int*);
    int getVentaTotal();

    
private:
    ~Ventas();
};

/* METODOSS */

/*Automoviles*/
Automoviles::Automoviles(){
    
}
Automoviles::~Automoviles(){
    cout<<endl<< "Sabemos que es poco pero es trabajo honesto... -Automoviles-"<<endl;
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
void Automoviles::getPrecio(int Precio){
  this->Precio,Precio;

}
int Automoviles::setPrecio(){
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
  this->CodigoAgente,CodigoAgente;
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


/*Ventas*/
Ventas::Ventas(){

}
Ventas::~Ventas(){
    cout<<endl<< "-Ventas-"<<endl;
}

