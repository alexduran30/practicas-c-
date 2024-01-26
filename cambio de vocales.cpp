#include <iostream>
using namespace std;

string palabra;

void cambiarVocales(char vocal, char numero)
{
	int site = 0;
	do
	{
		site = palabra.find(vocal, site);
		if (site != -1)
			palabra[site] = numero;
		
		//algo
		if (site != -1)
			site++;
	} while (site != string::npos);
}
int main(int argc, char *argv[]) {
	palabra = "murcielago";
	cambiarVocales('a', '4');
	cambiarVocales('e', '3');
	cambiarVocales('i', '1');
	cambiarVocales('o', '0');
	cambiarVocales('u', '5');
	cout << "Palabra modificada: " << palabra << endl;

	return 0;
}

