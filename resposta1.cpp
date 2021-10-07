#include <iostream>
#include "ex-1.cpp"
#include <utility> // swap()
#include <string>

template<typename E>
void sort(E* container, int size) {

	for (int i=0; i<size; i++) {
		for (int j=i+1; j<size; j++){
			if (container[j].compares_to(container[i]) < 0){
				std::swap(container[j], container[i]);
			}
		}
	}
}

int main() {
	// Exercicio 1
	// Originalmente eh chamado o toString() de Pessoa
	// Mudando o metodo toString() de Pessoa para virtual resolve isto
	Pessoa* p1 = new Pessoa("Ana Paula", Pessoa::FEMININO, time(0));
  Pessoa* p2 = new Aluno("Jose Silva", Pessoa::FEMININO, time(0), "01001010", Aluno::GRADUACAO);
	
	std::cout << p1->toString();
  std::cout << p2->toString();

	// Exercicio 4
	// Gera uma lista de 10 pessoas com um nome com duas letras iniciais aleatorias
	// e entao ordena a lista em ordem alfabetica
	srand (time(NULL));

	Pessoa container[10];
	for (int i=0; i<10; i++) {
		string initial = "";
		char c = ('A' + rand()%26);
		char d = ('a' + rand()%26);
		initial += c;
		initial += d;
		container[i].set_nome(initial);
		cout << container[i].toString() << endl;
	}

	sort(container, 10);

	// mostrando elementos adicionados
   for(int i = 0; i < 10; i++){
      cout << "vetor[" << i << "] = " << container[i].toString() << endl;
   }

	return 0;
}