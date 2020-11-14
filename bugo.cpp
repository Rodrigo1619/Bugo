#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string.h>
#include <string>

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
void agregarMcburger();
void consultarPedidoMB();
float sumaMB = 0;


int main (){
    bool menu = true;
    int opcion = 0;
    cout << "\t\tBienvenido a Bugo!\n";

    do {
        cout << "\t1) Nueva orden\t\t2) Revisar total\n\t3) Mostrar menu\t\t4) Despachar cliente\n\t5) Salir\n";
        cin >> opcion;
        switch (opcion){
            case 1: Mcburger(); break;
            
            case 2:
            break;
            case 3:
                cout << "\tOSO MELOSO\t\t\tMC BURGER\t\t\tEL BUEN CAFE\n";
                cout <<"\tCrepas - $3.50\t\t\tPapas Fritas - $1.00\t\tMalteadas - $2.00\n";
                cout <<"\tPie con cafe - $4.00\t\tHamburguesa - $3.50\t\tCapuccino - $2.50\n";
                cout <<"\tPastel 12 porciones - $30.00\tHamburguesa Doble - $5.00\tCafe - $1.25\n";
                cout << "\t\t\t\t\tNachos - $4.50\t\t\tBolsa de Grano de Cafe - $10.00\n";
                cout << "\t\t\t\t\tHot Kaiser - $1.25\n\n";
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
    cout<<"1) Ordenar comida\t2) Consultar pedido\t3) Salir de este menu"<<endl;  
    cout<<"Que desea realizar?"<<endl; cin>>opcionMB; cin.ignore();
    
    
    switch (opcionMB)
    {
        case 1: agregarMcburger(); break;
        case 2: consultarPedidoMB(); break;
        case 3: continuarBM = false; break;
        default: cout<<"Opcion ingresada no valida!!!!"<<endl; break;
    }
    } while (continuarBM);
}
void agregarMcburger()
{
    clienteMB unpedido;
    McBurger producto;
    
    cout<<"Ingrese el nombre de la persona ordenando:"<<endl; getline(cin,unpedido.nombre);
    cout<<"Que producto desea ordenar?: "<<endl; getline(cin, producto.nombreMB);
    cout<<"Precio del producto: "<<endl; cin>>producto.precioMB;
    listaMC.push_back(producto);
}
void consultarPedidoMB()
{
    for (int i = 0;i<listaMC.size();i++)
    {
        cout<<"Su pedido es:"<<endl;
        cout<<"PRODUCTO: "<<listaMC[i].nombreMB<<endl;
        cout<<"PRECIO: $"<<listaMC[i].precioMB<<endl;
        sumaMB = sumaMB + listaMC[i].precioMB;
    }
    cout<<"Su monto total por los pedidos es: $"<<sumaMB<<endl;
}