#ifndef ANFIBIO_H
#define ANFIBIO_H

class Anfibio: protected Animal{
private:
	int total_mudas;
	date ultima_muda;
public:
	Anfibio(int total_mudas = 0, date ultima_muda = 0): Animal(Veterinario veterinario, Tratador tratador, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, string nome_batismo);
	~Anfibio();
	void setTotal_mudas(int total_mudas);
	int setTotal_mudas();
};

#endif
