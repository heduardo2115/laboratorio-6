#include <iostream>

using namespace std;

class Calculadora {
private:
    double numero1;
    double numero2;

public:
    // Constructor
    Calculadora(double num1, double num2) {
        numero1 = num1;
        numero2 = num2;
    }

    // Método para realizar la suma
    double suma() const {
        return numero1 + numero2;
    }

    // Método para realizar la resta
    double resta() const {
        return numero1 - numero2;
    }

    // Método para realizar la multiplicación
    double multiplicacion() const {
        return numero1 * numero2;
    }

    // Método para realizar la división
    double division() const {
        // Verificar si el segundo número no es cero para evitar división entre cero
        if (numero2 != 0)
            return numero1 / numero2;
        else {
            cerr << "Error: división por cero\n";
            return 0;
        }
    }
};

int main() {
    // Crear un objeto de la clase Calculadora
    Calculadora calculadora(10, 5);

    // Realizar operaciones
    cout << "Suma: " << calculadora.suma() << endl;
    cout << "Resta: " << calculadora.resta() << endl;
    cout << "Multiplicación: " << calculadora.multiplicacion() << endl;
    cout << "División: " << calculadora.division() << endl;

    return 0;
}
