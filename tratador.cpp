#include <tratador.h>

Tratador::Tratador(int m_nivel_de_seguranca) : Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade) {
	this->m_nivel_de_seguranca = m_nivel_de_seguranca;
};

void Tratador::setM_nivel_de_segurança(int m_nivel_de_segurança){
	this->m_nivel_de_segurança = m_nivel_de_segurança;
};

int Tratador::getM_nivel_de_segrança(){
	return this->m_nivel_de_segurança;
};

Tratador::~Tratador(){
};
