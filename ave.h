#ifndef AVE_H
#define AVE_H

class Ave: protected Animal{
private:
	double tamanho_bico;
	double envergadura_asas;
public:
	Ave(double tamanho_bico, double envergadura_asas);
	~Ave();
	void setTamanho_bico(double tamanho_bico);
	double getTamanho_bico();
	void setEnvergadura_asas(double envergadura_asas);
	double getEnvergadura_asas();
};

#endif
