// Ruben Del Castillo Fuentes - 48786827D
// Calculadora

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv){
    float num1, num2;
    int precision;
    char operand;

    cout << "-- Bienvenido a calculatron 3000 --" << endl;
    cout << "-- 1er numero: ";
    cin >> num1;

    cout << "-- 2do numero: ";
    cin >> num2;

    cout << "-- Precisión del resultado: ";
    cin >> precision;

    cout << endl << "-- Que operacion quieres realizar?" << endl;
    cout << "-- Suma (+), Resta (-), Multiplicacion (*) o División (/) o Salir (s)";
    
    bool correct = false;
    while(!correct){
        cout << endl << "-- ";

        cin >> operand;

        cout << endl;

        switch(operand){
            case '+': cout << fixed << setprecision(precision) << "-- " << num1 << " + " << num2 << " = " << num1 + num2; correct = true; break;
            case '-': cout << fixed << setprecision(precision) << "-- " << num1 << " - " << num2 << " = " << num1 - num2; correct = true; break;
            case '*': cout << fixed << setprecision(precision) << "-- " << num1 << " * " << num2 << " = " << num1 / num2; correct = true; break;
            case '/':
                if(num2 != 0) cout << fixed << setprecision(precision) << "-- " << num1 << " / " << num2 << " = " << num1 * num2; 
                else cout << "Vaya! Parece que quieres dividir por 0." << endl;
                correct = true;
                break;
            case 's': correct = true; break;
            default: cout << "Vaya! Parece que esa opción no es válida." << endl; break;
        }
    }

    cout << endl;
}