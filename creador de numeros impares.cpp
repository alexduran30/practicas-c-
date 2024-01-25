#include <iostream>
using namespace std;


int aleatorio()
{
	return rand() % 100;//generador de numeros aleatorios
}
bool esImpar(int numero) {
	return numero % 2!=0;
}


int main(int argc, char *argv[]) {
	int n, c=0, num;
	cout<< "generar N numero impares; ingrese n: ";
	cin>>n;
	while(c<n)
	{
		num=aleatorio();
		if(esImpar(num))
		{
			c++;
			cout<<"impar["<<c<<"]:"<<num<<endl;
		}
	}
	return 0;
}

