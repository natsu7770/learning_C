#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main() {
    char input[10];
    struct Person p;

    /* Read input like "Gender=MALE" */
    if (scanf("Gender=%s", input) != 1) {
        return 0;
    }

    /* Map input string to enum */
    if (strcmp(input, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(input, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else if (strcmp(input, "OTHER") == 0) {
        p.gender = OTHER;
    } else {
        return 0;  // Invalid gender input
    }

    /* Print gender */
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
