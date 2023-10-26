#include <iostream>
#include <stdlib.h>
#include "setn_mascotas.hpp"
using namespace std;
/************************************************
    Inicializacion de cuenta
************************************************/
int Mascota::n_mascotas=0;
/************************************************
   MAIN
************************************************/
int main(int argc, char** argv) {
	Mascota::setn_mascotas(0);
	Mascota m[3];
  cout<<endl<<"Se crearon: "<<Mascota::getn_mascotas()<< " objetos";
	//Capturando Datos
	for (int i=0;i<3;i++){
		cout<<endl<<"  - Mascota N: "<<i+1<<" -";
		m[i].captura();
   }
	
	//Imprimiendo Datos
	for (int i=0;i<3;i++){
		m[i].muestraDatos();
    	
	}
	
		
	system("pause");
	return 0;
}
