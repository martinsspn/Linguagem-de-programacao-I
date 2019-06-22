#ifndef MAMIFERO_H
#define MAMIFERO_H

class Mamifero: protected Animal{
private:
	string cor_pelo;

public:
	Mamifero(string cor_pelo) : Animal(Veterinario veterinario, Tratador tratador, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, string nome_batismo);
	void setCor_pelo(string cor_pelo);
	string getCor_pelo();
	~Mamifero();
};

#endif
