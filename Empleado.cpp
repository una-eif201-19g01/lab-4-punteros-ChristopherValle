/*
 * =====================================================================================
 * Christopher Valle Peraza 
 * Universidad Nacional de Costa Rica
 * =====================================================================================
 */
#include "Empleado.h"
#include <iomanip>
#include <iostream>


double Empleado::aumentoSalario(){
    if(*anosExperienciaPTR >= 1 && *anosExperienciaPTR < 3){
        *salarioPTR += (((salarioBasePTR * 2)/100) * *anosExperienciaPTR);
    }
    if(*anosExperienciaPTR >= 3){
        *salarioPTR += (((salarioBasePTR * 5)/100) * *anosExperienciaPTR);
    }
}
void Empleado::revisionAleatoria(){
    if (*revisionPTR = true){
        *revisionPTR = false;
    }
    else{
        *revisionPTR = true;
    }
}
Empleado::Empleado(){
    nombreEmpleado = "null";
    anosExperiencia = 0;
    identificacion = rand() % 100 + 1;
    salarioBase = 0;
    salario = 0;
    revision = true;
    nombreEmpleadoPTR = &nombreEmpleado;
    anosExperienciaPTR = &anosExperiencia;
    identificacionPTR = &identificacion;
    salarioBasePTR = &salarioBase;
    salarioPTR = &salario;
    revisionPTR = &revision;
}
Empleado::Empleado(std::string nombre, int anos, double salarioB){
    nombreEmpleado = nombre;
    anosExperiencia = anos;
    identificacion = rand() % 100 + 1;
    salarioBase = salarioB;
    salario = salarioB;
    revision = true;
    nombreEmpleadoPTR = &nombreEmpleado;
    anosExperienciaPTR = &anosExperiencia;
    identificacionPTR = &identificacion;
    salarioBasePTR = &salarioBase;
    salarioPTR = &salario;
    revisionPTR = &revision;
}
std::string Empleado::reporteEmpleado(){
    std::string rev;
    if (*revisionPTR = true){
        rev = "Si";
    }
    else if (*revisionPTR = false){
        rev = "No";
    }
    std::string reporte = "Empleado # [" + *identificacionPTR + "]\n\tNombre [" + *nombreEmpleadoPTR + "]\n\tAños de experiencia [" +
            *anosExperienciaPTR + "]\n\tSalario Inicial [" + *salarioBasePTR + "]\n\tSalario Acumulado [" + *salarioPTR + 
            "]\n\tNecesita revision [" + rev + "]\n";
    return reporte;
}
std::string Empleado::getNombre(){
    return *nombreEmpleadoPTR;
}
int Empleado::getAnosExperiencia(){
    return *anosExperienciaPTR;
}
double Empleado::getSalarioBase(){
    return *salarioBasePTR;
}
void Empleado::setNombreEmpleado(std::string nombre){
    nombreEmpleado = nombre;
}
void Empleado::setSalarioBase(int anos){
    anosExperiencia = anos;
}
void Empleado::setAnosExperiencia(double salario){
    salarioBase = salario;
}

