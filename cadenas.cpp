#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string Lyu;
	Lyu = "I love c++";
	//concatenando una cadena con la variable
	cout<< "la cadea es: " + Lyu <<endl;
	//para saber la longitud de la cadena (saber cuantas letres y espacios hay)
	cout << "la longitud de la cadena es: " << Lyu.length()<<endl;
	//
	cout<< "esta vacio?" << Lyu.empty()<<endl; 
	Lyu.append("!"); //agrega algo despues de la cadena
	cout << "la cadena modificada e: "<<Lyu<<endl;  // muestra la cadena modificada
	string lyu_2;
	lyu_2= "I love too";
	Lyu.swap(lyu_2); //intercambia de datos de cadenas
	cout<<"cambie la cadena modificada como: "<<Lyu<<endl;

	
	
	int site;
	site = Lyu.find("l", 0);
	cout<< "la posicion donde aparece l en la cadena es: "<< site<<endl;
	site = Lyu.find("oo", 0);
	cout << "la pocicion donde aparece oo en la cadena es: "<<site<<endl;
	site = 0;
	
	return 0;

	do	{
		site= Lyu.find("o" , site);
		if (site == -1)
			cout << "busqueda completada, no hay otros elementos "<<endl;
		else
			cout<<"la pocicion donde aparece o en la cadena es: "<<site <<endl;
	} while(site != 0);
	
}

/* dividiendo enter 3 */ 
/*
a = 4
e = 3
i = 1
o = 0
u = 5*/
