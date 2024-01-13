#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//definicion y asignacion de valores char
	char letra;
	char vocal_may, vocal_min, vocal_acento;
	letra='L';
	cout<<"imprimir la letra L:" <<letra<<endl;
	//letra="ll"; //Error por asignar mas de un caracter
	
	//asignando valores numericos
	letra=65; //ascii es la letra A.
	cout<<"imprimir ASCII 65:" <<letra<<endl;
	
	
	//imprimir codigo ascii las vocales may y min. con acentos
	//
	
	//vocales may
	vocal_may=65; //ascii es la letra A.
	cout<<"imprimir ASCII 65:" <<vocal_may<<endl;
	vocal_may=69; //ascii es la letra E.
	cout<<"imprimir ASCII 69 :" <<vocal_may<<endl;
	vocal_may=73; //ascii es la letra I.
	cout<<"imprimir ASCII 73 :" <<vocal_may<<endl;
	vocal_may=79; //ascii es la letra O.
	cout<<"imprimir ASCII 79 :" <<vocal_may<<endl;
	vocal_may=73; //ascii es la letra I.
	cout<<"imprimir ASCII 73 :" <<vocal_may<<endl;
	vocal_may=85; //ascii es la letra U.
	cout<<"imprimir ASCII 85 :" <<vocal_may<<endl;
	
	//vocales min
	vocal_min=97; //ascii es la letra a.
	cout<<"imprimir ASCII 97:" <<vocal_min<<endl;
	vocal_min=101; //ascii es la letra e.
	cout<<"imprimir ASCII 101:" <<vocal_min<<endl;
	vocal_min=105; //ascii es la letra i.
	cout<<"imprimir ASCII 105:" <<vocal_min<<endl;
	vocal_min=111; //ascii es la letra o.
	cout<<"imprimir ASCII 111:" <<vocal_min<<endl;
	vocal_min=117; //ascii es la letra a.
	cout<<"imprimir ASCII 117:" <<vocal_min<<endl;
	//vocales con acento
	vocal_acento=160; //ascii es la letra a.
	cout<<"imprimir ASCII 160:" <<vocal_acento<<endl;
	vocal_acento=161; //ascii es la letra a.
	cout<<"imprimir ASCII 161:" <<vocal_acento<<endl;
	vocal_acento=162; //ascii es la letra a.
	cout<<"imprimir ASCII 162:" <<vocal_acento<<endl;
	vocal_acento=163; //ascii es la letra a.
	cout<<"imprimir ASCII 163:" <<vocal_acento<<endl;
	//acento_may
	vocal_acento=181; //ascii es la letra a.
	cout<<"imprimir ASCII 181:" <<vocal_acento<<endl;
	vocal_acento=212; //ascii es la letra a.
	cout<<"imprimir ASCII 212:" <<vocal_acento<<endl;
	vocal_acento=214; //ascii es la letra a.
	cout<<"imprimir ASCII 214:" <<vocal_acento<<endl;
	vocal_acento=224; //ascii es la letra a.
	cout<<"imprimir ASCII 224:" <<vocal_acento<<endl;
	vocal_acento=233; //ascii es la letra a.
	cout<<"imprimir ASCII 233:" <<vocal_acento<<endl;
	
	//arroba
	letra=64; //ascii es la letra A.
	cout<<"imprimir ASCII 64 :" <<letra<<endl;
	//barra inclinada
	letra=92; //ascii es la letra A.
	cout<<"imprimir ASCII 92 :" <<letra<<endl;
	
	
	
	
	
	//declaracion de una cadena de caracter
	char nombre[]="DURAN";
	
	cout<<"imprimir la nombre '\':"<<nombre<<endl;
	cout<<"imprimir  nombre '\':"<<nombre[0]<<endl;
	cout<<"imprimir  nombre '\':"<<nombre[1]<<endl;
	cout<<"imprimir  nombre '\':"<<nombre[2]<<endl;
	cout<<"imprimir  nombre '\':"<<nombre[3]<<endl;
	cout<<"imprimir  nombre '\':"<<nombre[4]<<endl;
	nombre[0]='D';
	nombre[1]='U';
	nombre[2]='R';
	nombre[3]='A';
	nombre[4]='N';
	cout<<"imprimiendo la nombre '\':"<<nombre<<endl;
	return 0;
}

