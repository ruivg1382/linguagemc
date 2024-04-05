#include <iostream>
using namespace std;

// Definição da classe 'Carro'
class Carro {
  private:
    int ano;
    string modelo;

  public:
    // Construtor
    Carro(int a, string m) : ano(a), modelo(m) {}

    // Método para exibir informações do carro
    void exibirInfo() {
      cout << "Modelo: " << modelo << " - Ano: " << ano << endl;
    }
};

int main() {
    // Criação de um objeto 'meuCarro' da classe 'Carro'
    Carro meuCarro(2020, "Toyota Corolla");
    meuCarro.exibirInfo();  // Chamada do método 'exibirInfo'
    
    return 0;
}
