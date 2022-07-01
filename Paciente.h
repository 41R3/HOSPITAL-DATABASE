#include <string>
using namespace std;

#ifndef _PACIENTE_H_
#define _PACIENTE_H_

class Paciente{
    public:
        Paciente(string Xnombre, int Xedad, int Xdni,string Xgenero, string Xdireccion, string Xenfermedad,
        string Xtratamiento,string Xcuarto,string Xinternacion){
            nombre = Xnombre;
            edad= Xedad;
            dni=Xdni;
            genero = Xgenero;
            direccion = Xdireccion;
            enfermedad = Xenfermedad;    
            tratamiento = Xtratamiento;
            cuarto=Xcuarto; 
            internacion=Xinternacion;      
        }

        string getnombre() const{
            return nombre;
        }
        void setnombre(string Xnombre){
            nombre = Xnombre;
        }

        int getedad()const{
            return edad;
        }
        void setedad(int Xedad){
            edad=Xedad;
        }

        int getdni()const{
            return dni;
        }
        void setdni(int Xdni){
            dni=Xdni;
        }

        string getgenero() const{
            return genero;
        }
        void setgenero(string Xgenero){
            genero = Xgenero;
        }

        string getdireccion() const{
            return direccion;
        }
        void setdireccion(string Xdireccion){
            direccion = Xdireccion;
        }

        string getenfermedad() const{
            return enfermedad;
        }
        void setenfermedad(string Xenfermedad){
            enfermedad = Xenfermedad;
        }

        string gettratamiento() const{
            return tratamiento;
        }
        void settratamiento(string Xtratamiento){
            tratamiento = Xtratamiento;
        }

        string getcuarto() const{
            return cuarto;
        }
        void setcuarto(string Xcuarto){
            cuarto=Xcuarto;
        }

        string getinternacion()const{
            return internacion;
        }
        void setinternacion(string Xinternacion){
            internacion=Xinternacion;
        }

    

    private:
        string nombre;
        string genero;
        string enfermedad;
        string direccion;
        int dni;
        int edad;
        string cuarto;
        string tratamiento;
        string internacion;
};

#endif