#include <iostream>
#include <string.h>

#include <conio.h>
#include <vector>
#include "Function.h"
#include "Paciente.h"
#include "Diagnostico.h"

using namespace std;


void Login(vector<Diagnostico> &a);
void Welcome(void);



// INICIO
void Welcome(void) 
{
	
 int process=0;
  system("cls");
  cout << "\n\n\n\n\n\n\n"
       <<"\t\t\t-----------------------------------\n"
       <<"\t\t\t|         HOSPITAL DATABASE       |\n"
       <<"\t\t\t-----------------------------------\n"
       <<"\n\n"
       <<"\t\t\t";
  system("pause");
  cout <<"\n\t\t\tCARGANDO";

  for(process=0;process<25;process++)
  {
    animacion(150);
    cout <<".";
  }
	
}

// ACCESO
void Login(vector<Diagnostico> &a)
{

int e=0	;
char username[15];
char password[15];
int ten=0;


do
{
    system("cls");
    cout << "\n\n\n\n\n\n"
         <<"\t\t\t-----------------------------------\n"
         <<"\t\t\t|         HOSPITAL DATABASE       |\n"
         <<"\t\t\t-----------------------------------\n"
         <<"\n\n"
         << "\t\t\t"
         << "USUARIO : ";
    cin >> username;
    cout << "\t\t\t\t"
         << "\n"
         << "\t\t\t"
         << "CODIGO : ";
    cin >> password;
		
	if (strcmp(username,"Doctor")==0 && strcmp(password,"12345")==0)
	{

		cout << "\n\n"
             << "\t\t\t"
             << "ACCESO CONFIRMADO!\n\n"
             << "\t\t\t";
        system("pause");
        system("cls");
	    MainMenu(a);

		getch();
		break;
	}
	else
	{
	   system("cls");
        ten = ten+1;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
             << "\t\t"
             << "INTENTOS RESTANTES: " << 3-ten
             << "\n\n"
             << "\t\t\t";
        system("pause");
        if(ten>=3)
        {

          cout << "\t\t\t\t\t\t"
               << "\n"
               << "\t\t"
               << "SIN INTENTOS RESTANTES\n\n"
               << "\t\t\t";
          system("pause");
          ex_it();
        }
      }
    }
 while(ten<3);
}
 


int main(){
  Diagnostico d0("Pedro Perez", 5, 11111111, "M", "Los Prados","TBC", "Tratamiento_01", "B504", "13-05-2022", "Pepe", "Cardio", "Paraceta", "Cuidado01","09-05-2022", 3983912);
  Diagnostico d1("Pepe Portillo", 50, 99999999, "M", "Caceres", "Diabetes", "Tratamiento_02","C304", "14-05-2022","Anto", "Nefro", "Cetiri", "Cuidado02","10-05-2022", 39123891);
  vector<Diagnostico> a={d0,d1};
	system ("color 16");
	Welcome();
  Login(a);

}