/* 
Segundo avance de programacion basica
Programa dirigido a secretarias de consultorio dental
Programa hecho en visual studio code 
*/


#include <iostream>
#include <cstdlib>
#include <string>
#include <stdlib.h>
#include <limits> // numeric limits
#include <ios> //used to get stream size

using namespace std;

//Definir la estructura
struct cita {
    string nombre;
    char hora[10];
    string trat;
    string descrip;
    int ct;
    int put;
    int puc;
    int cto;
};

// Definir variables globales
int i;
int op, j;
cita dental[3];
bool repetir = true;

// Definir la funcion
void AgendarCita();
void ModificarCita();
void EliminarCita();
void ListarCita();
void SalirSistema();
void LimpiarPantalla();

int main()
{
    
    int opcion;

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
            case 1: // crear funcion para agendarCita()  
                AgendarCita();

                break;                
            case 2: // crear funcion para ModificarCita() 
                ModificarCita() ;
            
                break;

            case 3: // crear funcion para eliminarCita() 
                EliminarCita ();
                break;      
          
            case 4: // crear funcion para ListarCita()
                ListarCita() ;
            
                break;   
            case 5:  // crear funcion para limpiarPantalla()
                LimpiarPantalla();
                //system ("CLEAR");   
                //repetir = true;        	              
                break;            
            case 6: // crear funcion para SalirSistema()
                SalirSistema() ;

                break;
            
            default:
                cout <<"\nOPCION NO VALIDA";
                break;
        }        
    } while (repetir);
	 
    return 0;
}

void AgendarCita() {
    //std::cin.ignore (); // afuera del loop
    for (i = 0; i < 3; i++) {
        cout << "\nEl No. de cita es: " << i+1 << endl;

        cout << "\nEscriba nombre del paciente:\n"  ;
        std::cin.ignore ();
        getline (std::cin, dental[i].nombre);
        cout << "Ingrese la hora de la cita, en formato de 24 horas:\n"; cin >> dental[i].hora;
        
        cout << "Escriba nombre del tratamiento:" << endl ; 
        cin.ignore (); 
        getline (cin,dental[i].trat) ;
        // cin >> dental[i].trat;
        
        cout << "Escriba descripcion del tratamiento:" << endl ; 
        cin.ignore ();
        getline (cin,dental[i].descrip) ;
        // cin >> dental[i].descrip;

        cout << "Ingrese costo unitario del tratamiento:" << endl ;
        cin >> dental[i].put;

        cout << "Ingrese cantidad del tratamiento:" << endl ;
        cin >> dental[i].ct ;

        cout << "Ingrese precio unitario de la cita:" << endl ; cin >> dental[i].puc ;
        
        dental[i].cto = dental[i].puc + (dental[i].put*dental[i].ct);
        cout << "Costo total : " << dental[i].cto << endl;
    }
     
}
void ModificarCita() {
    
    cout<<"Ingrese el numero cita: \n";
                cin >> j;
                j = j-1;
                cout<<"\nIngrese que desea modificar\n1.Nombre\n2.Hora\n3.Nombre del tratamiento\n";
                cout<<"4.Descripcion del tratamiento\n5.Costo unitario del tratamiento\n6.Cantidad del tratamiento\n";
                cout<<"7.Precio unitario de la cita\n8.Todos los campos anteriores\n" ;
                cin>>op;
                switch (op)
                    {
                    case 1:
                        for(i=j;i<=j;i++)
                            {
                                cout << "\nEscriba nombre del paciente:" << endl ; 
                                cin.ignore ();
                                getline (cin,dental[i].nombre) ; 
                                // cin >> dental[i].nombre;
                
                            } 
                    break;

                    case 2:
                        for(i=j;i<=j;i++)
                            {
                                cout << "Ingrese la hora de la cita, en formato de 24 horas:\n"; cin >> dental[i].hora;
                            }
                    break;

                    case 3:
                    for(i=j;i<=j;i++)
                            {
                                cout << "Escriba nombre del tratamiento:" << endl ; 
                                cin.ignore ();
                                getline (cin,dental[i].trat) ;
                                // cin >> dental[i].trat;
                            }
                    break;
                    
                    case 4:
                    for(i=j;i<=j;i++)
                            {
                                cout << "Escriba descripcion del tratamiento:" << endl ; 
                                cin.ignore ();
                                getline (cin,dental[i].descrip) ;
                                // cin >> dental[i].descrip;
                            }
                    break;

                    case 5:
                    for(i=j;i<=j;i++)
                            {
                                cout << "Ingrese costo unitario del tratamiento:" << endl ;
                                cin >> dental[i].put ;
                            }
                    break;

                    case 6:
                    for(i=j;i<=j;i++)
                            {
                                cout << "Ingrese cantidad del tratamiento:" << endl ;
                                cin >> dental[i].ct ;

                            }
                    break;

                    case 7:
                    for(i=j;i<=j;i++)
                            {
                                cout << "Ingrese precio unitario de la cita:" << endl ; cin >> dental[i].puc ;

                            }
                             break;

                    case 8:
                    for(i=j;i<=j;i++)
                            {
                                cout << "\nEscriba nombre del paciente:" << endl ; 
                                cin.ignore ();
                                getline (cin,dental[i].nombre) ; 
                                //cin >> dental[i].nombre;
                                
                                cout << "Ingrese la hora de la cita, en formato de 24 horas:\n"; cin >> dental[i].hora;
                                
                                cout << "Escriba nombre del tratamiento:" << endl ; 
                                cin.ignore ();
                                getline (cin,dental[i].trat) ;   
                                //cin >> dental[i].trat;

                                cout << "Escriba descripcion del tratamiento: " << endl ; 
                                cin.ignore ();
                                getline (cin,dental[i].descrip) ;
                                //cin >> dental[i].descrip;

                                cout << "Ingrese costo unitario del tratamiento:" << endl ;
                                cin >> dental[i].put ;

                                cout << "Ingrese cantidad del tratamiento:" << endl ;
                                cin >> dental[i].ct ;

                                cout << "Ingrese precio unitario de la cita:" << endl ; cin >> dental[i].puc ;
                            }
                    break;

                    default:
                    cout << "Opcion no valida, ingrese nuevamente\n";
                    break;
                    }
}
void EliminarCita(){
    int j;
        cout << "Ingrese la cita a eliminar";
        cin >> j;
        j = j - 1;
        for (int i = j;i == j;i++)
        {
            cout << "Eliminando registro " << j + 1 << endl;
            dental[i].nombre = " ";
            dental[i].hora[10] = 0 ;
            dental[i].trat = " ";
            dental[i].descrip = " ";
            dental[i].put = 0;
            dental[i].ct = 0;
            dental[i].puc = 0;
            dental[i].cto = 0;
        }
}

void ListarCita (){
    for (i = 0; i < 3; i++)
            {
                cout << "\nEl No. de cita es: " << i+1 << endl;
                cout << "\nNombre del paciente: " << (dental[i].nombre); 
                cout << "\nHora: "<< dental[i].hora;
                cout << "\nTratamiento: " << (dental[i].trat) ;
                cout << "\nDescripcion del tratamiento: " << (dental[i].descrip);
                cout << "\nCosto unitario del tratamiento: " << dental[i].put ;
                cout << "\nCantidad del tratamiento: " << dental[i].ct ;
                cout << "\nPrecio unitario de la cita: " << dental[i].puc ;
                dental[i].cto = dental[i].puc + (dental[i].put*dental[i].ct);
                cout << "\nCosto total : " << dental[i].cto << endl;
            }
}
void LimpiarPantalla() {
        system ("CLEAR");   
        repetir = true;  
}
void SalirSistema(){
            cout<<"Gracias por su visita\n";
            exit(EXIT_SUCCESS);
            repetir = false;
}