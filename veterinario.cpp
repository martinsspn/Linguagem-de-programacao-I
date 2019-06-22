##include <veterinario.h>
using namespace std;

Veterinario::Veterinario(string m_crmv) : Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade){
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
