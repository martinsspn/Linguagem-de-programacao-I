#include <anfibio.h>

Anfibio::Anfibio(Veterinario veterinario, Tratador tratador, int id = 0, string classe = "", string nome_cientifico = "", char sexo = '', double tamanho = 0, string dieta = "", string nome_batismo = "", int total_mudas, date ultima_muda){
	:Animal(Veterinario veterinario, double tamanho, string classe, string nome_cientifico, string nome_batismo, string dieta, char sexo, bool ameacadoExtincao, Tratador tratador);
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
