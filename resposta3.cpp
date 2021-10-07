// Exemplo de uso de containers (coleções abstratas) em C++
// Containers sao criados usando polimorfismo paramétrico
// compilar com -std=c++11
#include <iostream>
#include <vector> // em C++11 ha o tipo array - experimente e descubra a difereça!
#include <random>
#include "ex-1.cpp"

#define SIZE 10 

// Gera numero aleatorio entre 0 e 1
// https://stackoverflow.com/a/7560564
int get_random_num() {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> distr(0, 1); //entre 0 e 1

  return distr(gen);
}

int main(){  
   using namespace std;

   vector<Pessoa*> vetor;
   int i=0;

   // verifica tamanho atual (original)
   cout << "Tamanho do vetor = " << vetor.size() << endl;
    
   // coloca algumas pessoas no vetor
   // usando o construtor padrao
   cout << "Inserindo alguns elementos..." << endl; 
   for(i = 0; i < SIZE; i++){
     get_random_num() == 0 ? 
      vetor.push_back(new Aluno())
      : vetor.push_back(new Pessoa()); // adiciona no final do vetor
   }
 
   // verifica tamanho atual
   cout << "Tamanho do vetor = " << vetor.size() << endl;

   // mostrando elementos adicionados
   for(i = 0; i < SIZE; i++){
      cout << "vetor[" << i << "] = " << vetor[i]->toString() << endl;
   }

   // usando iterador para acessar os elementos do vetor 
   // elemento agora eh ponteiro para ponteiro, entao precisamos desreferenciar antes
   vector<Pessoa*>::iterator elemento = vetor.begin(); 
   i=0;
   while( elemento != vetor.end()) {
      cout << " elemento " << i++ << " = " << (*elemento)->toString() << endl;
      elemento++; 
   }
  
   return 0;
}
