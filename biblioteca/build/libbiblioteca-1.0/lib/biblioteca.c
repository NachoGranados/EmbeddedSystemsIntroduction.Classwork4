#include "biblioteca.h"

int suma(int num1, int num2) {
    return num1 + num2;
}

int resta(int num1, int num2) {
    return num1 - num2;
}

int multiplicacion(int num1, int num2) {
    return num1 * num2;
}

int division(int num1, int num2) {
    return num1 / num2;
}

double raiz(int num1) {
    double num = (double) num1;
    return sqrt(num);
    
}

double coseno(double num1) {
    double num = (double) num1;
    return cos(num);
}
