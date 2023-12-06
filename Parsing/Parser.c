#include <stdio.h>
#include <string.h>

void parseOrgString(const char *orgString) {
    int i = 0;
    int level = 0;

    while (orgString[i] != '\0') {
        if (orgString[i] == '*') {
            // Conta o número de asteriscos para determinar o nível
            while (orgString[i] == '*') {
                level++;
                i++;
            }

            // Ignora espaços em branco após os asteriscos
            while (orgString[i] == ' ') {
                i++;
            }

            // Lê e imprime o título
            while (orgString[i] != '\n' && orgString[i] != '\0') {
                putchar(orgString[i]);
                i++;
            }

            printf(" (Nível %d)\n", level);
            level = 0;
        }

        // Ignora o restante da linha
        while (orgString[i] != '\n' && orgString[i] != '\0') {
            i++;
        }

        if (orgString[i] != '\0') {
            i++;
        }
    }
}

int main() {
    const char *orgString =
        "* Título Principal\n"
        "** Subtítulo\n"
        "*** Subtítulo Aninhado\n"
        "1. Item 1\n"
        "2. Item 2\n"
        "   - Marcador A\n"
        "   - Marcador B\n"
        "     - Submarcador I\n"
        "* TODO Tarefa 1\n"
        "** DONE Subtarefa\n"
        "   DEADLINE: <2023-12-31>";

    parseOrgString(orgString);

    return 0;
}
