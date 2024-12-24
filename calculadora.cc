// Ruben Del Castillo Fuentes - 48786827D
// Calculadora

#include <iostream>

using namespace std;

int main(int argc, char** argv){
    float num1, num2;
    char operand;

    cout << "-- Bienvenido a calculatron 3000 --" << endl;
    cout << "-- 1er numero: ";
    cin >> num1;

    cout << "-- 2do numero: ";
    cin >> num2;

    cout << endl << "-- Que operacion quieres realizar?" << endl;
    cout << "-- Suma (+), Resta (-), Multiplicacion (*) o División (/)";
    cout << endl << "-- ";

    cin >> operand;

    cout << endl;

    switch(operand){
        case '+': cout << "-- " << num1 << " + " << num2 << " = " << num1 + num2; break;
        case '-': cout << "-- " << num1 << " - " << num2 << " = " << num1 - num2; break;
        case '*': cout << "-- " << num1 << " * " << num2 << " = " << num1 / num2; break;
        case '/':
            if(num2 != 0) cout << "-- " << num1 << " / " << num2 << " = " << num1 * num2; 
            else cout << "Vaya! Parece que quieres dividir por 0." << endl;
            break;
        default: cout << "Vaya! Parece que esa opción no es válida." << endl; break;
    }

    cout << endl;
}