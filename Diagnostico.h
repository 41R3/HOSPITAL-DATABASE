#include <string>
using namespace std;

#ifndef _DIAGNOSTICO_H_
#define _DIAGNOSTICO_H_

class Diagnostico:  public Paciente{
    public:
        Diagnostico(string Xnombre, int Xedad, int Xdni,string Xgenero, string Xdireccion, string Xenfermedad,
        string Xtratamiento,string Xcuarto,string Xinternacion,string Xdoctor, string Xespecialidad, string XprescripcionMedica, 
        string Xobservacion, string Xfecha, int Xcosto): Paciente{Xnombre,Xedad,Xdni,Xgenero,Xdireccion,Xenfermedad,
        Xtratamiento,Xcuarto,Xinternacion}{
            doctor=Xdoctor;
            especialidad=Xespecialidad;
            prescripcionMedica = XprescripcionMedica;
            observacion = Xobservacion;   
            fecha = Xfecha;
            costo = Xcosto;      
        }

        string getdoctor() const{
            return doctor;
        }
        void setdoctor(string Xdoctor){
            doctor = Xdoctor;
        }

        string getespecialidad() const{
            return  especialidad;
        }
        void setespecialidad(string Xespecialidad){
             especialidad = Xespecialidad;
        }

        string getprescripcionMedica() const{
            return prescripcionMedica;
        }
        void setprescripcionMedica(string XprescripcionMedica){
            prescripcionMedica = XprescripcionMedica;
        }

        string getobservacion() const{
            return observacion;
        }
        void setobservacion(string Xobservacion){
            observacion = Xobservacion;
        }

        string getfecha() const{//fehca de ingreso y salida
            return fecha;
        }
        void setfecha(string Xfecha){
            fecha = Xfecha;
        }

        int getcosto() const{
            return costo;
        }
        void setcosto(int Xcosto){
            costo = Xcosto;
        }
        void Agregar(void);
        void Editar();
        void Borrar();
        void Buscar();
        

    private:
        string doctor;
        string especialidad;
        string prescripcionMedica;
        string observacion;
        string fecha;
        int costo;
};
#endif