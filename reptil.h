#ifndef REPTIL_H
#define REPTIL_H

class Reptil: protected Animal{
private:
	bool veneno;
	string tipo_veneno;

public:
	Reptil();
	~Reptil();
};

#endif
