/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string>

class Empleado {
protected:
    std::string* nombreEmpleadoPTR{nullptr}, nombreEmpleado;
    int* anosExperienciaPTR{nullptr}, anosExperiencia;
    int* identificacionPTR{nullptr}, identificacion;
    double* salarioBasePTR{nullptr}, salarioBase;
    double* salarioPTR{nullptr}, salario;
    bool* revisionPTR{nullptr}, revision;
    double aumentoSalario();
    void revisionAleatoria();
public:
    Empleado::Empleado();
    Empleado(std::string nombre, int anos, double salarioBase);
    std::string reporteEmpleado();
    std::string getNombre();
    int getAnosExperiencia();
    double getSalarioBase();
    void setNombreEmpleado();
    void setSalarioBase();
    void setAnosExperiencia();
    
    
    
};


#endif //EMPLEADOPUNTEROS_EMPLEADO_H
