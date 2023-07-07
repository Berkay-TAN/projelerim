#include <stdio.h>

int countWords(char *cumle);

int main() {
    char cumle[1000];

    printf("Bir cümle girin: ");
    fgets(cumle, sizeof(cumle), stdin);

    int wordCount = countWords(cumle);

    printf("Kelime Sayısı: %d\n", wordCount);

    return 0;
}

int countWords(char *cumle) {
    int count = 0;
    int kelime = 0;  

    for (int i = 0; cumle[i] != '\0'; i++) {

        if (cumle[i] == ' ' || cumle[i] == '\t' || cumle[i] == '\n') {
            kelime = 0;
        }

        else if (kelime == 0) {
            kelime = 1;
            count++;
        }
    }

    return count;
}

