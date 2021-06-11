#include<iostream>
#include<string.h>
#include<fstream>
#include<math.h>


class Automoviles{
  char Marca[50],Modelo[50],Tipo;      //variables de la clase 
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
void setNumero_de_Serie(int*);
int getNumero_de_Serie();
void setAnio(int*);
int getAnio();
void getPrecio(int*);
int setPrecio();

//Get
private:

};


class Agentes_de_Venta{
int CodigoAgente,Edad;         //Variables de la clase 
float Sueldo,Comisiones;
char Nombre,Apellido;

public:
Agentes_de_Venta(int x):CodigoAgente(x){}
    Agentes_de_Venta();
    ~Agentes_de_Venta();

    //Funciones Clase 
     void setNombre(char*);
     char*getNombre();
     void setApellido(char*);
     char*getApellido();
     void setEdad();
     int getEdad();
     void setCodigoAgente(float*);
     float*getCodigoAgente();
     void setSueldo(int*);
     int getSueldo();
     void setComisiones(int*);
     int getComisiones();

private:
    
};
//Hacer una clase padre llamada persona de las cuales gerentes y agentes  hereden nombre y  edad



class Gerentes{
  int CodigoGerente,Edad;         //Variables de la clase
  float Sueldo;
  char Nombre;

public:

    Gerentes();
    void setNombre(char*);
    char*getNombre();
    void setApellido(char*);
    char*getApellido();
    void setEdad(int*);
    int*getEdad();
    void setSueldo(float*);
    float*getSueldo();
    void setCodigoGerente(int*);
    int*getCodigoGerente();

private:
    ~Gerentes();
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
    void setTelefono(int*);
    int*getTelefono();
    void setCodigoCliente(int*);
    int*getCodigoCliente();
    
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

/*OPERACIONES DE LOS OBJETOS */

/*Automoviles*/
Automoviles::Automoviles(){
    
}
Automoviles::~Automoviles(){
    cout<<endl<< "Sabemos que es poco pero es trabajo honesto... -Automoviles-";
}

/*Agentes de Venta*/
Agentes_de_Venta::Agentes_de_Venta(){
    
}
Agentes_de_Venta::~Agentes_de_Venta(){
    cout<<endl<< "Pasenos profe :( ... -Agentes de Venta-"<<endl;
}

/*Gerentes*/
Gerentes::Gerentes(){

}
Gerentes::~Gerentes(){
    cout<<endl<< "En verdad le hechamos ganas... -Gerentes-"<<endl;
}

/*Clientes*/
Clientes::Clientes(){

}
Clientes::~Clientes(){
    cout<<endl<< "Le invitamos una chevezona... -Clientes-"<<endl;
}


/*Ventas*/
Ventas::Ventas(){

}
Ventas::~Ventas(){
    cout<<endl<< "Es broma, pero si quiere no es broma... -Ventas-"<<endl;
}

