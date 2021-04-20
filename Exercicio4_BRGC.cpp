// Exercicio4_BRGC.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>

template <typename T>
void print_vector(std::vector<T>& v) {//função para imprimir um vetor
    for (auto i = v.begin(); i != v.end(); i++) {
        std::cout << *i << " ";
        std::cout << std::endl;
    }
    
}

std::vector<std::string> BRGC(int n) { // gera 2^n n-bit string, cada uma diferente da anterior, mudando apenas 1 elemento de uma para a outra 
    if (n == 1) //caso base
    {
        return { "0","1" };
    }
    
    //inicia L1 com n-1 elemento chando a função recursiva BRGC
    std::vector<std::string> L1 = BRGC(n - 1);
    std::vector<std::string> L2;
    std::vector<std::string> L3;
    std::vector<std::string> L;

    //Copia os dados de L1 par L2 em ordem reversa e adiciona "0" na frente de cada bit string
    for (int i = L1.size() - 1; i >= 0; i--) {
        L2.push_back("1" + L1[i]);
    }

    //Copia os dados de L1 par L3 e adiciona "1" na frente de cada bit string
    for (int i = 0; i < L1.size(); i++) {
        L3.push_back("0" + L1[i]);
    }
    
    //concatena L2 e L3 , nesta ordem para formar L
    auto it = L.begin();
    L.insert(it, L3.begin(), L3.end());
    it = L.end();
    L.insert(it, L2.begin(), L2.end());
    
    return L;

    //Relação de recorrência:
    //x(n) = x(n-1) + 2*(n-1)
    
}

int main()
{
    int n = 3;
    std::vector<std::string> v;

    v = BRGC(n);
    print_vector(v);

}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
