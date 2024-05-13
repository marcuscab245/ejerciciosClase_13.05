#include <iostream> 

using namespace std;

int main ()
{
    int h = 0;
    float m = 0, n = 0;
    string nombre;
    
    cout <<"Ingrese su nombre:\n";
    cin >> nombre; 

    cout <<"\nIngrese el numero de horas trabajadas esta semana: \n";
    cin >> h; 

    if(h <= 160)
    {
        m = h * 10;
        cout <<"\nSu salario este mes es de: \n";
        cout << m;
    }
    else if(h > 160)
    {
        m = ((h - 160) * 15) + (160 * 10);
        cout <<"\nSu salario este mes es de: ";
        cout << m <<"\n";
    }
    if (m <= 2000)
    {
        cout <<"\nSu salario luego de impuestos es: ";
        cout << m;
    }
    else if (m > 2000 && m <= 2200)
        {
            n = (m * (-0.2)) + m;
            cout <<"\nSu salario luego de impuestos es: ";
            cout <<n <<endl;
        }
    else if (m >= 2201)
    {
            n = (m * (-0.3)) + m;
            cout <<"\nSu salario luego de impuestos es: ";
            cout <<n <<endl;
    }
    return 0;
}