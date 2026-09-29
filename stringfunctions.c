#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char path[] = "data/files/notes.txt";

    // strcpy: copy
    strcpy(name, "Arslan");
    printf("%s\n", name);                 // Arslan

    // strcat: add to the end
    strcat(name, " Vatan");
    printf("%s\n", name);                 // Arslan Vatan

    // strlen: length
    printf("%lu\n", strlen(name));        // 12

    // strcmp: compare (0 = equal)
    if (strcmp(name, "Arslan Vatan") == 0) {
        printf("Same!\n");
    }

    // strstr: find a part
    if (strstr(path, ".txt") != NULL) {
        printf("It is a txt file\n");
    }

    // strrchr: last '/'
    char *file = strrchr(path, '/');
    printf("%s\n", file + 1);             // notes.txt

    return 0;
}