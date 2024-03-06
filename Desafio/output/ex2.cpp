#include <iostream>


//função para verificar se o numero pertence a sequencia
bool pertenceASequenciaFibonacci(int numero) {
    int a = 0, b = 1, soma;

    while (a <= numero) {
        if (a == numero) {
            return true;  
        }
        soma = a + b;
        a = b;
        b = soma;
    }

    return false;  
}

int main() {
    int numero;

    
    std::cout << "Digite um numero para verificar se pertence a sequencia de Fibonacci: ";
    std::cin >> numero;

    // Verifica e exibir resultado
    if (pertenceASequenciaFibonacci(numero)) {
        std::cout << numero << " pertence a sequencia de Fibonacci." << std::endl;
    } else {
        std::cout << numero << " nao pertence a sequencia de Fibonacci." << std::endl;
    }

    return 0;
}
