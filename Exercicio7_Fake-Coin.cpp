// Exercicio7_Fake-Coin.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>

template <typename T>
void print_vector(std::vector<T>& v) {//função para imprimir um vetor
    for (auto i = v.begin(); i != v.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void fake_coin(std::vector<T> v) {
    
    int n = v.size();
    if (n == 1) {
        std::cout << "A moeda falsa eh a " << v[0] << std::endl;
    }
    else {
        float soma1 = 0;
        float soma2 = 0;
        int m = n / 2;
        if ((n %= 2) == 0) {//se for par 
            std::vector<T> v1, v2;
            for (int i = 0; i < m; i++) {
                soma1 += v[i];
                v1.push_back(v[i]);
            }
            for (int j = m; j < v.size(); j++) {
                soma2 += v[j];
                v2.push_back(v[j]);
            }
            if (soma1 < soma2) {
                fake_coin(v2);
                
            }
            else if (soma1 > soma2) {
                fake_coin(v1);
            }

        }
        else { //se for impar repete uma moeda nos dois subconjuntos
            std::vector<T> v1, v2;
            for (int i = 0; i <= m; i++) {
                soma1 += v[i];
                v1.push_back(v[i]);
            }
            for (int j = m; j < v.size(); j++) {
                soma2 += v[j];
                v2.push_back(v[j]);
            }
            if (soma1 < soma2) {
                fake_coin(v2);
            }
            else if (soma1 > soma2) {
                fake_coin(v1);
            }
            else {
                std::cout << "A moeda falsa eh a: " << v[m] << std::endl;
                
            }

        }
    }
}


int main()
{
    std::vector<float> v = { 0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.2,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1};
       
    std::cout << "Vetor de moedas: ";
    print_vector(v);
       
    fake_coin(v);
    
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
