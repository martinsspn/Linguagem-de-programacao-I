#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
	private:
		int id;
		string classe;
		string nome_cientifico;
		char sexo;
		double tamanho;
		string dieta;
		VETERINARIO veterinario;
		TRATADOR tratador;
		string nome_batismo;
	public:
		Animal();
		~Animal();
		virtual void consultar_animal() = 0;
		
};

#endif
