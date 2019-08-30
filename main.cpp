#include <iostream>
#include "Empleado.h"

int main() {
    srand (time(NULL));
    
    Empleado empleado[3];

    empleado[0].setNombreEmpleado("Mike");
    empleado[0].setAnosExperiencia(2);
    empleado[0].setSalarioBase(1200000);
    empleado[1].setNombreEmpleado("Sebastian");
    empleado[1].setAnosExperiencia(3);
    empleado[1].setSalarioBase(1600000);
    empleado[2].setNombreEmpleado("Carolina");
    empleado[2].setAnosExperiencia(8);
    empleado[2].setSalarioBase(1800000);
    empleado[3].setNombreEmpleado("Emma");
    empleado[3].setAnosExperiencia(1);
    empleado[3].setSalarioBase(800000);
    empleado[0].reporteEmpleado();
    empleado[1].reporteEmpleado();
    empleado[2].reporteEmpleado();
    empleado[3].reporteEmpleado();
    

    return 0;
}