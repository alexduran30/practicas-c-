#include <iostream>
using namespace std;
//declaracion de variables globales
int n1, n2;
//funcion para recibir un parametro y determinar si el parametro es par o no es par o impar, si es par que me muestre true y si no que me muestre false


bool esPar(int numero)
{
	return numero%2==0;
}
 
int sumar()
{
	return n1+n2;
}
int multiplicar()
{
	return n1*n2;
}

void ingresar()
{
	cout<< "ingresar el primer numero: ";
	cin>>n1;
	cout<< "ingresar el segundo numero: ";
	cin>>n2;
}
int main(int argc, char *argv[]) {
	
	ingresar();
	
	cout<<"la suma de los dos numeros es: "<<sumar()<<endl;
	cout<<"la multiplicacion de los dos numeros es: "<<multiplicar()<<endl;
	if(esPar(n1))
		cout<<"numero "<<n1<<" true"<<endl;
	else
		cout<<"numero "<<n1<<" false"<<endl;
	if(esPar(n2))
		cout<<"numero "<<n2<<" true"<<endl;
	else
		cout<<"numero "<<n2<<" false"<<endl;
	return 0;
}

