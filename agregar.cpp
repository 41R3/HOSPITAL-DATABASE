#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
  for(int a=1; a<60; a+=1)
     cout << "-";
  for(int a=1; a<45; a+=1)
     cout << " ";
     cout << "CLINICA AREQUIPA";
 
     cout << "\n";
  for(int a=1; a<60; a+=1)
     cout << "-";
     cout << "\n";
  for(int a=1; a<10; a+=1)
     cout << "!";
     cout << " REGISTRO DE PACIENTE ";
  for(int a=1; a<10; a+=1)
     cout << "!";
 cout << "\n\nNOMBRE: Carlos"
       << "\n\nAPELLIDO: Perez"
       << "\n\nGENERO[F/M]: M"
       << "\n\nEDAD: 48"
       << "\n\nDIRECCION: Arequipa"
       << "\n\nNUMERO: 999 888 555"
       << "\n\nEMAIL: Carlos.Perez@gmail.com"
       << "\n\nPROBLEMA: Fallo Renal\n\n";

  for(int a=0; a<4; a+=1)
      cout << ". ";
      cout << "                                     INFORMACION GUARDADA";
      
  for(int a=0; a<4; a+=1)
      cout << ". ";
  

     cout << "\n\nAPELLIDO" << setw(15) << "GENERO"<< setw(11) << "EDAD" << setw(15) << "DIRECCION" << setw(15) << "NUMERO" << setw(10) << "EMAIL" << setw(27) << "PROBLEMA\n";
  for(int a=0; a<120; a+=1)
    cout << "=";
    cout << "\nCarlos Perez/" << setw(7) << "M/" << setw(15) << "48/" << setw(17) << "Arequipa/" << setw(16) << "999 888 555/" << "   " << "Carlos.Perez@gmail.com/" << setw(15) << "Fallo Renal";
}