//Primer avance de programacion basica


#include <iostream>
//#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int opcion;
    bool repetir = true;
    string nombre="";
    int hora;

    do {
        cout << "\n\n    MENU" << endl;
        cout << "1. Agendar cita" << endl;
        cout << "2. Modificar cita" << endl;
        cout << "3. Eliminar cita" << endl;
        cout << "4. Lista de citas vigentes" << endl;
        cout << "5. limpiar pantalla" << endl;
        cout << "6. Salir" << endl;
        
        cout << "\nIngrese la opcion deseada: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:                 
                cout << "Escriba su nombre:\n" << endl ; 
                cin.ignore ();
                std::getline (std::cin, nombre) ; 
                cout << "Ingrese la hora deseada:\n"; cin >> hora;
                             
                break;                
            case 2:
                break;
            case 3:
                break;                
            case 4:
                break;   
            case 5:            	              
                break;            
            case 6:
                repetir = false;
                break;
        }        
    } while (repetir);
	 
    return 0;
}