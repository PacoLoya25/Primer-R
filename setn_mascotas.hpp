/**********************************************************************************************************************
 // FileName:        main.c
 // Program version: Dev-C++ 5.11
 // Company:         TECNM - ITCH
 // Description:     CLASES 2_4 EN C++
 // Authors:         ALFREDO CHACON
 // Updated:         04/2021
 //Nota:  			EL SIGUIENTE CODIGO MUESTRA EL USO DE CLASES CON ARREGLOS
 //					Y CAPTURANDO LOS DATOS
************************************************************************/
//23-09-2021
#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class Mascota{
	private:				//Encapsulamiento (como caja negra)
		string _name;				//DAtos o caracteristicas Abstraidas
		string _especie;
		string _sexo;
		int _edad;
		int _num;
		static int n_mascotas;			//ATRIBUTO DE LA CLASE
		
	public:
		Mascota( string ,string, string,int ); //Constructor de la Clase (inicializa atributos del objeto)
		Mascota();				//Constructor 2
		void comer();
		void correr();
		void jugar();
		void muestraDatos();
				
		// 				Getters & Setters	 Metodos constructores y modificadores
				
		void setMascota(string ,string ,string ,int );		//Setter Establecer valores a atributos cuando se requiera y no al inicio con el constructor
		void setName(string name);
		void captura();
		string getName();									//Getter para obtener valores de atributos
		int getEdad();
		static int getn_mascotas();
		static void setn_mascotas(int value); // Nuevo método estático para modificar n_mascotas
	
};
/************************************************
    DECLARACION DEL CONSTRUCTOR (INICIALIZA ATRIBUTOS DEL OBJETO)
************************************************/

Mascota::Mascota( string name,string especie, string sexo,int edad){
	this->_name= name;
	this->_especie= especie;
	this->_sexo= sexo;
	this->_edad= edad;
	
	n_mascotas++;
	this->_num=n_mascotas;
	std::cout<<"Se ha creado un objeto Mascota numero: "<<this->_num<<std::endl;
}

Mascota::Mascota(){
	this->_name="";
	this->_edad=0;
	n_mascotas++;
	this->_num=n_mascotas;
	std::cout<<"Se ha creado un objeto Mascota numero:"<<this->_num<<std::endl;	
}

/************************************************
    METODOS
************************************************/

void Mascota::comer(){
	cout<<"La mascota "<<this->_name<<"de la especie"<<this->_especie<<"esta comiendo"<<endl;
}
void Mascota::correr(){
	cout<<"La mascota "<<this->_name<<"de la especie"<<this->_especie<<"esta corriendo"<<endl;
}
void Mascota::jugar(){
	cout<<"La mascota "<<this->_name<<" de la especie "<<this->_especie<<" esta jugnado"<<endl;
}


void Mascota::muestraDatos(){
	cout<<endl<<"** Imprimiendo Datos **"<<endl;
	cout<<"Numero de objeto: "<<this->_num<<endl;
	cout<<"Nombre: "<<this->_name<<endl;
	cout<<"Especie: "<<this->_especie<<endl;
	cout<<"Sexo: "<<this->_sexo<<endl;
	cout<<"Edad: "<<this->_edad<<endl;
}

/************************************************
    SETTER
************************************************/
void Mascota::setName(string name){
	this->_name= name;
}

void Mascota::setMascota(string name,string especie,string sexo,int edad){
	this->_name = name;
	this->_especie = especie;
	this->_sexo = sexo;
	this->_edad =  edad;
}
void Mascota::captura(){
	cout<<endl<<"** Introduce Datos **"<<endl;
	cout<<"Dame el Nombre: ";
	cin>> this->_name;
	cout<<"Dame la Edad: ";
	cin>> this->_edad;
	cout<<"Que especie es: ";
	cin>> this->_especie;
	cout<<"Dime su sexo: ";
	cin>> this->_sexo;
}
/************************************************
    GETTER
************************************************/
string Mascota::getName(){
	return this->_name;
}
int Mascota::getEdad(){
	return this->_edad;
}
int Mascota::getn_mascotas(){
	return n_mascotas;
}

// Implementacion del nuevo metodo estatico para modificar n_mascotas
void Mascota::setn_mascotas(int value) {
    n_mascotas = value;
}
