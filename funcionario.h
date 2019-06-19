#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario
{
	protected:
		int id;
		string nome;
		string cpf;
		short idade;
		short tipo_sanguineo;
		char fator_rh;
		string especialidade;
	public:
		virtual void consultar_funcionario() = 0;
		Funcionario();
		~Funcionario();
		
};

#endif
