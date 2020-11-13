#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string.h>

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

struct cliente {
    string nombre;
    vector <producto> pedido;
    float total;
};

void ShowMenu();

int main (){
    bool menu = true;
    int opcion = 0;
    cout << "\t\tBienvenido a Bugo!\n";

    do {
        cout << "\t1) Nueva orden\t\t2) Revisar total\n\t3) Mostrar menu\t\t4) Despachar cliente\n\t5) Salir\n";
        cin >> opcion;
        switch (opcion){
            case 1:
            break;
            case 2:
            break;
            case 3:
                ShowMenu();
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

void ShowMenu(){
    cout << "\tOSO MELOSO\t\t\tMC BURGER\t\t\tEL BUEN CAFE\n";
    cout <<"\tCrepas - $3.50\t\t\tPapas Fritas - $1.00\t\tMalteadas - $2.00\n";
    cout <<"\tPie con cafe - $4.00\t\tHamburguesa - $3.50\t\tCapuccino - $2.50\n";
    cout <<"\tPastel 12 porciones - $30.00\tHamburguesa Doble - $5.00\tCafe - $1.25\n";
    cout << "\t\t\t\t\tNachos - $4.50\t\t\tBolsa de Grano de Cafe - $10.00\n";
    cout << "\t\t\t\t\tHot Kaiser - $1.25\n\n";
}