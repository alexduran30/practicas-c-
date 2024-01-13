#include <iostream>
using namespace std;
//#define PI 3.1416


int main(int argc, char *argv[]) {
	const float PI = 3.1416; //definimos una constante llamada pi 
	double diametro, circunferencia;
	circunferencia=40;
	diametro=circunferencia/PI;
	cout<<"el diametrode la circunferencia=40 : "  <<diametro;//<<endl;
	//PI=0// error por asignacion a una variable de solo lectura
	return 0;
}

