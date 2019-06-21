#ifndef SISTEMA_H
#define SISTEMA_H

/**@brief classe referente à manipulação de informações, cadastro e venda de animais*/
class Sistema{
private:
	/**@brief Guarda a seleção do menu*/
	int selecaoAtual;
	int selecaoClasse;

public:
	Sistema();
	void displayMenu();
	void displayClasses();
	void operarSistema();
	~Sistema();
};

#endif
