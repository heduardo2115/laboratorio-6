#include <iostream>
#include <string>

using namespace std;

class CuentaBancaria {
private:
    string nombreTitular;
    string numeroCuenta;
    double saldo;

public:
    // Constructor
    CuentaBancaria(const string& nombre, const string& cuenta, double saldoInicial) {
        nombreTitular = nombre;
        numeroCuenta = cuenta;
        saldo = saldoInicial;
    }

    // Método para depositar dinero en la cuenta
    void depositar(double cantidad) {
        saldo += cantidad;
        cout << "Se depositaron $" << cantidad << " en la cuenta." << endl;
    }

    // Método para retirar dinero de la cuenta
    void retirar(double cantidad) {
        if (saldo >= cantidad) {
            saldo -= cantidad;
            cout << "Se retiraron $" << cantidad << " de la cuenta." << endl;
        } else {
            cout << "No hay suficiente saldo en la cuenta para realizar el retiro." << endl;
        }
    }

    // Método para consultar el saldo de la cuenta
    double consultarSaldo() const {
        return saldo;
    }
};

int main() {
    // Crear una cuenta bancaria
    CuentaBancaria cuenta("Juan Perez", "123456789", 1000.0);

    // Realizar operaciones en la cuenta
    cuenta.depositar(500.0);
    cuenta.retirar(200.0);

    // Consultar el saldo actual de la cuenta
    cout << "El saldo actual de la cuenta es: $" << cuenta.consultarSaldo() << endl;

    return 0;
}
