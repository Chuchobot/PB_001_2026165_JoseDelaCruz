/* 
Primer avance de programacion basica
Programa dirigido a secretarias de consultorio dental
Programa hecho en visual studio code 
*/


#include <iostream>
#include <cstdlib>
#include <string>
#include <stdlib.h>

using namespace std;
    struct cita
        {
            string nombre;
            char hora[10];
            string trat;
            string descrip;
            int pc;
            int ct;
            int pu;
            int puc;
            int cto ;
        };

int main()
{
    
    int opcion;
    bool repetir = true;
    int i ;
    cita dental[3];

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
            for (i = 0; i < 3; i++)
            {
                cout << "\nEl No. de cita es: " << i+1 << endl;

                cout << "\nEscriba nombre del paciente:" << endl ; 
                cin.ignore ();
                getline (cin,dental[i].nombre) ; 
                
                cout << "Ingrese la hora de la cita, en formato de 24 horas:\n"; cin >> dental[i].hora;
                
                cout << "Escriba nombre del tratamiento:" << endl ; 
                cin.ignore ();
                getline (cin,dental[i].trat) ;   

                cout << "Escriba descripcion del tratamiento:" << endl ; 
                cin.ignore ();
                getline (cin,dental[i].descrip) ;

                cout << "Ingrese costo unitario del tratamiento:" << endl ;
                cin >> dental[i].pu ;

                cout << "Ingrese cantidad del tratamiento:" << endl ;
                cin >> dental[i].ct ;

                cout << "Ingrese precio unitario de la cita:" << endl ; cin >> dental[i].puc ;
                  
                dental[i].cto = dental[i].puc + (dental[i].pu*dental[i].ct);
                cout << "Costo total : " << dental[i].cto << endl;
            }

                break;                
            case 2:
            for ( i = 0; i < 3; i++)
            {
                
            }
            
                break;
            case 3:
            for (i = 0; i < 3; i++)
            {
                cout << "\nEl No. de cita es: " << i+1 << endl;

                cout << "\nNombre del paciente: " << (dental[i].nombre); 
                
                cout << "\nHora: "<< dental[i].hora;
                
                cout << "\nTratamiento: " << (dental[i].trat) ;   

                cout << "\nDescripcion del tratamiento: " << (dental[i].descrip) ;

                cout << "\nCosto unitario del tratamiento: " << dental[i].pu ;

                cout << "\nCantidad del tratamiento: " << dental[i].ct ;

                cout << "\nPrecio unitario de la cita: " << dental[i].puc ;
                  
                dental[i].cto = dental[i].puc + (dental[i].pu*dental[i].ct);
                cout << "Costo total : " << dental[i].cto << endl;
            }
            
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