#include <mamifero.h>

using namespace std;

Reptil::Reptil(bool veneno, string tipo_veneno) : Animal(Veterinario veterinario, Tratador tratador, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, string nome_batismo){
	this->veneno = veneno;
	this->tipo_veneno = tipo_veneno;
};

void Reptil::setVeneno(bool veneno){
	this->veneno = veneno;
};

bool Reptil::getVeneno(){
	return this->veneno;
};

void Reptil::setTipo_veneno(string tipo_veneno){
	this->tipo_veneno = tipo_veneno;
};

string Reptil::getTipo_veneno(){
	return this->tipo_veneno;
};

Reptil::~Reptil(){
};
