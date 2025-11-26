#include <locale.h>
#include <stdio.h>

int main(void) {
    if (setlocale(LC_ALL, "") == NULL) {
        fprintf(stderr, "Warning: failed to set locale; Hebrew text may not display correctly.\n");
    }

    printf("שלום\n");
    return 0;
}
