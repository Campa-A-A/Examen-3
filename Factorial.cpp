
#include<iostream>

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

bool menu1()
{
    string opcionUsuario;
    cout << endl
    << "Desea calcular el factorial de un numero?" << endl 
    << "Si --> y/Y" << endl  
    << "No --> n/N" << endl 
    << "Opcion: ";
    cin >> opcionUsuario;

    if (opcionUsuario != "y" && opcionUsuario != "Y" && opcionUsuario != "N" && opcionUsuario != "n")
    {
        cout << endl << "Ingreso invalido" << endl;
        return true;
    }
    return false;
}

int main()
{
    do
    {
        back1:
        string opcionUsuario;
        cout << endl
        << "Desea calcular el factorial de un numero?" << endl 
        << "Si --> y/Y" << endl  
        << "No --> n/N" << endl 
        << "Opcion: ";
        cin >> opcionUsuario;

        if (opcionUsuario != "y" && opcionUsuario != "Y" && opcionUsuario != "N" && opcionUsuario != "n")
        {
            cout << endl << "Ingreso invalido" << endl;
            goto back1;
        }

        if( opcionUsuario == "N" && opcionUsuario == "N" )
        {
            return 0;
        }
        
        int numeroFactorial;

        cout << "Ingrese el numero para calcular su factorial: ";
        cin >> numeroFactorial;

        cout << endl << "El factorial del numero " << numeroFactorial << " = " << factorial(numeroFactorial) << endl; 

    } while (true);
    
    return 0;
}