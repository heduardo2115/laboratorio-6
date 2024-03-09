#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anoPublicacion;

public:
    // Constructor
    Libro(const string& titulo, const string& autor, int anoPublicacion) {
        this->titulo = titulo;
        this->autor = autor;
        this->anoPublicacion = anoPublicacion;
    }

    // Métodos de establecer datos
    void setTitulo(const string& titulo) {
        this->titulo = titulo;
    }

    void setAutor(const string& autor) {
        this->autor = autor;
    }

    void setAnoPublicacion(int anoPublicacion) {
        this->anoPublicacion = anoPublicacion;
    }

    // Métodos de obtener datos
    string getTitulo() const {
        return titulo;
    }

    string getAutor() const {
        return autor;
    }

    int getAnoPublicacion() const {
        return anoPublicacion;
    }

    // Método para mostrar la información del libro
    void mostrarInformacion() const {
        cout << "Título: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Año de Publicación: " << anoPublicacion << endl;
    }
};

int main() {
    // Crear un objeto de la clase Libro
    Libro libro("El Quijote", "Miguel de Cervantes", 1605);

    // Mostrar la información del libro
    libro.mostrarInformacion();

    // Cambiar el título del libro
    libro.setTitulo("Don Quijote de la Mancha");

    // Mostrar la información actualizada del libro
    libro.mostrarInformacion();

    return 0;
}
