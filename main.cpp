//Primer avance de programacion basica
//Programa dirigido a secretarias de consultorio dental


#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int opcion;
    bool repetir = true;
    string nombre="";
    char hora [10] ;
    string trat;
    string descrip;
    int pu, ct, puc;
    int cto ;

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
                cout << "Escriba nombre del paciente:" << endl ; 
                cin.ignore ();
                std::getline (std::cin, nombre) ; 
                
                cout << "Ingrese la hora de la cita, en formato de 24 horas:\n"; cin >> hora;
                
                cout << "Escriba nombre del tratamiento:" << endl ; 
                cin.ignore ();
                std::getline (std::cin, trat) ;   

                cout << "Escriba descripcion del tratamiento:" << endl ; 
                cin.ignore ();
                std::getline (std::cin, descrip) ;

                cout << "Ingrese costo unitario del tratamiento:" << endl ;
                cin >> pu ;

                cout << "Ingrese cantidad del tratamiento:" << endl ;
                cin >> ct ;

                cout << "Ingrese precio unitario de la cita:" << endl ; cin >> puc ;
                  
                cto = puc + (pu*ct);
                cout << "Costo total : " << cto << endl;

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