#include <iostream>
#include <string>

using namespace std;

class Estudiante {
private:
    string nombre;
    string apellido;
    int edad;
    string curso;

public:
    // Constructor
    Estudiante(const string& nombre, const string& apellido, int edad, const string& curso) {
        this->nombre = nombre;
        this->apellido = apellido;
        this->edad = edad;
        this->curso = curso;
    }

    // Métodos de establecer datos
    void setNombre(const string& nombre) {
        this->nombre = nombre;
    }

    void setApellido(const string& apellido) {
        this->apellido = apellido;
    }

    void setEdad(int edad) {
        this->edad = edad;
    }

    void setCurso(const string& curso) {
        this->curso = curso;
    }

    // Métodos de obtener datos
    string getNombre() const {
        return nombre;
    }

    string getApellido() const {
        return apellido;
    }

    int getEdad() const {
        return edad;
    }

    string getCurso() const {
        return curso;
    }

    // Método para mostrar la información del estudiante
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << endl;
        cout << "Curso: " << curso << endl;
    }
};

int main() {
    // Crear un objeto de la clase Estudiante
    Estudiante estudiante("Juan", "Perez", 20, "Informática");

    // Mostrar la información del estudiante
    estudiante.mostrarInformacion();

    // Cambiar el curso del estudiante
    estudiante.setCurso("Matemáticas");

    // Mostrar la información actualizada del estudiante
    estudiante.mostrarInformacion();

    return 0;
}
