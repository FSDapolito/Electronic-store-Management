//
//  funzioni.h
//  
//  Magazzino
//  Created by Francesco D'apolito
//

#ifndef funzioni_h
#define funzioni_h

#include <stdio.h>
#include <stdlib.h>


#endif /* funzioni_h */


/*
 definisco una struttura dati chiamata prodotto,
 per poter inserire dati sul prodotto, anche  di tipo disomogeneo.
 */
struct prodotto
{
    char *nome,*specifica;
    int codice,quantità,quantità_venduta;
    float costo;
    
};


/*
 per una facilità d'uso di tale (struct prodotto),
 ne definisco un nuovo tipo affibbiandogli un nome più compatto e semplice.
 */

typedef struct prodotto Prodotto;

/*
 vado a definire una struct data, che conterrà varaibili del tipo giorno mese ed anno, in modo da creare poi un vettore di 10 elementi che sarano poi i "giorni in cui effettuo la gestione del magazzino"
 */
struct data
{
    int giorno, anno;
    char *mese;
};

typedef struct data Data;

void presentazione(void);

int scelta_del_giorno(int *);


void definizione_prodotti(Prodotto []);



void effettua_scelta(Prodotto []);


void specifiche_prodotto(Prodotto);


void prodotti_disponibili(Prodotto []);
 

void prodotti_venduti(Prodotto [] );


void elenco_prodotti(Prodotto []);

void definizione_giorni(Data []); 

