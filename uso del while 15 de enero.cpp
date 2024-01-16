#include <iostream>
using namespace std;
/*
menu
1-opcion uno
2- opcion dos
0- salir 
*/
int main(int argc, char *argv[]) {
	int opcion;
	opcion=1;
	while(opcion !=0){
		cout<<"MENU PRINCIPAL"<<endl;
		cout<<"1- opcion uno"<<endl;
		cout<<"2- opcion dos"<<endl;
		cout<<"0- salir"<<endl;
		cin>>opcion;
		switch(opcion){
		case 1: cout<<"eligio la opcion 1"<<endl;
		break;
		case 2: cout<<"eligio la opcion 2"<<endl;
		break;
		case 0: cout<<"eligio la opcion salir"<<endl;
		break;
		default:cout<<"no escogio una opcion correcta";
		};
	};
	return 0;
}

