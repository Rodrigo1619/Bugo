#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string.h>
#include <string>
#include <time.h>

using namespace std;

/* 
Oso meloso
Crepas a $3.50
Pie/chesse cake con café a $4.00
Pastel entero, sabor al gusto del cliente a $30.00
McBurger
Orden de papas $1.00
Hamburguesa normal $3.50
Hamburguesa doble $5.00
Orden de nachos $4.50
chucho caliente  $1.25
El buen café
Malteadas $2.00
Capuccino $2.50
Café $1.25
Bolsa grande de grano de café $10.00
*/

// Oso meloso
struct productoOso
{
    string Tipo;
    float precio_unitario=0; 
};

struct pedidoOso
{
    string apellido; 
};
vector <productoOso> lista_platos;

// Prototipo de funciones en oso meloso
void  MenuOso(),AgregarCrepa(),AgregarPie(),  AgregarPastel(), Consultar();
//almacenar el precio de los platos pedidos
float sumaOso=0;

struct producto {
    string nombre;
    float precio;
};
struct McBurger 
{
    string nombreMB;
    float precioMB=0;
};

struct clienteMB
{
    string nombre;
};
vector<McBurger>listaMC;


struct cliente {
    string nombre;
    vector <producto> pedido;
    float total;
};
//prototipo de funcion y constante de suma para McBurger
void Mcburger();
void agregarpapas();
void agregarhamburguesa();
void agregarhamburguesadoble();
void agregarnachos();
void agregarhotkaiser();
void consultarPedidoMB();
float sumaMB = 0;


int main (){
    bool menu = true;
    int opcion = 0;
    cout << "\t\tBienvenido a Bugo!\n";

    do {
        cout<<"\tEste es nuestro menu para ti: "<<endl;
        cout<<endl;
        cout << "\tOSO MELOSO\t\t\tMC BURGER\t\t\tEL BUEN CAFE\n";
                cout <<"\tCrepas - $3.50\t\t\tPapas Fritas - $1.00\t\tMalteadas - $2.00\n";
                cout <<"\tPie con cafe - $4.00\t\tHamburguesa - $3.50\t\tCapuccino - $2.50\n";
                cout <<"\tPastel 12 porciones - $30.00\tHamburguesa Doble - $5.00\tCafe - $1.25\n";
                cout << "\t\t\t\t\tNachos - $4.50\t\t\tBolsa de Grano de Cafe - $10.00\n";
                cout << "\t\t\t\t\tHot Kaiser - $1.25\n\n";
                
        cout << "\t1) Ordenar con McBurger\t\t2) Ordenar con Oso meloso\n\t3) Ordenar con El buen cafe\t\t4) Despachar cliente\n\t5) Salir\n";
        cout<<"\tOpcion a elegir: "<<endl;
        cin >> opcion;
        switch (opcion){
            case 1: Mcburger(); break;
            
            case 2: MenuOso();
            break;
            case 3:
            
            break;
            case 4:
            break;
            case 5:
                menu = false;
            break;
            default:
            break;
        }
    } while (menu == true);

}

//definiendo la funcion de McBurger
void Mcburger()
{
    int opcionMB = 0;
    bool continuarBM = true;
    cout<<"\t\t------BIENVENIDO A MCBURGER------"<<endl<<endl;
    cout<<"\t\t------MENU DE MCBURGER------"<<endl;
    cout<<"\t1)Papas fritas - $1.00\t\t2)Hamburguesa - $3.50\n\t3)Hamburguesa doble - $5.00\t4)Nachos - $4.50\n\t5)Hot Kaiser - $1.25\n\n ";

    do
    {
    cout<<"1) Ordenar Papas fritas\t 2) Ordenar hamburguesa normal\t 3)Ordenar hamburguesa doble"<<endl;
    cout<<"4) Ordenar Nachos\t\t 5)Ordenar hot kaiser \t\t6)Consultar su orden"<<endl;
    cout<<"7) Salir de este menu"<<endl;  
    cout<<"Que desea realizar?"<<endl; cin>>opcionMB; cin.ignore();
    
    switch (opcionMB)
    {
        case 1: agregarpapas(); break;
        case 2: agregarhamburguesa(); break;
        case 3: agregarhamburguesadoble(); break;
        case 4: agregarnachos(); break;
        case 5: agregarhotkaiser(); break;
        case 6: consultarPedidoMB(); break;
        case 7 : continuarBM = false; break;
        default: cout<<"Opcion ingresada no valida!!!!"<<endl; break;
    }
    } while (continuarBM);
}
void agregarpapas()
{
    clienteMB pedidopapas;
    McBurger papas;

    cout<<"Ingrese el nombre de la persona que esta ordenando: "<<endl; getline(cin,pedidopapas.nombre);
    papas.nombreMB = "Papas fritas";
    papas.precioMB = 1.00; cin.ignore();
    listaMC.push_back(papas);
}
void agregarhamburguesa()
{
    clienteMB pedidohamburguesa;
    McBurger hamburguesa;

    cout<<"Ingrese el nombre de la persona que esta ordenando: "<<endl; getline(cin,pedidohamburguesa.nombre);
    hamburguesa.nombreMB = "Hamburguesa";
    hamburguesa.precioMB = 3.50; cin.ignore();
    listaMC.push_back(hamburguesa);
}
void agregarhamburguesadoble()
{
    clienteMB pedidohamburguesadoble;
    McBurger hamburguesadoble;

    cout<<"Ingrese el nombre de la persona que esta ordenando: "<<endl; getline(cin,pedidohamburguesadoble.nombre);
    hamburguesadoble.nombreMB = "Hamburguesa doble";
    hamburguesadoble.precioMB = 5.00; cin.ignore();
    listaMC.push_back(hamburguesadoble);
}
void agregarnachos()
{
    clienteMB pedidonachos;
    McBurger nachos;

    cout<<"Ingrese el nombre de la persona que esta ordenando: "<<endl; getline(cin,pedidonachos.nombre);
    nachos.nombreMB = "Nachos";
    nachos.precioMB = 4.50; cin.ignore();
    listaMC.push_back(nachos);
}
void agregarhotkaiser()
{
    clienteMB pedidohotkaiser;
    McBurger hotkaiser;

    cout<<"Ingrese el nombre de la persona que esta ordenando: "<<endl; getline(cin,pedidohotkaiser.nombre);
    hotkaiser.nombreMB = "Hot kaiser";
    hotkaiser.precioMB = 1.25; cin.ignore();
    listaMC.push_back(hotkaiser);
}
void consultarPedidoMB()
{
    for (int i = 0;i<listaMC.size();i++)
    {
        cout<<"\t\tSu pedido es:"<<endl;
        cout<<"\t\tPRODUCTO: "<<listaMC[i].nombreMB<<endl;
        cout<<"\t\tPRECIO: $"<<listaMC[i].precioMB<<endl;
        sumaMB = sumaMB + listaMC[i].precioMB;
    }
    cout<<"Su monto total por los pedidos es: $"<<sumaMB<<endl;
    cout<<"Muchas gracias por preferirnos :D"<<endl<<endl;
}

//codigo fuente de Oso meloso
void MenuOso()
{
    bool continuar = true;
    int opcion = 0;
    do
    {
        cout<<endl;
        cout<<"\t \t \t \t -- OSO MELOSO -- \t \t \t \t"<<endl;
         cout<<"Bienvenido!, que vas a llevar?: "<<endl;
        cout<<"1) Crepas - $3.50"<<endl;
        cout<<"2) Pie con cafe - $4.00"<<endl;
        cout<<"3) Pastel 12 porciones - $30.00"<<endl;
        cout<<"4) Procesar pedido."<<endl;
        cout<<"5) Salir."<<endl;
        cout<<"Opcion."<<endl; 
        cin>>opcion; 
        cin.ignore();

        switch (opcion)
        {
        case 1: AgregarCrepa(); break;
        case 2: AgregarPie(); break;
        case 3: AgregarPastel(); break;
        case 4: Consultar(); break;
        case 5: continuar = false; break;
        default: cout<<"Opcion ingresada no valida"<<endl; break; 
        }
    } while (continuar);
}
void AgregarCrepa()
{
   pedidoOso pedido;
    productoOso Plato;
    
    cout<<endl;
    cout<<"Cual es tu apellido?: "<<endl; getline(cin, pedido.apellido);
    cout<<endl;
   Plato.Tipo = "Crepas";
   Plato.precio_unitario = 3.50;
    
    cin.ignore();
    lista_platos.insert(lista_platos.end(), Plato);
}


void AgregarPie()
{
     pedidoOso pedido;
    productoOso Plato;
    
    cout<<endl;
    cout<<"Cual es tu apellido?: "<<endl; getline(cin, pedido.apellido);
    cout<<endl;
   Plato.Tipo = "Pie con cafe";
   Plato.precio_unitario = 4.00;
    
    cin.ignore();
    lista_platos.insert(lista_platos.end(), Plato);
}



void AgregarPastel()
{
     pedidoOso pedido;
    productoOso Plato;
    
    cout<<endl;
    cout<<"Cual es tu apellido?: "<<endl; getline(cin, pedido.apellido);
    cout<<endl;
   Plato.Tipo = "Pastel";
   Plato.precio_unitario = 30.00;
    
    cin.ignore();
    lista_platos.insert(lista_platos.end(), Plato);
}

void Consultar()
{
    time_t t = time(NULL);
	struct tm *tiempo = localtime(&t);
	
    pedidoOso pedido;
    cout<<endl;
    cout<<"Su pedido: "<<endl;
    cout<<endl;
    cout<<"Fecha: "<< tiempo->tm_mday<<"/"<<tiempo->tm_mon+1<<"/"<<tiempo->tm_year+1900<<endl;
    cout<<"Hora Local: "<<  tiempo->tm_hour<<":"<<tiempo->tm_min<<":"<<  tiempo->tm_sec << endl;
    
    cout<<"---------------------------------------------------------------------"<<endl;
    for (int i = 0; i<lista_platos.size(); i++)
    {
        cout<< "Producto: " <<lista_platos[i].Tipo<<endl;
        cout<< "Costo: $ "<<lista_platos[i].precio_unitario<<endl;
        
        sumaOso = sumaOso + lista_platos[i].precio_unitario;
    }
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"precio total a pagar: $ "<<sumaOso<<endl;
 
}