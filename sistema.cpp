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
			int _id;
			double _tamanho;
			string _classe;
			string _nome_cientifico;
			string _nome_batismo;
			string _dieta;
			char _sexo;
			bool _ameacadoExtincao;
			Veterinario _veterinario;
			Tratador _tratador;
			Animal* animal;
			Sistema::displayClasses();
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
			break;
	}
}

Sistema::~Sistema(){

}

//Criar arquivo caso não exista
//ler de um arquivo existente
//--salvar em um map 
//imprimir em um arquivo
//--imprimir de um map
