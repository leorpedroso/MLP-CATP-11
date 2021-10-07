// Exemplo de uso de containers (coleções abstratas) em C++
// Containers sao criados usando polimorfismo paramétrico
// compilar com -std=c++11
#include <iostream>
#include <vector> // em C++11 ha o tipo array - experimente e descubra a difereça!
#include "ex-1.cpp"

#define SIZE 10 

int main(){  
   using namespace std;

   vector<Pessoa> vetor; // cria um vetor para armazenar números inteiros 
   int i=0;

   // verifica tamanho atual (original)
   cout << "Tamanho do vetor = " << vetor.size() << endl;
 
   // coloca algumas pessoas no vetor
   // usando o construtor padrao
   cout << "Inserindo alguns elementos..." << endl; 
   for(i = 0; i < SIZE; i++){
      vetor.push_back(Pessoa()); // adiciona no final do vetor
   }
 
   // verifica tamanho atual
   cout << "Tamanho do vetor = " << vetor.size() << endl;

   // mostrando elementos adicionados
   for(i = 0; i < SIZE; i++){
      cout << "vetor[" << i << "] = " << vetor[i].toString() << endl;
   }

   // usando iterador para acessar os elementos do vetor 
   vector<Pessoa>::iterator elemento = vetor.begin(); 
   i=0;
   while( elemento != vetor.end()) {
      cout << " elemento " << i++ << " = " << elemento->toString() << endl;
      elemento++; 
   }
  
   return 0;
}
