// LenguajeEmsablador.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int seleccion = 0;
    short numero1 = 0, numero2 = 0;
    short resultado;

    cout << "Ingrese un numero de la lista \n";
    cout << "\n1) ---SUMA \n";
    cout << "2) ---RESTA \n";
    cout << "3) ---MULTIPLICACION \n";
    cin >> seleccion;


    switch (seleccion)
    {
    case 1: cout << "\n Usted ha seleccionado la opcion 1: SUMA \n";
        cout << "Ingrese el primer valor: \n";   cin >> numero1;
        cout << "Ingrese el segundo valor: \n";   cin >> numero2;
        _asm
        {    //
            mov ax, numero1;
            mov bx, numero2;
            add ax, bx;
            mov resultado, ax;
        }
        printf(" El resultado obtenido es  %d", resultado);

        break;

    case 2: cout << "\n Usted ha seleccionado la opcion 2: RESTA \n";
        cout << "Ingrese el primer valor: \n";   cin >> numero1;
        cout << "Ingrese el segundo valor: \n";   cin >> numero2;
        _asm
        {
            mov ax, numero1;
            mov bx, numero2;
            sub ax, bx;
            mov resultado, ax;
        }
        printf(" El resultado obtenido es  %d", resultado);

        break;

    case 3: cout << " Usted ha seleccionado la opcion 3 Multiplicacion ";
        cout << "Ingrese el primer valor: \n";   cin >> numero1;
        cout << "Ingrese el segundo valor: \n";   cin >> numero2;
        _asm
        {
            mov ax, numero1;
            mov bx, numero2;
            mul bx;
            mov resultado, ax;
        }
        printf(" El resultado obtenido es  %d", resultado);

        break;
    }
    
}