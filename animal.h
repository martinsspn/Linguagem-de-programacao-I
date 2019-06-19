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
		virtual void f()//função genérica pra dizer que a classe é abstrata. Tem que ver o que todos os animais podem fazer
		Animal();
		~Animal();
		
};

#endif