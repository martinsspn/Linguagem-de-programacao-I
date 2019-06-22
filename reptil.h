#ifndef REPTIL_H
#define REPTIL_H

class Reptil: protected Animal{
private:
	bool veneno;
	string tipo_veneno;

public:
	Reptil(bool veneno, string tipo_veneno);
	void setVeneno(bool veneno);
	bool getVeneno();
	void setTipo_veneno(string tipo_veneno);
	string getTipo_veneno();
	~Reptil();
};

#endif
