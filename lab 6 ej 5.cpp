#include <iostream>
#include <string>

using namespace std;

class Pelicula {
private:
    string titulo;
    string director;
    int anioLanzamiento;

public:
    // Constructor
    Pelicula(const string& titulo, const string& director, int anioLanzamiento) {
        this->titulo = titulo;
        this->director = director;
        this->anioLanzamiento = anioLanzamiento;
    }

    // Métodos de establecer datos
    void setTitulo(const string& titulo) {
        this->titulo = titulo;
    }

    void setDirector(const string& director) {
        this->director = director;
    }

    void setAnioLanzamiento(int anioLanzamiento) {
        this->anioLanzamiento = anioLanzamiento;
    }

    // Métodos de obtener datos
    string getTitulo() const {
        return titulo;
    }

    string getDirector() const {
        return director;
    }

    int getAnioLanzamiento() const {
        return anioLanzamiento;
    }

    // Método para mostrar la información de la película
    void mostrarInformacion() const {
        cout << "Título: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Año de Lanzamiento: " << anioLanzamiento << endl;
    }
};

int main() {
    // Crear un objeto de la clase Pelicula
    Pelicula pelicula("El Padrino", "Francis Ford Coppola", 1972);

    // Mostrar la información de la película
    pelicula.mostrarInformacion();

    // Cambiar el director de la película
    pelicula.setDirector("Martin Scorsese");

    // Mostrar la información actualizada de la película
    pelicula.mostrarInformacion();

    return 0;
}
