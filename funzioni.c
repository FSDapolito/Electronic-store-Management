//
//  funzioni.c
// 
//  Magazzino
//  Created by Francesco D'apolito
//

#include "funzioni.h"

//questa funzione non restituisce nessun valore e non riceve nessun argomento, serve per introdurre in output un messaggio di benvenuto e specificare alcune info all'utente, ad esempio i giorni di gestione.

void presentazione(void)
{
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t *****   BENVENUTI NELL' ELECTRONIC ONLINE STORE *****\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t'' LO STORE SARA' GESTITO PER 10 GIORNI ''\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDAL 1-02-2021  AL 10-02-2021\n\n\t\t\t\t\t\t\t\t\t\t\t\t**********************************************************************************************************\n");
}


//questa funzione prende in input l'array di prodotti di tipo struct prodotto , definito nell header file (funzioni.h), permette all'utente proprio come dice il nome di effettuare delle scelte sull'elenco dei prodotti

void effettua_scelta(Prodotto prodotti [])
{
    //la variabile scelta conterrà il numero associato al prodotto che avrà scelto l'utente, mentre alla variabile vendita sarà dato il valore in basa alla scelta di vedere o meno i produtti che sono stati venduti.
    
    int scelta,vendita;
   
    printf("Inserisci il numero del prodotto che vuoi acquistare tra quelli visti nell'elenco \nSe non vuoi acquistare nulla inserisci 0 : ");
    scanf("%d", &scelta);
    
    //una volta scelto il prodotto va confrontato il valore di scelta con il numero associato per farci comprendere il numero che ha inserito l'utente relativo al prodotto scelto
    //non a caso viene inserito uno switch case, ovvero un costrutto a selezione multipla, proprio per implementare delle decisioni multiple
    
    switch (scelta) {
        case 1:
            printf("\n\nHAI SCELTO IL 1o PRODOTTO\n%s\n\n\n",prodotti[0].nome);
            
            //la funzione specifiche del prodotto prende come paramentro di chiamata il prodotto scelto per poi far decidere all'utente se vuole conoscere le specifiche su tale prodotto
            specifiche_prodotto(prodotti[0]);
            
            //viene decrementata la quantità disponibile del prodotto
            
            prodotti[0].quantità = prodotti[0].quantità - 1;
            
            //viene aumentata la quantità venduta del prodotto
            
            prodotti[0].quantità_venduta++;
            break;
            
            
        case 2:
            printf("\n\nHAI SCELTO IL 2o PRODOTTO\n%s\n\n\n",prodotti[1].nome);
            specifiche_prodotto(prodotti[1]);
            prodotti[1].quantità = prodotti[1].quantità - 1;
            prodotti[1].quantità_venduta++;
            break;
            
            
        case 3:
            printf("\n\nHAI SCELTO IL 3o PRODOTTO\n%s\n\n\n",prodotti[2].nome);
            specifiche_prodotto(prodotti[2]);
            prodotti[2].quantità = prodotti[2].quantità - 1;
            prodotti[2].quantità_venduta++;
            break;
            
            
        case 4:
            printf("\n\nHAI SCELTO IL 4o PRODOTTO\n%s\n\n\n",prodotti[3].nome);
            specifiche_prodotto(prodotti[3]);
            prodotti[3].quantità = prodotti[3].quantità - 1;
            prodotti[3].quantità_venduta++;
            break;
            
            
        case 5:
            printf("\n\nHAI SCELTO IL 5o PRODOTTO\n%s\n\n\n",prodotti[4].nome);
            specifiche_prodotto(prodotti[4]);
            prodotti[4].quantità = prodotti[4].quantità - 1;
            prodotti[4].quantità_venduta++;
            break;
            
            
        case 6:
            printf("\n\nHAI SCELTO IL 6o PRODOTTO\n%s\n\n\n",prodotti[5].nome);
            specifiche_prodotto(prodotti[5]);
            prodotti[5].quantità = prodotti[5].quantità - 1;
            prodotti[5].quantità_venduta++;
            break;
            
            
        case 7:
            printf("\n\nHAI SCELTO IL 7o PRODOTTO\n%s\n\n\n",prodotti[6].nome);
            specifiche_prodotto(prodotti[6]);
            prodotti[6].quantità = prodotti[6].quantità - 1;
            prodotti[6].quantità_venduta++;
            break;
            
            
        case 8:
            printf("\n\nHAI SCELTO L' 8o PRODOTTO\n%s\n\n\n",prodotti[7].nome);
            specifiche_prodotto(prodotti[7]);
            prodotti[7].quantità = prodotti[7].quantità - 1;
            prodotti[7].quantità_venduta++;
            break;
            
            
        case 9:
            printf("\n\nHAI SCELTO IL 9o PRODOTTO\n%s\n\n\n",prodotti[8].nome);
            specifiche_prodotto(prodotti[8]);
            prodotti[8].quantità = prodotti[8].quantità - 1;
            prodotti[8].quantità_venduta++;
            break;
            
            
        case 10:
            printf("\n\nHAI SCELTO IL 10o PRODOTTO\n%s\n\n\n",prodotti[9].nome);
            specifiche_prodotto(prodotti[9]);
            prodotti[9].quantità = prodotti[9].quantità - 1;
            prodotti[9].quantità_venduta++;
            break;
            
            
        case 11:
            printf("\n\nHAI SCELTO L 11o PRODOTTO\n%s\n\n\n",prodotti[10].nome);
            specifiche_prodotto(prodotti[10]);
            prodotti[10].quantità = prodotti[10].quantità - 1;
            prodotti[10].quantità_venduta++;
            break;
            
            
        case 12:
            printf("\n\nHAI SCELTO IL 12o PRODOTTO\n%s\n\n\n",prodotti[11].nome);
            specifiche_prodotto(prodotti[11]);
            prodotti[11].quantità = prodotti[11].quantità - 1;
            prodotti[11].quantità_venduta++;
            break;
            
            
        case 13:
            printf("\n\nHAI SCELTO IL 13o PRODOTTO\n%s\n\n\n",prodotti[12].nome);
            specifiche_prodotto(prodotti[12]);
            prodotti[12].quantità = prodotti[12].quantità - 1;
            prodotti[12].quantità_venduta++;
            break;
            
            
        case 14:
            printf("\n\nHAI SCELTO IL 14o PRODOTTO\n%s\n\n\n",prodotti[13].nome);
            specifiche_prodotto(prodotti[13]);
            prodotti[13].quantità = prodotti[13].quantità - 1;
            prodotti[13].quantità_venduta++;
            break;
            
            
        case 15:
            printf("\n\nHAI SCELTO IL 15o PRODOTTO\n%s\n\n\n",prodotti[14].nome);
            specifiche_prodotto(prodotti[14]);
            prodotti[14].quantità = prodotti[14].quantità - 1;
            prodotti[14].quantità_venduta++;
            break;
            
            
        case 16:
            printf("\n\nHAI SCELTO IL 16o PRODOTTO\n%s\n\n\n",prodotti[15].nome);
            specifiche_prodotto(prodotti[15]);
            prodotti[15].quantità = prodotti[15].quantità - 1;
            prodotti[15].quantità_venduta++;
            break;
            
            
        case 17:
            printf("\n\nHAI SCELTO IL 17o PRODOTTO\n%s\n\n\n",prodotti[16].nome);
            specifiche_prodotto(prodotti[16]);
            prodotti[16].quantità = prodotti[16].quantità - 1;
            prodotti[16].quantità_venduta++;
            break;
            
            
        case 18:
            printf("\n\nHAI SCELTO IL 18o PRODOTTO\n%s\n\n\n",prodotti[17].nome);
            specifiche_prodotto(prodotti[17]);
            prodotti[17].quantità = prodotti[17].quantità - 1;
            prodotti[17].quantità_venduta++;
            break;
            
            
        case 19:
            printf("\n\nHAI SCELTO IL 19o PRODOTTO\n%s\n\n\n",prodotti[18].nome);
            specifiche_prodotto(prodotti[18]);
            prodotti[18].quantità = prodotti[18].quantità - 1;
            prodotti[18].quantità_venduta++;
            break;
            
        case 20:
            printf("\n\nHAI SCELTO IL 20o PRODOTTO\n%s\n\n\n",prodotti[19].nome);
            specifiche_prodotto(prodotti[19]);
            prodotti[19].quantità = prodotti[19].quantità - 1;
            prodotti[19].quantità_venduta++;
            break;
            
        case 0:
            break;
    }
        
   
        printf("\n\nVUOI VEDERE I PRODOTTI VENDUTI PRECEDENTEMENTE ?\n\n1.SI\t2.NO\n");
        scanf("%d",&vendita);
    
        if(vendita == 1)
            
            //se l'utente vuole vedere i prodotti precedentemente venduti, dopo aver effettuato un confronto sulla scelta effettuata si chiama la funzione, passando come parametro l'array intero di prodotti
            
            prodotti_venduti(prodotti);
        
}


//questa funzione viene chiamata nella funzione effettua_scelta proprio per dare la possibilità all'utente una volta effettuata la scelta di potrer visualizzare le specifiche del prodotto e quindi prende che parametro il prodotto scelto, in questo caso chiamato x, sempre di tipo Prodotto.

void specifiche_prodotto(Prodotto x)
{
    int info;
    
    printf("VUOI CONOSCERE LE SPECIFICHE DEL PRODOTTO\n1.SI\t\t2.NO\n");
    scanf("%d",&info);
    
    //se vuole conoscere le specifiche del prodotto basta che l'utente inserisca 1 che corrisponde a si e si effettua un controllo sulla varibile chiamata info
    
    if(info == 1)
        printf("%s\n\n\n",x.specifica);
}



//questa funzione come indica il nome, serve per far visulizzare i prodotti disponibili

void prodotti_disponibili(Prodotto prodotti[])
{
    int i, numero_prodotti = 20 ;
    
    //qui va eseguito un ciclo for che va a scandire tutti e venti prodotti,portando in visualizzazione il nome del prodotto la quantità disponibile, il costo ed il codice
    
    for(i=0; i<numero_prodotti; i++)
    {
        //il confronto viene effettuato nel caso la quantità disponibile fosse esaurita, in quel caso non viene proprio mandato in output
        
        if(prodotti[i].quantità > 0)
            printf("\t\t\t\t\t\t\t\t\t\t%do PRODOTTO\n\n\n\t\t\t\t\t\t\t\t\t\t\tNOME = %s\t\t\t\t\t\tCODICE = %d\t\t\t\t\t\tDISPONIBILITA' = %d\t\t\t\t\t\tCOSTO = %.2f €\n\n",i+1,prodotti[i].nome,prodotti[i].codice,prodotti[i].quantità,prodotti[i].costo);
            printf("\n\n");
    }
   
}


//la funzione prodotti venduti, prende l'array di prodotti come parametro e va a stampare la quantità venduta nei giorni precedenti, nel caso in cui poi si dovesse ordinare, l'utente si rende conto dei dati sui prodotti venduti e va ad ordinare in base alla quantità da rimpiazzare

void prodotti_venduti(Prodotto prodotti[])
{
   
    int i,n_prod =20;
    
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tI PRODOTTI VENDUTI NEI GIORNI PRECEDENTI\n\n\n");
    
    //con un ciclo for va vista la quantità venduta che se supera lo 0 vuol dire che abbiamo venduti almeno un pezzo di quel prodotto
    
    for(i=0; i<n_prod; i++)
        if(prodotti[i].quantità_venduta > 0)
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t-----> %d\t %s\n",prodotti[i].quantità_venduta, prodotti[i].nome);
}

//elenco dei prodotti serve a chiamare le due funzioni prodotti disponibili ed effettua scelta passandogli il proprio argomento di chiamata, tale funzione viene chiamata nel main nel ciclo do-while relativo alle operazioni da effettuare

void elenco_prodotti(Prodotto prodotti [])
{
   
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tELENCO DEI PRODOTTI DISPONIBILI\t\t\t\t\t\t\t\n\n\n\n");
    
    //la funzione prodotti disponibili sta ad indicare che ci mostrerà un elenco dove sarà possibile scegliere uno tra i prodotti disponibili, parametro che passiamo alla funzione e l'intero array di prodotti
    
        prodotti_disponibili(prodotti);
    
    //effettua scelta permette di poter scegliere un prodotto tra i vari messi a disposizione
    
        effettua_scelta(prodotti);

}


//in modo molto semplice vado a definire la data in cui sarà gestito il magazzino, scelta a piacere (eventualmente modificabile) , in questo caso come si vede i primi 10 giorni di febbraio del 2021

void definizione_giorni (Data giorni [])

{
    int i;
    
    for(i=0; i<10; i++)
    giorni[i].mese="Febbraio";
    
    //l'anno è il 2021
    for(i=0; i<10; i++)
    giorni[i].anno = 2021;
    
    //i giorni vanno dal 1 al 10
    for(i=0; i<10; i++)
    giorni[i].giorno=i+1;
   
}

//la funzione chiamata nel main, prende come parametro un indirizzo che va dereferenziato in modo da poter accedere al valore di tale varibaile e poi restituisce un valore intero che da come si legge dal nome,  sarà il giorno scelto

int scelta_del_giorno(int *giorno)
{
    
    //è stato inserita in questo caso un'istruzione post condizionale do-while, dove prima vengono eseguite le istruzioni che formano il blocco dell'iterazione e dopo è eseguita la condizione (nel while) per stabilire se ripetere il ciclo oppure no, se è vera allora si ripete il ciclo
    do{
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tInserisci un giorno (compreso tra 1 e 10) : ");
        scanf("%d",giorno);
    }while(*giorno <=0 || *giorno > 10);
    
    
    return *giorno;    
}
