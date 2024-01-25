#include <iostream>
#include <cmath>
using namespace std;

void ingresarNumeros(int &n1, int &n2) {
	cout << "Ingrese un numero: "<<endl;
	cin >> n1;
	cout << "Ingrese otro numero: "<<endl;
	cin >> n2;
}

void sumar(int n1, int n2, int &resultado) {
	resultado = n1 + n2;
}

bool esPrimo(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void menu(int &opcion)
{
	cout << "Seleccione una opcion:" << endl;
	cout << "1. Ingresar numeros" << endl;
	cout << "2. Sumar numeros" << endl;
	cout << "3. Verificar si un numero es primo" << endl;
	cout << "4. Salir" << endl;
	
	cin >> opcion;
}
int main() {
	int opcion;
	int n1 = 0, n2 = 0, resultado;
	
	do 
	{
		menu(opcion);
		switch (opcion) {
		case 1:
			ingresarNumeros(n1, n2);
			break;
		case 2:
			sumar(n1, n2, resultado);
			cout << "La suma es: " << resultado << endl;
			break;
		case 3:
			cout << "Ingrese un numero para verificar si es primo: ";
			cin >> n1;
			if (esPrimo(n1)) {
				cout << n1 << " es primo." << endl;
			} else {
				cout << n1 << " no es primo." << endl;
			}
			break;
		case 4:
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opcion no valida. Intente de nuevo." << endl;
		}
	} while (opcion != 4);
	
	return 0;
}
