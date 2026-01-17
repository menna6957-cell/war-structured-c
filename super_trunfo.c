#include <stdio.h>

int main() {
    printf("O projeto estruturado WAR teve início.!\n");
    return 0;
}
/*Uma struct agrupa variáveis ​​relacionadas em um único tipo.*/
typedef struct {
char nome[30];
char cor[10];
int tropas;
} territorio
int main() {
    territorio mapa [5]; // Array of 5 territories
    // Register territories
    for (int=0; i<5; i++) {
        printf("\n territory %d\n", i + 1);
        printf("name: ");
        scanf("%s, mapa[i].nome");
        printf("army color: ");
        scanf("%s, mapa[i].cor");
        printf("number of troops: ");
        scanf("%d, &mapa[i].troops");
    }
    // Display territories
    printf("\n=== Registered territories ===\n");
    for (int i=0; i<5; i++){
        printf("%s | color: %s | Troops: %d\n",
        mapa[i].nome, mapa[i].cor, mapa[i].tropas);
    }
    return 0;
}
"Conceda-me memória enquanto o programa estiver em execução."
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} territorio;
// Function prototypes
void cadastrarTerritorios(territorio *mapa, int tamanho);
void exibirTerritorios(territorio *mapa, int tamanho);
void atacar(territorio *a, territorio *d);

int main(){
    int qtd: 5;
    srand(time(NULL));
    //Dynamic allocation
    Territorio *mapa = malloc(qtd * sizeof (territorio));

    cadastrarTerritorios(mapa, qtd);
    exibirTerritorios(mapa, qtd);

    int atk, def;
    printf("\n choose attacker index: ");
    scanf("%d, &atk");
    printf("choose defender index: ");
    scanf("%d, &def");

    atacar(&mapa[atk], &mapa[def]);
    exibirTerritorios(mapa, qtd);

    free(mapa);
    return 0;
}
// Register territories
void cadastrarTerritorios(Territorio *mapa, int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("\nTerritory %d\n", i);

        printf("name: ");
        scanf("%s", mapa[i]].nome);

        printf("color: ");
        scanf("%s", mapa[i].cor);

        printf("Troops: ");
        scanf("%d", &mapa[i].tropas);
    }
}
// Show map
void exibirTerritorios(Territorio *mapa, int tamanho; i++){
    printf("[%d] %s | %s | %d troops\n", i, mapa[i].nome, mapa[i].cor, mapa[i].tropas);
}
}
// Attack logic
void atacar(Territorio *a, Territorio *d){
    if(strcmp(a->cor, d->cor)==0){
printf("Attack dice: %d | defense dice: %d\n", da, dd);

if( da > dd){
    strcpy(d->cor, a->cor);
    d->tropas /= 2;

} else {
a->tropas--;
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct{
char nome[30];
char cor[10];
int tropas;
}
Territorio;

void sortearmissao(char missao[]);
int verificarVitoria(territorio *mapa, int tamanho, char missao[]);

int main(){
    srand(time(Null));

    territorio mapa[5]={
        {"A", "red", 5},
        {"B", "blue", 5},
        {"c", "red", 5},
        {"D", "green", 5},
        {"E", "blue", 5},
    };
    char missao[100];
    sortearMissao(missao);

    printf("Mission: %s\n", missao);

    if (verificarVitoria(mapa, 5, missao)) {
        printf("Mission completed!\n");
    } else {
        printf("Mission not completed yet.\n");
    }

    return 0;
}

void sortearMissao(char missao[]) {
    char missoes[][100] = {
        "Conquer all territories",
        "Control at least 3 territories"
    };

    int r = rand() % 2;
    strcpy(missao, missoes[r]);
}

int verificarVitoria(Territorio *mapa, int tamanho, char missao[]) {
    int count = 0;

    for (int i = 0; i < tamanho; i++) {
        if (strcmp(mapa[i].cor, mapa[0].cor) == 0)
            count++;
    }

    return count >= 3;
}
