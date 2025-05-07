#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool state = true;
int remaining = 7;

int main(){
    char palavra[] = "incrivel";
    char show[100] = "";
    int length = strlen(palavra);
    for (int i = 0;i<length;i++){
        show[i] = '_';
    }

    char guess[100] = "";
    while (state == true && remaining > 0){
        printf("         ");
        printf("%s ", show);
        printf("tentativas: %i \n", remaining);
        printf("adivinhe:");
        scanf("%s", guess);
        remaining-=1;
        if (strlen(guess) == 1){
            for (int i = 0;i<length;i++){
                if (guess[0] == palavra[i]){
                    show[i] = palavra[i];
                }
            }
        }
        else if (strlen(guess) == strlen(palavra)){
            if (strcmp(palavra, guess) == 0){
                printf("vitoria!!!!");
                while (true){
                    
                }
                state = false;
            }
        }
        else{
            printf("tamanho indevido! \n");
        }
    }
    
    if (remaining == 0){
        printf("Perdedor.");
    }
    return 0;
}