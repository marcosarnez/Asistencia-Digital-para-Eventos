// DEL OBJETIVO 1: Objetivo: Entrada Rápida y Amigable, HICE CODIGO DE LA HISTORIA DE USUARIO 4: Como personal de PlanificaPro, quiero que el sistema me muestre una confirmación visual clara al registrar a alguien, para saber que el proceso fue exitoso de inmediato.
#include <iostream> // esta libreriA permite usar el cout y el cin 
#include <string>   // esta libreria permite usar cadenas (palabras)

// para no escribir en cada linea std: xd
using namespace std;

int main() {
    cout << "Simulacion de Registro de Asistencia" << endl;

    string nombre;
    char aux; // pedimos la entrada

    
    cout << "Ingrese el nombre del asistente a registrar: ";
    getline(cin, nombre); // Obtiene el nombre del asistente

    
    cout << "Simulando proceso de registro para " << nombre << "..." << endl;
    
    // Aquí el personal de PlanificaPro indicaría si el registro fue "exitoso" o "fallido"
    cout << "¿El registro fue exitoso? (s/n): ";
    cin >> aux;

  

   // verificamops si se pudo hacer el registro correctamente 
    if (aux == 's' || aux == 'S') {
        // Criterio Positivo: El sistema debe mostrar un mensaje de confirmación visual clara.
      
        cout << "¡REGISTRO EXITOSO!" << endl;
        cout << "Asistente:" << nombre << endl;
        cout << "Estado: INGRESADO" << endl;
 
    } else {
        // Criterio Negativo: El sistema no debe mostrar falsos positivos de registro.
     
        cout << "ERROR EN EL REGISTRO." << endl;
        cout << "Asistente: " << nombre << endl;
        cout << "Estado: FALLIDO" << endl;
        cout << "Verifique los datos e intente de nuevo." << endl;

    }

    cout << "\n Fin de la simulacion de confirmacion de registro." << endl;

    return 0; // El programa finalizó con éxito
}