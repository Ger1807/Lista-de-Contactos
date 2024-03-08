#include <stdio.h>
#include <stdlib.h>

// Definicion de la estructura Contacto
typedef struct {
    char nombre[50];
    char numerodeTelefono[20];
    char correoElectronico[50];
} Contacto;

// Función para imprimir un contacto
void imprimirContacto(Contacto contacto) {
    printf("Nombre: %s\n", contacto.nombre);
    printf("Numero de Telefono: %s\n", contacto.numerodeTelefono);
    printf("Correo Electronico: %s\n", contacto.correoElectronico);
}

int main() {
    // Crear un array de Contactos
    Contacto listaContactos[100];

    // Crear un contacto de ejemplo
    Contacto contactoEjemplo;
    //uso la funcion sprintf para formatear la cadena de texto y almacenarla en una variable para asignar facilmente valores sin manipularlo manualmente
    sprintf(contactoEjemplo.nombre, "Germo Perez");
    sprintf(contactoEjemplo.numerodeTelefono, "0412-0930200");
    sprintf(contactoEjemplo.correoElectronico, "germoantonio9@gmail.com");

    // Añadir el contacto de ejemplo a la lista de contactos
    listaContactos[0] = contactoEjemplo;

    // Imprimir el contacto de ejemplo
    imprimirContacto(listaContactos[0]);

    return 0;
}
