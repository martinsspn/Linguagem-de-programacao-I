#include "sistema.h"
#include <fstream>
#include <map>

using namespace std;

Sistema::Sistema(){

}

void Sistem::displayMenu(){
	cout << "Bem vindo ao sistema de gestão do PetFera." << endl;
	cout << "Selecione uma opção:" << endl;
	cout << "1 - Cadastrar um novo animal" << endl;
	cout << "2 - Realizar venda" << endl;
	cout << "3 - Alterar dados dos animais cadastrados" << endl;
	cout << "4 - Consultas" << endl;
	cout << "5 - Cadastrar funcionários" << endl;
	cout << "0 - Encerrar programa" << endl;
	cin >> this->selecaoAtual;
}

void Sistema::displayClasses(){
	cout << "Selecione a classe do animal a ser cadastrado: " << endl;
	cout << "1 - Anfíbio" << endl;
	cout << "1 - Ave" << endl;
	cout << "1 - Mamífero" << endl;
	cout << "1 - Réptil" << endl;
	cin >> this->selecaoClasses;

}

void Sistema::setStructAnimal(){
	cout << "Digite o ID: ";
	cin >> this->animal._id;
	cout << "Digite o nome cientifico: "; 
	cin >> this->animal._nome_cientifico;
	cout << "Digite o nome batismo: "; 
	cin >> this->animal._nome_batismo;
	cout << "Digite a dieta: "; 
	cin >> this->animal._dieta;
	cout << "Digite o sexo[m/f]: "; 
	cin >> this->animal._sexo;
	cout << "Digite se é ameacado a extincao[true/false]: "; 
	cin >> this->animal._ameacadoExtincao;
	/*cout << "Digite o nome do veterinario: "; 
	cin >> this->animal._nome_veterinario;
	cout << "Digite o nome do tratador: "; 
	cin >> this->animal._nome_tratador;
	essa implementação requer outros elementos:
		map de funcionários*/	
}

void Sistema::operarSistema(){
	string classe;
	fstream dadosAnimais;
	fstream dadosFuncionarios;
	dadosAnimais.open("animais.csv");
	dadosFuncionarios.open("funcionarios.csv");
	map animais;
	map funcionarios;

	switch(this->selecaoAtual){
		case 0:
			break;

		case 1:
			Animal* animal;
			Sistema::displayClasses();
			Sistema::setStructAnimal();
			switch(this -> selecaoClasses){
				case 1:
					animal = new Anfibio();
				case 2:
					animal = new Ave();
				case 3:
					animal = new Mamifero();
				case 4:
					animal = new Reptil();
				default:
			}
			
		case 2:

		case 3:

		case 4:

		case 5:

		default:
			cout << "Seleção inválida. Por favor, selecione uma opção válida." << endl;
			Sistema::displayMenu();
	}
}

Sistema::~Sistema(){

}
