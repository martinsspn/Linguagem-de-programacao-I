#include <anfibio.h>

Anfibio::Anfibio(int total_mudas, date ultima_muda){
	this->total_mudas = total_mudas;
	this->ultima_muda = ultima_muda;
};

void Anfibio::setTotal_mudas(int total_mudas){
	this->total_mudas = total_mudas;
};

int Anfibio::getTotal_mudas(){
	return this->total_mudas;
};

Anfibio::~Anfibio(){
};
