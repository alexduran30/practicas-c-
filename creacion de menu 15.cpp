#include <iostream>
#include <cctype> //necesario para tolower
using namespace std;

int main(int argc, char *argv[]) {
	char caracter;
	cout<<"ingrese una letra: ";
	cin>>caracter;
	// Buscar la funcion para convertir en minuscula un caracter.
	caracter= tolower (caracter);	
	switch(caracter)

	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':cout<<"es vocal";
	break;
	default: cout<<"no es una vocal";
	};
	return 0;
}

