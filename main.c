#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
        char vanyjevavera[13];

        printf("Koja je Vanyjeva vera?:");
        fgets(vanyjevavera, sizeof(vanyjevavera), stdin);


        while (1){
            if(strstr(vanyjevavera, "pravoslavlje") != NULL) {
                printf("tacan odgovor\n");
                break;
             }
                printf("pogresan odgovor\n");

        }

        return 0;
}

