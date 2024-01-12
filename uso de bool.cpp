//estamos poniendo en practica el uso de bool
//donde la unica forma en la que sea FALSO es si el valor es CERO

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//declaracion uso de bool
	bool b0;
	b0=true;
	cout<<"variable con valor TRUE:"<<b0<<endl;
	b0=false;
	cout<<"variable con valor FALSE:"<<b0<<endl;
	//asignacion de valores numericos
	//si es cero es falso, si es diferente de cero es verdadero
	b0=0; //el valor se vera como falso
	cout<<"variable con valor 0:"<<b0<<endl;
	b0=-100; //el valor se vera como true.
	cout<<"variable con valor -100:"<<b0<<endl;
	return 0;
}
