#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
	private:
		int id;
		double tamanho;
		string classe;
		string nome_cientifico;
		string nome_batismo;
		string dieta;
		char sexo;
		bool ameacadoExtincao;
		Veterinario veterinario;
		Tratador tratador;	
	public:
		Animal(Veterinario veterinario, Tratador tratador, int id = 0, string classe = "", string nome_cientifico = "", char sexo = '', double tamanho = 0, string dieta = "", string nome_batismo = "");
		~Animal();
		virtual void consultar_animal() = 0;
		
};

#endif
