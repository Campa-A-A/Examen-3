
#include<iostream>
#include<string>

using namespace std;

int factorial(int n) {
    if (n <= 1)
    {
        return 1;        
    }
    else
    {
        return n * factorial(n - 1);
    }
}

class Usuario
{
    private: 
        float saldo;
        float saldoAnterior;

    public:
        Usuario(float saldoInicial)
        {
            this->saldo = saldoInicial;
        }

        void consultar()
        {
            cout << endl << "Su saldo es: " << saldo;
        }

        void retirarEfectivo(float dineroRetirado)
        {
            if (saldo < dineroRetirado)
            {
                cout << endl << "No se puede retirar esa cantidad" << endl;
                return;
            }
            saldoAnterior = saldo;
            saldo -= dineroRetirado;
            cout << endl << "Se retiro: " << dineroRetirado;
        }

        void saldoAntesDeRetiro()
        {
            cout << endl << "Saldo anterior: " << saldoAnterior << endl <<
            "Saldo Actual: " << saldo;
        }
        
        void menuCajero()
        {
            string opcion;
            cout << endl << "Que desea hacer?" << endl <<
            "Ver saldo :: 1 " << endl <<
            "Retirar dinero :: 2" << endl << 
            "Ver saldo antes de retiro :: 3" << endl <<
            "Opcion: ";
            cin>> opcion;

            if (opcion == "1")
            {
                consultar();
            }
            else if (opcion == "2")
            {
                float dinero;

                cout << endl << "Ingrese el dinero a retirar: ";
                cin >>dinero;

                retirarEfectivo(dinero);
            }
            else
            {
                saldoAntesDeRetiro();
            }
        }
};

int menuMain()
{
    string opcionUsuario;

    backMenuMain:
    cout << endl <<
    "Que desea usar?" << endl <<
    "Cajero automatico :: 1" << endl <<
    "Calcular un factorial :: 2" << endl <<
    "Salir del programa :: 3" << endl <<
    "Ingreso opcion: ";
    cin >> opcionUsuario;

    if (opcionUsuario != "1" && opcionUsuario != "2" && opcionUsuario != "3")
    {
        cout << endl << "Ingreso invalido" << endl;
        goto backMenuMain;
    }
    
    if (opcionUsuario == "1"){ return 1; }
    if (opcionUsuario == "2"){ return 2; }
    return 3;
}


int main()
{
    Usuario u1(20000);
    do
    {
        int goku = menuMain();

        if (goku == 2) 
        {
            int numeroFactorial;

            cout << "Ingrese el numero para calcular su factorial: ";
            cin >> numeroFactorial;

            cout << endl << "El factorial del numero " << numeroFactorial << " = " << factorial(numeroFactorial) << endl; 
        }
        else if ( goku == 1)
        {
            u1.menuCajero();
        }
        else
        {
            cout << endl << "Saliendo del programa" << endl;
            break;
        }
        
    } while (true);
    
    return 0;
}