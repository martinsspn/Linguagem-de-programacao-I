#ifndef SISTEMA_H
#define SISTEMA_H

/**@brief classe referente à manipulação de informações, cadastro e venda de animais*/
class Sistema{
private:
	/**@brief Guarda a seleção do menu*/
	int selecaoAtual;
	int selecaoClasse;
	struct Animal{
		int _id;
		double _tamanho;
		string _classe;
		string _nome_cientifico;
		string _nome_batismo;
		string _dieta;
		char _sexo;
		bool _ameacadoExtincao;
		Veterinario _veterinario;
		Tratador _tratador;
	} animal;
	
public:
	Sistema();
	void displayMenu();
	void displayClasses();
	void operarSistema();
	void setStructAnimal();
	~Sistema();
};

#endif
