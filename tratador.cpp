#include <tratador.h>

Tratador::Tratador(int m_nivel_de_segurança){
	this->m_nivel_de_segurança = m_nivel_de_segurança;
};

void Tratador::setM_nivel_de_segurança(int m_nivel_de_segurança){
	this->m_nivel_de_segurança = m_nivel_de_segurança;
};

int Tratador::getM_nivel_de_segrança(){
	return this->m_nivel_de_segurança;
};

Tratador::~Tratador(){
};
