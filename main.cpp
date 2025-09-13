/*
Laboratorio 3: Tres Numeros Aleatorios
Nombre: Maria A. Nieves Rivera
Num. Est: 801-19-5581
Colaboraciones:
- I. Gonzalez Albino
- Gabriel Santiago
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    /*Descripcion del programa: 
    Este programa genera tres numeros aleatorios utilizando la funcion 
    rand(), para luego ordenar en orden descendente usando estructuras
    de desicion y operadores logicos.
    */

    // Inicializar el generador de numeros aleatorios.
    srand(time(0));

    // Generar tres numeros aleatorios entre 0 y 100 usando rand().
    int minimo = 0;
    int maximo = 100;

    int num1 = rand() % (maximo - minimo + 1) + minimo;
    int num2 = rand() % (maximo - minimo + 1) + minimo;
    int num3 = rand() % (maximo - minimo + 1) + minimo;

    // Numeros generados
    cout << "Numeros aleatorios generados: " << num1 <<", " << num2 << ", " << num3 << endl;

    // Ordenar numeros de forma descendiente.
    int mayor, medio, menor;

    // Si num1 es el mayor
    if (num1 >= num2 && num1 >= num3) { 
        mayor = num1;
        if (num2 >= num3) {
            medio = num2;
            menor = num3;
        } else {
            medio = num3;
            menor = num2;
        }
    // Si num2 es el mayor
    } else if (num2 >= num1 && num2 >= num3) {
        mayor = num2;
        if (num1 >= num3) {
            medio = num1;
            menor = num3;
        } else {
            medio = num3;
            menor = num1;
        }
    // Si num3 es el mayor
    } else {
        mayor = num3;
        if (num1 >= num2) {
            medio = num1;
            menor = num2;
        } else {
            medio = num2;
            menor = num1;
        }
    }

    // Exportar numeros en orden descendente
    cout << "Orden descendente: " << mayor << " >= " << medio << " >= " << menor << endl;
    
    return 0;
}
