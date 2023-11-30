#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int scelta, punteggio=0;
    bool ricomincia=true;
    char utente [20];
    
    
printf ("Il gioco è un classico Domanda/Risposta\nL'utente dovrà scegliere una delle 3 risposte.\n\n");

    printf ("1- Iniziare una nuova partita\n");
    printf ("\n2- Uscire dal gioco\n\n");
    scanf ("%d", &scelta);
    
    if (scelta==1){
    printf ("Inserisci un Nome Utente\n\n");
    scanf ("%s", utente);}
    
        else if (scelta==2){
        return 0;}
    
    do{
        int risposta;
        printf ("\n\nQual è il colore del cielo durante il giorno?\n");
        printf ("\n1- Rosso\n");
        printf ("2- Blu\n");
        printf ("3- Verde\n");
        scanf ("%d", &risposta);
        
        if (risposta==1){
        printf ("Errato\n");
        }
        else if (risposta==2){
        printf ("Esatto\n");
        punteggio++;
        }
        else if (risposta==3){
        printf ("Errato\n");    
        }
        
        printf ("\nQuale pianeta è più vicino al sole?\n");
        printf ("1- Marte\n");
        printf ("2- Venere\n");
        printf ("3- Giove\n");
        scanf ("%d", &risposta);
        
        if (risposta==1){
            printf ("Errato\n");
        }
        else if (risposta==2){
            printf ("Esatto\n");
            punteggio++;
        }
        else if (risposta==3){
            printf ("Errato\n");
        }
        
        printf ("\nQuale animale ha le ali e può volare?\n");
        printf ("1- Elefante\n");
        printf ("2- Pesce\n");
        printf ("3- Uccello\n");
        scanf ("%d", &risposta);
        
        if (risposta==1){
            printf ("Errato\n");
        }
        else if (risposta==2){
            printf ("Errato\n");
        }
        else if (risposta==3){
            printf ("Esatto\n");
            punteggio++;
        }
        
        printf ("\nQuanti giorni ci sono in una settimana?\n");
        printf ("1- 5 Giorni\n");
        printf ("2- 7 Giorni\n");
        printf ("3- 1 Giorni\n");
        scanf ("%d", &risposta);
        
        if (risposta==1){
            printf ("Errato\n");
        }
        else if (risposta==2){
            printf ("Esatto\n");
            punteggio++;
        }
        else if (risposta==3){
            printf ("Errato\n");
        }
        
        printf ("\nQual è la capitale del Giappone?\n");
        printf ("1- Pechino\n");
        printf ("2- Tokyo\n");
        printf ("3- Seul\n");
        scanf ("%d", &risposta);
        
        if (risposta==1){
            printf("Errato\n");
        }
        else if (risposta==2){
            printf ("Esatto\n");
            punteggio++;
        }
        else if (risposta==3){
            printf ("Errato\n");
        }
 

printf("\n\nIl punteggio finale di %s è: %d\n", utente, punteggio);  

int risp;

    printf("\nVuoi ricominciare o uscire?\n");
    printf("1- Ricomincia\n");
    printf("2- Esci\n");
    scanf("%d", &risp);

    if (risp==1) {
        ricomincia=true;
    } else if (risp == 2) {
        return 0;
    }
} while (ricomincia);

return 0;}
