// chieste numero caramelle e numero amici

#include <stdio.h> 
int main () {
    int num_caramelle, num_amici, resto, quoziente; 
    printf("Inserisci num_caramelle: ");
    
    scanf("%d", &num_caramelle);
    
    printf("Inserisci num_amici: ");
    
    scanf("%d", &num_amici);

    quoziente = num_caramelle / num_amici;
    resto = num_caramelle % num_amici;
    
    printf("Il numero di caramelle a testa è: %d\n", quoziente);
    printf("il numero di caramelle rimaste è: %d", resto);
 }
