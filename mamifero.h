#ifndef MAMIFERO_H
#define MAMIFERO_H

class Mamifero: protected Animal{
private:
	string cor_pelo;

public:
	Mamifero(string cor_pelo);
	void setCor_pelo(string cor_pelo);
	string getCor_pelo();
	~Mamifero();
};

#endif
