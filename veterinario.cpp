#include <veterinario.h>

Veterinario::Veterinario(string m_crmv){
	this->m_crmv = m_crmv;
};

void Veterinario::setM_crmv(string m_crmv){
	this->m_crmv = m_crmv;
};

string Veterinario::getM_crmv(){
	return this->m_crmv;
};

Veterinario::~Veterinario(){
};
