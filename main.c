#include <stdio.h>

int main() {

    int workDays[4];
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    char *months[]= {
                    " ",
                    "Styczen",
                    "Luty",
                    "Marzec",
                    "Kwiecien",
                    "Maj",
                    "Czerwiec",
                    "Lipiec",
                    "Sierpien",
                    "Wrzesien",
                    "Pazdziernik",
                    "Listopad",
                    "Grudzien"
            };

    int numberOfSoldiers = 4;
    char *soldiers[] = {
        {"Mamla"},
        {"Karol"},
        {"Roman"},
        {"Hitler"},
    };
    for(int i=0; i<numberOfSoldiers; ++i) {
        printf("Ile dni pracuje %s?\n", soldiers[i]);
        scanf("%d", &workDays[i]);
    }

    for(int i=0; i<numberOfSoldiers; ++i) {
        int grafik[4];

        printf("W jakie dni pracuje %s?\n", soldiers[i]);
        for (int j = 0; j < workDays[i]; ++j) {
            scanf("%d", &grafik[i]);
        }
    }

    for(int i=0; i<numberOfSoldiers; ++i) {
        printf("%s.\n", soldiers[i]);
        for (int k = 1; k <= days[k]; ++k) {
            if (days[k] == grafik[i]) {
                printf("%d. ");
            }
        }
    }
};

