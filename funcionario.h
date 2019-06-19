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
		virtual void f() = 0; //função genérica pra dizer que a classe é abstrata. Tem que ver o que tanto o veterinário quanto o tratador podem fazer
		Funcionario();
		~Funcionario();
		
};

#endif