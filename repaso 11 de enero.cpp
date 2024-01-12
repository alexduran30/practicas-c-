#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	short int numero_entero_p;
	unsigned short int numero_entero_p1;
	int numero_entero_p2;
	unsigned int numero_entero_p3 ; 
	float numero_decimal;
	double numero_decimal_g;
	//asignando valores limite de los tipos de datos//
	numero_entero_p=32767; //valor limite del tipo de dato 
	cout<<"numero entero pequeño:"<<numero_entero_p<<endl;
	
	numero_entero_p1=65535; //valor limite del tipo de dato 65535 65530
	cout<<"numero entero pequeño positivo:"<<numero_entero_p1<<endl;
	//asignar los valores maximos para undsigned int y int // 
	
	//valores de int
	numero_entero_p2=2147483647; //valor limite del tipo de dato 2147483647
	cout<<"numero entero:" <<numero_entero_p2<<endl;
	
	
	//valor de unsigned//
	numero_entero_p3=4294967295; //valor limite del tipo de dato 4294967295
	cout<<"numero entero positivo:"<<numero_entero_p3<<endl;

	
	
	cout <<"otro"
	//rango de datos short int -32768  al 32767//
	
	numero_entero_p5=32769; //el valor esta fuera del rango//
	
	numero_entero_p1 = numero_entero_p5; 
	cout<<"numero entero pequeño 2da asignacion:"<<numero_entero_p5<<endl;
	
	
	//
	numero_entero_p6=32760;
	numero_entero_p1 = numero_entero_p6
	cout<<"numero entero pequeño 3da asignacion:"<<numero_entero_p6<<endl;
	
	
	
	return 0;
}

