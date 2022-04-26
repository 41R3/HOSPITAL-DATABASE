#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;




// ************************************************* Titulo ********************************************* 
void Title(void)
{
	cout<<"\n\n--------------------------------------------------------------------------------"
	    <<"\n                                      HOSPITAL         "
	    <<"\n--------------------------------------------------------------------------------";
}
// ************************************************* Menu *********************************************/
void MainMenu(void)
{
	int choose;
	Title();
	cout<<"\n\n\t\t\t 1. Agregar Pacientes\n"
	    <<"\n\t\t\t 2. Lista de Pacientes\n"
	    <<"\n\t\t\t 3. Buscar Pacientes\n"
	    <<"\n\t\t\t 4. Editar Registro de Pacientes\n"
	    <<"\n\t\t\t 5. Borrar Registro de Pacientes\n"
	    <<"\n\t\t\t 6. Salir\n"
	    <<"\n\n\n \n\t\t\t Elige opciones del 1 al 6:";
	
/*	switch(choose)
	{
	
	case 1:
	Add();//funcion agregar
    	break;
    case 2:
    	func_list();//funcion lista
    	break;
	case 3:
	Search();//funcion buscar
    	break;
	case 4:
		Edit();//funcion editar
		break;
	case 5:
		Dlt();//funcion borrar
		break;
	case 6:
		ex_it();//funcion salir
    	break;

	default:
		cout<<"\t\t\tEntrada invalida. Ingresa una opcion correcta: )";
	}
		
*/	
}
int main(){
	system ("color 16");

    MainMenu();

}