#include <iostream>

int main() {
    // 1. Alocação dinâmica na Heap
    int *ptrDinamico = new int; 

    *ptrDinamico = 500; // Atribuindo valor ao espaço alocado

    std::cout << "Valor dinamico: " << *ptrDinamico << "\n";

    // 2. Liberação obrigatória da memória para evitar Memory Leak (Vazamento de memória)
    delete ptrDinamico; 

    // Boa prática: anular o ponteiro após deletar para evitar ponteiro selvagem (dangling pointer)
    ptrDinamico = nullptr; 

    // Alocação dinâmica de um array:
    int tamanho = 10;
    int *arrayDinamico = new int[tamanho]; // Aloca um array na heap
    
    // Liberação de arrays usa 'delete[]'
    delete[] arrayDinamico;
    arrayDinamico = nullptr;

    return 0;
}