//incluir librerias
#include <iostream>
#include <cmath>

using namespace std;

// Función para calcular el área de un cuadrado
float areaCuadrado(float lado){
    return pow(lado, 2);
}

// Función para calcular el área de un rectángulo
float areaRectangulo(float base, float altura){
    return base * altura;
}

// Función para calcular el área de un triángulo
float areaTriangulo(float base, float altura){
    return (base * altura) / 2;
}

// Función para calcular el área de un círculo
float areaCirculo(float radio){
    return M_PI * pow(radio, 2);
}

// Función para calcular el área de un rombo
float areaRombo(float diagonalMayor, float diagonalMenor){
    return (diagonalMayor * diagonalMenor) / 2;
}

// Función para mostrar el menu de opciones
void mostrarMenu(){
    cout << "1. cuadrado" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Triangulo" << endl;
    cout << "4. circulo" << endl;
    cout << "5. Rombo" << endl;
}

int main(){
    int opcion;
    float lado, base, altura, radio, diagonalMayor, diagonalMenor, area;

    // Mostrar el menú de opciones
    mostrarMenu();

    // Pedir la opción al usuario
    cout << "Ingrese su opcion de la figura geometrica: ";
    cin >> opcion;

    // Realizar el cálculo del área dependiendo de la opción seleccionada
    switch(opcion){
        case 1:
            cout << "ingrese el valor del area: ";
            cin >> lado;
            area = areaCuadrado(lado);
            break;
        case 2:
            cout << "ingrese el valor de la base: ";
            cin >> base;
            cout << "ingrese el valor de la altura: ";
            cin >> altura;
            area = areaRectangulo(base, altura);
            break;
        case 3:
            cout << "Ingrese el valor de la base: ";
            cin >> base;
            cout << "Ingrese el valor de la altura: ";
            cin >> altura;
            area = areaTriangulo(base, altura);
            break;
        case 4:
            cout << "Ingrese el valor del radio: ";
            cin >> radio;
            area = areaCirculo(radio);
            break;
        case 5:
            cout << "Ingrese el valor de la diagonal mayor: ";
            cin >> diagonalMayor;
            cout << "Ingrese el valor de la diagonal menor: ";
            cin >> diagonalMenor;
            area = areaRombo(diagonalMayor, diagonalMenor);
            break;
        default:
            cout << "Opción inválida" << endl;
            return 0;
    }

    // Mostrar el resultado
    cout << "su area es de: " << area << endl;

    return 0;
}