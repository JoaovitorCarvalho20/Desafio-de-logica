#include <iostream>

// Essa funçao vai ler e inverter a String
void inverterString(char str[])
{
    int tamanho = 0;
    // Esse laço vai calcular o tamanho da string
    while (str[tamanho] != '\0')
    {
        tamanho++;
    }

    // esse laço vai inverter os caracteres da String
    for (int i = 0; i < tamanho / 2; i++)
    {
        char temp = str[i];
        str[i] = str[tamanho - 1 - i];
        str[tamanho - 1 - i] = temp;
    }
}

int main()
{

    char minhaString[] = "Teste";

    // Exibir a string original
    std::cout << "String original: " << minhaString << std::endl;

    // chamar o metodo para inverter
    inverterString(minhaString);

    // mostra a string invertida
    std::cout << "String invertida: " << minhaString << std::endl;

    return 0;
}
