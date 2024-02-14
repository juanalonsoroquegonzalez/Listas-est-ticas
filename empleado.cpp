#include "empleado.hpp"

empleado::empleado(int clave, const string &nombre, const string &domicilio, float sueldo, const string &reportaA)
    : ClaveEmpleado(clave), Nombre(nombre), Domicilio(domicilio), Sueldo(sueldo), ReportaA(reportaA)
{
}
 
void empleado::imprime()
{
    cout << endl << endl;
    cout << "Clave: " << ClaveEmpleado << "\n";
    cout << "Nombre: " << Nombre << "\n";
    cout << "Domicilio: " << Domicilio << "\n";
    cout << "Sueldo: " << Sueldo << "\n";
    cout << "Reporta: " << ReportaA << "\n";
    cout << endl << endl;
}

void empleado::cambiarDomicilio(const string &nuevo)
{
    Domicilio = nuevo;
    cout << "Domicilio cambiado exitosamente.\n";
}

void empleado::cambiarReportaA(const string &nuevo)
{
    ReportaA = nuevo;
    cout << "Persona que reporta cambiada exitosamente.\n";
}

void empleado::actualSueldo(float nuevo)
{
    Sueldo *= (1 + nuevo / 100);
    cout << "Sueldo actualizado exitosamente.\n";
}

int empleado::getClaveEmpleado() const
{
    return ClaveEmpleado;
}

const string &empleado::getNombre() const
{
    return Nombre;
}

empleado &empleado::operator=(const empleado &e)
{
    ClaveEmpleado = e.ClaveEmpleado;
    Nombre = e.Nombre;
    Domicilio = e.Domicilio;
    Sueldo = e.Sueldo;
    ReportaA = e.ReportaA;

    return *this;
}

bool empleado::operator==(const empleado &e) const
{
    return ClaveEmpleado == e.ClaveEmpleado;
}

bool empleado::operator!=(const empleado &e) const
{
    return ClaveEmpleado != e.ClaveEmpleado;
}

bool empleado::operator<(const empleado &e) const
{
    return ClaveEmpleado < e.ClaveEmpleado;
}

bool empleado::operator<=(const empleado &e) const
{
    return ClaveEmpleado <= e.ClaveEmpleado;
}

bool empleado::operator>(const empleado &e) const
{
    return ClaveEmpleado > e.ClaveEmpleado;
}

bool empleado::operator>=(const empleado &e) const
{
    return ClaveEmpleado >= e.ClaveEmpleado;
}

ostream &operator<<(ostream &os, const empleado &e)
{
    os << "Clave: " << e.ClaveEmpleado << endl;
    os << "Nombre: " << e.Nombre << endl;
    os << "Domicilio: " << e.Domicilio << endl;
    os << "Sueldo: " << e.Sueldo << endl;
    os << "Persona a reportar: " << e.ReportaA << endl;
    return os;
}

istream &operator>>(istream &is, empleado &e)
{
    cout << "Ingresa clave: ";
    is >> e.ClaveEmpleado;
    cout << "Ingresa nombre: ";
    is >> e.Nombre;
    cout << "Ingresa domicilio: ";
    is >> e.Domicilio;
    cout << "Ingresa sueldo: ";
    is >> e.Sueldo;
    cout << "Ingresa a quien reporta: ";
    is >> e.ReportaA;
    is.ignore();

    return is;
}
