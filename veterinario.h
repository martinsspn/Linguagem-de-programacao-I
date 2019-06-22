#ifndef VETERINARIO_H
#define VETERINARIO_H

using namespace std;
class Veterinario: protected Funcionario{
private:
	string m_crmv;
public:
	Veterinario::Veterinario(string m_crmv) : Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade);
	setM_crmv(string m_crmv);
	getM_crmv();
	~Veterinario();
};

#endif
