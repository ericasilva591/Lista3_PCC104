// Exercicio9.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "Exercicio9ArvoreBinaria.cpp"

int main()
{
    BinarySearchTree<int> binary_tree;

    std::cout << (binary_tree.insert(9) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (binary_tree.insert(10) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (binary_tree.insert(20) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (binary_tree.insert(3) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (binary_tree.insert(5) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (binary_tree.insert(7) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (binary_tree.insert(9) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (binary_tree.insert(2) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (binary_tree.insert(11) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (binary_tree.insert(8) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    
    binary_tree.print();
    std::cout << std::endl;

    std::cout << (binary_tree.search(15) == SearchInfo::Found ? "Found" : "NotFound") << std::endl;
    std::cout << (binary_tree.search(2) == SearchInfo::Found ? "Found" : "NotFound") << std::endl;

   
    std::cout << (binary_tree.del(7) == DeleteInfo::Deleted ? "Deleted" : "NotDeleted") << std::endl;

    binary_tree.print();
    std::cout << std::endl;

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
