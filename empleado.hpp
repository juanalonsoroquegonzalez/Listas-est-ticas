#ifndef __EMPLEADO_H__
#define __EMPLEADO_H__
#include <iostream>
#include <string>

using namespace std;

class empleado
{
  private:
    int ClaveEmpleado;
    string Nombre;
    string Domicilio;
    float Sueldo;
    string ReportaA;

  public:
    empleado(int clave = 0, const string &nombre = "", const string &domicilio = "", float sueldo = 0.0, const string &reportaA = "");
    void imprime();
    void cambiarDomicilio(const string &nuevo);
    void cambiarReportaA(const string &nuevo);
    void actualSueldo(float nuevo);
    int getClaveEmpleado() const;
    const string &getNombre() const;

    empleado &operator=(const empleado &);
 
    bool operator==(const empleado &) const;
    bool operator!=(const empleado &) const;
    bool operator<(const empleado &) const;
    bool operator<=(const empleado &) const;
    bool operator>(const empleado &) const;
    bool operator>=(const empleado &) const;

    friend istream &operator>>(istream &, empleado &);
    friend ostream &operator<<(ostream &, const empleado &);
};



#endif // __EMPLEADO_H__