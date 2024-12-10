#include <iostream>
#include <cassert> // biblioteca para asserções

// componente a ser testado
class OperacoesMatematicas {
public:
    int soma(int numero1, int numero2) {
        return numero1 + numero2;
    }

    int produto(int numero1, int numero2) {
        return numero1 * numero2;
    }
};

// função principal de teste
void testarOperacoesMatematicas() {
    // instância do componente
    OperacoesMatematicas operacoes;

    // caso de teste 1: testar soma
    int numero1 = 3, numero2 = 5;
    int somaEsperada = 8;
    int somaReal = operacoes.soma(numero1, numero2);
    assert(somaReal == somaEsperada); /*verifica se o resultado é o esperado*/

    // caso de teste 2: testar produto
    int produtoEsperado = 15;
    int produtoReal = operacoes.produto(numero1, numero2);
    assert(produtoReal == produtoEsperado);

    // caso de teste 3: testar soma com valores negativos
    numero1 = -2, numero2 = 4;
    somaEsperada = 2;
    somaReal = operacoes.soma(numero1, numero2);
    assert(somaReal == somaEsperada);

    // caso de teste 4: testar produto com zero
    numero1 = 0, numero2 = 7;
    produtoEsperado = 0;
    produtoReal = operacoes.produto(numero1, numero2);
    assert(produtoReal == produtoEsperado);

    // relatório de sucesso
    std::cout << "todos os testes passaram!" << std::endl;
}

int main() {
    // executa a função de teste
    testarOperacoesMatematicas();
    return 0;
}
