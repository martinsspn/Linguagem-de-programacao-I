#ifndef TRATADOR_H
#define TRATADOR_H

class Tratador: protected Funcionario{
private:

public:
	Tratador(int m_nivel_de_seguranca) : Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade);
	setM_nivel_de_seguranca(int m_nivel_de_seguranca);
	getM_nivel_de_seguranca();
	~Tratador();
};

#endif
