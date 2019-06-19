#ifndef ANFIBIO_H
#define ANFIBIO_H

class Anfibio: protected Animal{
private:
	int total_mudas;
	date ultima_muda;
public:
	Anfibio();
	~Anfibio();	
};

#endif
