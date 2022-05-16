/* 
Jose de Jesus De la Cruz Santiago
Proyectro final
Programa dirigido a secretarias de consultorio dental
Programa hecho en visual studio code 
*/


#include <iostream>
#include <cstdlib>
#include <string>
#include <stdlib.h>
#include <limits> // numeric limits
#include <ios> //used to get stream size
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <vector>


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
    int sto;
    int tci;
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
void ArchivarCita();

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

                break;            
            case 6: // crear funcion para SalirSistema()
                ArchivarCita() ; 
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
        cin.ignore ();
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
        
        dental[i].sto = dental[i].puc + (dental[i].put*dental[i].ct);
        dental[i].tci = (dental[i].sto*.16)+dental[i].sto;
        
        cout << "Costo total con IVA: " << dental[i].tci << endl;
    }
     
}

void ModificarCita() {
    
    cout<<"Ingrese el numero cita: \n";
    cin >> j;
    j = j-1;
    cout<<"\nIngrese que desea modificar\n1.Nombre\n2.Hora\n3.Nombre del tratamiento\n";
    cout<<"4.Descripcion del tratamiento\n5.Costo unitario del tratamiento\n6.Cantidad del tratamiento\n";
    cout<<"7.Todos los campos anteriores\n" ;
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

                cout << "Ingrese precio unitario de la cita:\n" << endl ; cin >> dental[i].puc ;

                dental[i].sto = dental[i].puc + (dental[i].put*dental[i].ct);
                dental[i].tci = (dental[i].sto*.16)+dental[i].sto;
        
                cout << "Costo total con IVA: " << dental[i].tci << endl;
            }
        break;

        default:
            cout << "Opcion no valida, ingrese nuevamente\n";
        break;
    }
}

void EliminarCita(){
    int j;
    cout << "Ingrese la cita a eliminar: ";
    cin >> j;
    j = j - 1;
    for (int i = j;i == j;i++)
    {
        cout << "Eliminando registro: " << j + 1 << endl;
        dental[i].nombre = "";
        for (int x = 0; x < 10; x++) {
            dental[i].hora[x] = '\0';
        }        
        dental[i].trat = " ";
        dental[i].descrip = " ";
        dental[i].put = 0;
        dental[i].ct = 0;
        dental[i].tci = 0;
        dental[i].sto = 0;
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
        cout << "\nCosto total con IVA: " << dental[i].tci << endl;
    }
}

void LimpiarPantalla(){
#ifdef WINDOWS
    std::system("cls");
#else
    std::system ("clear");
#endif
    repetir = true;  
}

void SalirSistema(){
    cout<<"Gracias por su visita\n";
    exit(EXIT_SUCCESS);
    repetir = false;
}

void ArchivarCita(){

	ofstream archivo; //clase ifstream para leer archivos
	string nombrearchivo;

	nombrearchivo = "ArchivoCita-Dientes.txt";

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		cout << "ERROR NO SE PUDO CREAR EL ARCHIVO";
		exit(1);
	}

    archivo << "NO. CITA" << "\t";
	archivo << "NOMBRE" << "\t";
	archivo << "HORA" << "\t";
	archivo << "TRATAMIENTO" << "\t";
	archivo << "DESCRIPCION" << "\t";
	archivo << "CANTIDAD" << "\t";
    archivo << "PRECIO UNITARIO" << "\t";
    archivo << "SUBTOTAL" << "\t";
    archivo << "TOTAL" << "\n"; 
    archivo << "\n";

    for (i = 0; i < 3; i++)
    {
        if (dental[i].nombre != "") {
            archivo << i+1 << "\t";
            archivo << dental[i].nombre << "\t";
            archivo << dental[i].hora << "\t";
            archivo << dental[i].trat << "\t";
            archivo << dental[i].descrip << "\t";
            archivo << dental[i].ct << "\t";
            archivo << dental[i].put << "\t";
            archivo << dental[i].sto  << "\t";
            archivo << dental[i].tci  << "\t"; 
            archivo << "\n";
        }   
    }
	archivo.close();
}