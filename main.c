//  main.c
//
//  Magazzino
//
//  Created by Francesco D'Apolito
//

//questa libreria va inclusa perché ci è utile per quelle funzioni di input e output come ad esempio (printf,scanf)

#include <stdio.h>

//va incluso questo header file perchè andrò a definire tutti i prototipi  delle funzioni chiamanti al suo interno

#include "funzioni.h"

int main()
{
    //queste due variabili di tipo intero servono per contenre in giorno, il giorno scelto e in operazione, l'operazione se si vuole continuare o meno nella scelta dei giorni.
    
    int        giorno = 0,      operazione;
   
    //Prodotto è un tipo struct,  definito nell'header file funzioni.h, attraverso una typedef definita sempre nell'header , gli ho cambiato nome attribbuendole uno più comodo da usare
    //prodotti [20] invece è un vettore contenente 20 elementi, i quali sono i prodotti disponibili nel magazzino, di tipo Prodotto proprio perchè ogni prodotto contiene informazioni non omogenee (es. nome , prezzo..).
    
    Prodotto   prodotti[20];
    
    //Data è un tipo struct, definito nell'header file funzione.h, attraverso una typedef definita sempre nell'header, gli ho cambiato il nome attribbuendole uno più comodo da usare.
    
     Data      giorni [10];
     
    
     //tale funzione servirà a dare all'utente un benvenuto e alcune info sulla gestione.
    
    presentazione();
    
    //questa funzione definirà i prodotti che sono contenuti all'interno dello store.
    
    definizione_prodotti(prodotti);
    
    //questa funzioni andrà a definire i giorni in cui sarà gestito il magazzino se si vogliono cambiare basterà semplicemente intervenire in tale funzione e cambiare i giorni.
    
    definizione_giorni(giorni); 
    
    
    //è stato inserita in questo caso un'istruzione post condizionale do-while, dove prima vengono eseguite le istruzioni che formano il blocco dell'iterazione e dopo è eseguita la condizione (nel while) per stabilire se ripetere il ciclo oppure no, se è vera allora si ripete il ciclo.
    
    do{
        
        //qui la funzione scelta_del_giorno restituirà il valore di tipo intero che andrà ad essere posizionato nella variabile giorno (tipo intero), prendendo in input l'indirizzo di tale varibaile che poi andrà ad essere dereferenziato, e sarà il giorno scelto dall'utente.
        
            giorno = scelta_del_giorno(&giorno);
           
        //qui si andrà a stampare a video il giorno scelto, il mese e l'anno corrispondente.
        
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHAI SCELTO DI VISUALIZZARE I PRODOTTI DISPONIBILI IL\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%d\t\t%s\t\t%d\n\n",giorni[giorno-1].giorno,giorni[giorno-1].mese,giorni[giorno-1].anno);
            
        //la chiamata ad elenco prodotti dove viene passato come parametro l'array di prodotti porta ad una funzione dove verranno visualizzati i prodotti disponibili ed e poi possibile effettuare una scelta su tali prodotti.
        
            elenco_prodotti(prodotti);
            
                
        //è stato inserita in questo caso un'istruzione post condizionale do-while, dove prima vengono eseguite le istruzioni che formano il blocco dell'iterazione e dopo è eseguita la condizione (nel while) per stabilire se ripetere il ciclo oppure no, se è vera allora si ripete il ciclo
        
                do{
                    
                    printf("\n\nVUOI INSERIRE UN NUOVO GIORNO ?\n1.SI\t\t\t2.NO\n");
                    scanf("%d",&operazione);
                    
                }while (operazione < 0 || operazione > 3);
                    
    
    } while(operazione == 1);
    
    return 0;
}

