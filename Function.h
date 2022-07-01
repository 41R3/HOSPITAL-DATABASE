#include <iostream>
#include <string.h>
#include <fstream>
#include<conio.h>
#include <vector>
#include <time.h>
#include "Paciente.h"
#include "Diagnostico.h"

using namespace std;

//Funciones Principales
void Agregar(vector<Diagnostico> &c);
void Editar(vector<Diagnostico> &c);
void Buscar(vector<Diagnostico> &c );
void Borrar(vector<Diagnostico> &c);

//Funciones Complementarias
string Espacio(int a);
void Info(vector<Diagnostico> &c);
int g_check(string a);
int dnicheck(vector<Diagnostico> &c,int b);
void MainMenu(vector<Diagnostico> &a);
void ex_it(void);
void animacion(unsigned int mseconds);

struct variables//list of global variable
{
    int dni;
    int id = 0 ;
    
    /*string Onombre,Ogenero,Oenfermedad,Otratamiento,Odireccion,Ointernacion,Ocuarto,
            Odoctor, Oespecialidad,OprescripcionMedica,Oobservacion,Ofecha;
    int Oedad, Odni,Ocosto;
*/
  
	
};
struct variables  v,temp_c;

//FUNCIONES DE INTERFAZ
void animacion(unsigned int mseconds)
{
    clock_t g = mseconds + clock();
    while (g > clock());
}

void ex_it(void)
{
	int process = 0;
    system("cls");
    cout << "\n\n\n\n\n";
    cout << "\n\tCERRANDO REGISTRO DE HOSPITAL";
  for(process=0;process<25;process++)
    {
      animacion(150);
      cout <<".";
    }
  system("cls");
  cout <<"\n\n\n\n\n\n\n\n\n\n\n";
  cout <<"\t\t\t";
  cout<<"GRACIAS POR ACCEDER :) ";
  cout <<"\n\n";
  cout <<"\t\t\t";
  system("pause");
  exit(0);
	system("cls");	
}
void MainMenu(vector<Diagnostico> &a)

{
	int choose;
	
	while(true)
    {
    system("cls");
    cout << "\n\n"
         << "\t\t\t\t\t"
         << "\n"
         << "\t\t\t-----------------------------------\n"
         << "\t\t\t|        HOSPITAL DATABASE        |\n"
         << "\t\t\t-----------------------------------\n"
         << "\n\n\n"
         << "\t\t\t"
         << " 1. AGREGAR PACIENTE\n\n"
         << "\t\t\t"
         << " 2. EDITAR DATOS\n\n" 
         << "\t\t\t" 
         << " 3. BUSCAR PACIENTE\n\n" 
         << "\t\t\t" 
         << " 4. BORRAR DATOS\n\n" 
         << "\t\t\t" 
         << " 5. SALIR\n\n\n" 
         << "\t\t\t" 
         << "ELIGE UNA OPCION DEL 1 AL 5: " ;
    fflush(stdin);
	cin>>choose;

	switch(choose)
	{
	case 1: {
      Agregar(a);
      break;

   }
    case 2: {
    	Editar(a);
    	break;
  }
   case 3: {
    	Buscar(a);
    	break;
  }
    case 4: {
    	Borrar(a);
    	break;
  }
     case 5: {
    	ex_it();
    	break;
  }
  

	default:{
		
	
		cout << "\n\n\n" 
             << "\t\t\t\t" 
             << "      ELIGE UNA OPCION DEL 1 AL 5!" 
             << "\n\n" 
             << "\t\t\t\t" ;    
             
         }     
	}
}
}

//FUNCIONES PRINCIPALES

//Funcion Agregar Datos
void Agregar(vector<Diagnostico> &c){
	system("cls");

    Diagnostico p1("",0,0,"","","","","","","","","","","",0);

//Variables de Paciente
    string nombre2{},genero2{},enfermedad2{},tratamiento2{}, direccion2{},internacion2{},cuarto2{};
    int edad2{}, dni2{};
//variables de Diagnostico
     string doctor2{}, especialidad2{},prescripcionMedica2{},observacion2{}, fecha2{};
	 int costo2{};
   
//Abrimos el archivo    
  fflush(stdin);
  ofstream file;
  file.open("DATOS-HOSPITAL.txt",ios::binary);
  

    cout<<"\n\n\t\t-------------REGISTRO DE PACIENTE----------------\n"
         << "\n\n\tNOMBRE COMPLETO: ";
      cin >> nombre2;
       fflush(stdin);

      cout << "\tEDAD: ";
      cin >> edad2;
       fflush(stdin);

      cout << "\tDNI: ";
      cin >>dni2;
    fflush(stdin);
    
    while(v.id!= 1)
    {
      cout << "\tGENERO(M/F): ";
      cin >>genero2;
      v.id = g_check(genero2);
    }
    fflush(stdin);
    v.id = 0; 
          
    cout << "\tDIRECCION: ";
    cin>>direccion2;
      fflush(stdin);
      system("cls");

    cout<<"\n\n\t\t---------------- HOSPITALIZACION------------------\n"; 
      fflush(stdin);
   
    cout << "\tENFERMEDAD: ";
    cin >> enfermedad2;
      fflush(stdin);

    cout << "\n\n\tTRATAMIENTO: ";
    cin >> tratamiento2;
      fflush(stdin);

    cout << "\tCUARTO: ";
    cin >>cuarto2;
      fflush(stdin);

    cout << "\tINTERNACION: ";
    cin >> internacion2;   
      fflush(stdin);
      system("cls");    
    
    cout<<"\n\n\t\t---------------- DIAGNOSTICO MEDICO------------------\n";
      fflush(stdin);

    cout << "\n\n\tDOCTOR: ";
    cin >> doctor2;
      fflush(stdin);

    cout << "\tESPECIALIDAD: ";
    cin >>especialidad2;
      fflush(stdin);

    cout << "\tPRESCRIPCION MEDICA: ";
    cin >> prescripcionMedica2;
      fflush(stdin);

    cout << "\tOBSERVACION: ";
    cin >>observacion2;
      fflush(stdin);

    cout << "\tFECHA: ";
    cin >> fecha2;
      fflush(stdin);

    cout << "\tCOSTO: ";
    cin >> costo2;
      fflush(stdin);

//----------------------------------- 
    p1.setnombre(nombre2);
    p1.setedad(edad2); 
    p1.setdni(dni2);
    p1.setgenero(genero2);
    p1.setdireccion(direccion2);

    p1.setenfermedad(enfermedad2);
    p1.settratamiento(tratamiento2);
    p1.setcuarto(cuarto2);
    p1.setinternacion(internacion2);
   
    p1.setdoctor(doctor2);
    p1.setespecialidad(especialidad2);
    p1.setprescripcionMedica(prescripcionMedica2);
    p1.setobservacion(observacion2);
    p1.setfecha(fecha2);
    p1.setcosto(costo2);
  
  c.push_back(p1);    
   cout<<"\n------------------------INFORMACION GUARDADA------------------------------------";
   file.write((char*)&c,sizeof(c));
   file.close();
   cout << "\n\n\t\t";
   system("pause");  
}

void Editar( vector<Diagnostico> &c){ 
system("cls");
fflush(stdin);

  int opcion,loc,d,check,num=-1;
  bool a=true, x=true, z=true;
 
 //Variables de la clase
  string nombre, genero, enfermedad,tratamiento, direccion,cuarto,internacion;
  int edad, dni;
  int costo;
  
//CREAR Y REEMPLAZAR ARCHIVO
 fstream file;
 file.open("Datos-Hospital.txt",ios::out);
     
        cout<< "\n\n-----------------------------REGISTRO DE PACIENTES----------------------------------\n"
            << "\n\n\n\tINGRESE EL DNI DEL PACIENTE : ";
        cin >> (v.dni);
           v.id = dnicheck(c,v.dni);
           fflush(stdin);

    while(x){         
        while(a){
            cout << "\n\nELIJA LA OPCION A MODIFICAR\n"
                << "1. NOMBRE\n"
                << "2. EDAD\n"
                << "3. DNI\n"
                << "4. GENERO\n"
                << "5. DIRECCION\n"
                << "6. ENFERMEDAD\n"
                << "7. TRATAMIENTO\n" 
                << "8. CUARTO\n"  
                << "9. INTERNACION\n"  
                << "10. COSTO\n";  

            cout << "--------------------------------INGRESE EL NUMERO DE OPCION: ";
            cin >> opcion;

               system("cls");
               fflush(stdin);

     cout << "\n\t\tINGRESE NUEVOS DATOS\n";
            switch (opcion){
                case 0: {
                    z=true;
                    break;
                }
                case 1: {
                    cout << " NOMBRE COMPLETO: ";            
                    cin >> nombre;
                    c[num].setnombre(nombre);
                    x=false;
                    break;
                }
                case 2: {

                    cout << " EDAD: ";
                    cin >> edad;
                    c[num].setedad(edad);
                    x=false;
                    break;
                }
                case 3: {
                
                    cout << " DNI: ";
                    cin >> dni;
               
                    c[num].setdni(dni);
                    x=false;
                    break;

                }
                case 4: {
                while(d != 1)
                {
                    cout << " GENERO: ";
                    cin >> genero;
                    d = g_check(genero);
                }
                    c[num].setgenero(genero);
                    x=false;
                    break;
                }
                case 5: {
                    cout << " DIRECCION: ";
                    cin >> direccion;
                    c[num].setdireccion(direccion);
                    x=false;
                    break;
                }

                    system("cls");
     cout << "\n\t\tINGRESE NUEVOS DATOS\n";

                case 6: {
                    cout << "ENFERMEDAD: ";
                    cin >> enfermedad;
                    c[num].setenfermedad(enfermedad);
                    x=false;
                    break;
                }
                case 7: {
                    cout << "TRATAMIENTO: ";
                    cin >> enfermedad;
                    c[num].settratamiento(tratamiento);
                    x=false;
                    break;
                }
                case 8: {
                    cout << "CUARTO: ";
                    cin >> cuarto;
                    c[num].setcuarto(cuarto);
                    x=false;
                    break;
                }   
                case 9: {
                    cout << " INTERNACION: ";
                    cin >> internacion;
                    c[num].setinternacion(internacion);
                    x=false;
                    break;
                }
                case 10: {
                    cout << "COSTO: ";
                    cin >> costo;
                    c[num].setcosto(costo);
                    x=false;
                    break;
                }
                default: {
                    cout << "ELIJA UNA OPCION DEL 1 AL 10" << endl;
                    break;
                }
            }
            a=false;
        }
    }
loc = (check-1)*sizeof(c);
file.seekp(loc);
file.write((char*)&c, sizeof(c) );
file.close();

  // renombrar el temporal
    cout <<"\n";
    fflush(stdin);
    cout << "------------------------------------------ REGISTRO MODIFICADO............" <<endl;
    system("pause");
    MainMenu(c);
		
}



string Espacio(int a){
    for(;a>=0; a--){
        cout << " ";
    }
    return "";
}


void Info(vector<Diagnostico> &c){

  system("cls");
  fflush(stdin);
  fstream file;
  file.open("Datos-Hospital.txt",ios::in|ios::ate|ios::binary);
  file.seekg(0);
    
    int tam= c.size();
    for(int a=0; a<tam; a++){
        string x = to_string(a);
        int y = x.size();
        int z =c[a].getnombre().size();
        int u = to_string(c[a].getedad()).size();
        int v = to_string(c[a].getdni()).size();
        int w = c[a].getgenero().size(); 
        int r = c[a].getdireccion().size();
        int o = c[a].getenfermedad().size();  
        int p = c[a].getinternacion().size();       
        int q =c[a].getdoctor().size();
//costo y cuarto mas
  cout<<"                            \n"
      <<"		                                 \n"
      <<"                             LISTA DE PACIENTES      \n"
      <<"			                         \n"
      <<"                            \n"
      <<"\n===========================================================================================\n"
      <<" *\tNOMBRE\t\tEDAD\tDNI\t\tGENERO\tDIRECCION\t\tENFERMEDAD\t\tINTERNACION\tDOCTOR\t\tCOSTO\n"
      <<"=============================================================================================\n";
        if(a==0);
        cout << Espacio(1) << a+1 << Espacio(3-y) 
            << c[a].getnombre() << Espacio(8-z)
            << c[a].getedad() << Espacio(10-u)
            << c[a].getdni() << Espacio(6-v)
            << c[a].getgenero() << Espacio(10-w)
            << c[a].getdireccion() << Espacio(8-r)  
            << c[a].getenfermedad() << Espacio(12-o)
            << c[a].getinternacion() << Espacio(12-p)
            << c[a].getdoctor() << Espacio(18-q)
            << c[a].getcosto() << endl;
    cout <<"\n";
    fflush(stdin);
    getchar();
    cout << "\n--------------------------------------------------------------------------------\n";
    if((a%3)==0&&(a!=tam))
    {
      system("pause");
      system("cls");
      cout << "\n================================================================================\n"
           << "\n"
           << "================================================================================\n";
    }
  
  file.close();
  getchar();        
    }
}


void Buscar(vector<Diagnostico> &c)
{	
    system("cls");
    fflush(stdin);
    
     int i;
     string in = to_string(i);
    int rec;
    int loc;

  
        cout<< "\n\n-------------------------BUSCAR PACIENTES----------------------------\n"
            << "\n\n\n\tINGRESE EL DNI DEL PACIENTE : ";
        cin >> (v.dni);
           v.id = dnicheck(c,v.dni);

            system("cls");
            fflush(stdin);

    fstream file;
    file.open("Datos-Hospital",ios::in);
    loc = (rec-1)*sizeof(c);
    file.seekg(loc);
    file.read((char*)&c,sizeof(c));

    cout << "\n\n\t\t----------DATOS DEL HOSPITAL----------";

    cout << "\n\n\t\t----------REGISTRO DE PACIENTE----------\n\n"
          << "\n\tNOMBRE                 :\t"<<c[i].getnombre()
          << "\n\tEDAD                 :\t"<<to_string(c[i].getedad())
          << "\n\tDNI                 :\t"<<to_string(c[i].getdni())
          << "\n\tGENERO                 :\t"<<c[i].getgenero()
          << "\n\tDIRECCION                 :\t"<<c[i].getdireccion()
          << "\n\n\n\t\t\t";
      system("pause");
      system("cls");
    
   cout << "\n\n\t\t----------REGISTRO DE INTERNACION----------"
        << "\n\tENFERMEDAD                 :\t"<<c[i].getenfermedad()
        << "\n\tTRATAMIENTO:        :\t"<<c[i].gettratamiento()
        << "\n\tINTERNACION:        :\t"<<c[i].getinternacion()
        << "\n\tCUARTO:        :\t"<<c[i].getcuarto()
        << "\n\n\n\t\t\t";
      system("pause");
      system("cls");

   cout << "\n\n\t\t----------DIAGNOSTICO MEDICO----------"
        << "\n\tDOCTOR:        :\t"<<c[i].getdoctor()
        << "\n\tESPECIALIDAD:        :\t"<<c[i].getespecialidad()
        << "\n\tPRESCRIPCION:        :\t"<<c[i].getprescripcionMedica()
        << "\n\tOBSERVACION:        :\t"<<c[i].getobservacion()
        << "\n\tFECHA:        :\t"<<c[i].getfecha()
        << "\n\tCOSTO:        :\t"<<to_string(c[i].getcosto())
        << "\n\n\n\t\t\t";
      
      file.close();
      system("pause");
      MainMenu(c); 
	
}


void Borrar(vector<Diagnostico> &c)
{
    
   fflush(stdin);
   system("cls");

   Diagnostico p3("",0,0,"","","","","","","","","","","",0);
   //Variables de Paciente
    string nombre3,genero3,enfermedad3,tratamiento3, direccion3,internacion3,cuarto3;
    int edad3, dni3;
//variables de Diagnostico
     string doctor3, especialidad3,prescripcionMedica3,observacion3, fecha3;
	 int costo3;

    int rec;
    int loc;

   
        cout<< "\n\n------------------------BORRAR DATOS DE PACIENTES------------------------------\n"
            << "\n\n\n\tINGRESE EL DNI DEL PACIENTE : ";
        cin >> (v.dni);
           v.id = dnicheck(c,v.dni);

            system("cls");
            fflush(stdin);

  fstream file;
  file.open("Datos-Hospital",ios::in);
  loc = (rec-1)*sizeof(c);
  file.seekg(loc);

    p3.setnombre(nombre3);
    p3.setedad(edad3); 
    p3.setdni(dni3);
    p3.setgenero(genero3);
    p3.setdireccion(direccion3);

    p3.setenfermedad(enfermedad3);
    p3.settratamiento(tratamiento3);
    p3.setcuarto(cuarto3);
    p3.setinternacion(internacion3);
   
    p3.setdoctor(doctor3);
    p3.setespecialidad(especialidad3);
    p3.setprescripcionMedica(prescripcionMedica3);
    p3.setobservacion(observacion3);
    p3.setfecha(fecha3);
    p3.setcosto(costo3);
  
  c.push_back(p3);
  file.write((char*)&c,sizeof(c));
  file.close();
 
          
  cout << "\n\n\n-------------------------------<REGISTRO DE PACIENTE BORRADO>\n";
  system("pause");
  MainMenu(c);
	
}

int g_check(string a)
{
  if(( (a=="m")||(a=="f")||(a=="M")||(a=="F")) )
  {
    return 1;
  }
  else
  {
    cout << "\n\tSOLO SE PERMITE F/M !\n";
    return 0;
  }
}

int dnicheck(vector<Diagnostico> &c,int pcnt)
{
    int tam = c.size();
    int resp;
    int num=1;
    bool z=true;

     for(int a=0; a<tam; a++){
                if(pcnt == c[a].getdni()){
                    num = a;
                    z = false;
                }
            }
     if(num==1)
                cout << "EL DNI NO SE ENCUENTRA REGISTRADO\n";
                return 0;
                	MainMenu(c);
        
}
	
  


  
   




