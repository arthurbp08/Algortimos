#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("As strings digitadas são iguais.\n");
    } else {
        printf("As strings digitadas são diferentes.\n");
    }

    return 0;
}
