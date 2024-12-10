# Teste de Componente
## Teste de soma<br/>
### Parte 1: Definição do Componente
```cpp
#include <iostream>
using namespace std;

class OperacoesMatematicas {
public:
    int soma(int a, int b) {
        return a + b;
    }

    int produto(int a, int b) {
        return a * b;
    }
};
```
> Definição da classe OperacoesMatematicas.<br/>
Implementação dos métodos soma e produto.<br/>

<br/>

### Parte 2: Configuração dos Testes
```cpp
#include <cassert>

int main() {
    OperacoesMatematicas op;
    int numero1 = 5, numero2 = 3;
    int somaEsperada = 8, produtoEsperado = 15;
```
> Definição das entradas: numero1, numero2.<br/>
Definição dos resultados esperados: somaEsperada, produtoEsperado.

<br/>

### Parte 3: Execução dos Testes
```cpp
    // teste de soma
    int resultadoSoma = op.soma(numero1, numero2);
    assert(resultadoSoma == somaEsperada);

    // teste de produto
    int resultadoProduto = op.produto(numero1, numero2);
    assert(resultadoProduto == produtoEsperado);
```
> Chamada dos métodos soma e produto com as entradas definidas.</br>
Verificação com assert: Compara os resultados com os esperados.

<br/>

### Parte 4: Relatório Final
```cpp
cout << "Todos os testes passaram!" << endl;
    return 0;
}
```
> Exibição da mensagem de sucesso: Se todos os testes passarem, a mensagem é exibida.
