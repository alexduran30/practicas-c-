#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int opcion=0;
	do
		{
			cout<<"MENU PRINCIPAL"<<endl;
			cout<<"1- opcion uno"<<endl;
			cout<<"2- opcion dos"<<endl;
			cout<<"0- Salir"<<endl;
			cin>>opcion;
			switch(opcion){
			case 1: cout<<"eligio la opcion 1"<<endl;
			break;
			case 2: cout<<"eligio la opcion 2"<<endl;
			break;
			case 0: cout<<"eligio la opcion 0"<<endl;
			break;
			default: cout<<"no escogio una opcion corrrecta"<<endl;
		}
	} while(opcion !=0);
		
	return 0;
}

