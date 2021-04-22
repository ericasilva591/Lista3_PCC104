// Exercicio2_JohnsonTrotter.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>
#include <list>

template <typename T>
void print_list(std::list<T>& v) {//função para imprimir um vetor
    for (auto i = v.begin(); i != v.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}


int maior(std::vector<int> v) {//função que retorna o maior número de um vetor
    int maior = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > maior) { maior = v[i]; }
    }
    return maior;
}

void JohnsonTrotter_permutation(int n) {
    
    std::list<int> perm;
    for (int i = 1; i <= n; i++) {
        perm.push_back(i);
    }
    print_list(perm);
       
    bool flag = false;
    while (!flag) {
        for (auto i = perm.begin; i != perm.end(); i++) {
            if ((*i < *i.front()) && (*i < *i.back())) {
                flag = true;
            }
        }
        if (flag) { break; }
        else {
            int maior_k;
            for (auto j = perm.begin; j != perm.end(); j++) {
                if ((*j.back() < *j) && (*j.front() < *j)) {
                    maior_k = *j;
                    std::cout << maior_k;
                }
            }

        }
    }
        
}


int main()
{
    int n = 3;
    JohnsonTrotter_permutation(n);

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
