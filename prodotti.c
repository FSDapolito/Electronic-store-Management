//
//  prodotti.c
//  
//  Magazzino
//  Created by Francesco D'apolito
//

#include <stdio.h>
#include "funzioni.h"


//Dato i 20 prodotti da definire ho scelto di creare un file a parte riguardo i nomi dei prodotti e i vari dati da aggiungere , in modo da rendere , anche in caso di sostituzione l'operazione molto più semplice

void definizione_prodotti(Prodotto prodotti[])
{
    
    //1o Prodotto
    prodotti[0].nome="Play station 5";
    prodotti[0].codice=1111;
    prodotti[0].quantità=4;
    prodotti[0].specifica="\n\n\nPLAY STATION 5\nConsole di marca SONY, memoria del dispositivo: 825GB, CPU: x86-64-AMD Ryzen zen 2-octa-core, 16 thread fino a 3.5 Ghz, GPU AMD Radeon RDNA 2, accelerazione ray-tracing hardware, RAM 16GB GDDR6, 448 GB/s, alimentazione 350W, connettività Ethernet, IEEE 802.1 1, Bluetooth 5.1\n\n\n";
    prodotti[0].costo=499.99F;
    prodotti[0].quantità_venduta=0;
    
    //2o Prodotto
    prodotti[1].nome="Video gioco Fifa 21";
    prodotti[1].codice=2222;
    prodotti[1].quantità=4;
    prodotti[1].specifica="\n\n\nFIFA 21\nVideogioco creato da EA SPORTS, creato per sitemi come Playstation4, Playstation 5, Xbox, e Pc, età consigliata dai 3 anni in su\n\n\n";
    prodotti[1].costo=69.99F;
    prodotti[1].quantità_venduta=0;
    
    //3o Prodotto
    prodotti[2].nome="Auricolari EarPods";
    prodotti[2].codice=3333;
    prodotti[2].quantità=4;
    prodotti[2].specifica="\n\n\nAURICOLARI EARPODS\nMarca Apple, connessione tramite bluetooth, senza fili,utilizzo raccomandato per musica e chiamate, 5h di riproduzione audio continua, custodia di ricarica, indicatore di ricarica, compatibilità con Mac\n\n\n";
    prodotti[2].costo=129.99F;
    prodotti[2].quantità_venduta=0;
    
    //4o Prodotto
    prodotti[3].nome="Echo Dot";
    prodotti[3].codice=4444;
    prodotti[3].quantità=4;
    prodotti[3].specifica="\n\n\nECHO DOT\nAltoparlante intelligente controllato tramite comandi vocali, senza dover utilizzare le mani, che si connette ad Alex per riprodurre musica, rispondere a domande, leggere le ultime notizie,può essere collegato anche a molte app e interagire con esse, grazie a 4 microfoni è in grado di sentirsi in qualsiasi angolo della casa, potenza di 1,2 W, connettività tramite Bluetooth, WiFi\n\n\n";
    prodotti[3].costo=24.99F;
    prodotti[3].quantità_venduta=0;
    
    //5o Prodotto
    prodotti[4].nome="Cavo Ultra HD HDMI";
    prodotti[4].codice=5555;
    prodotti[4].quantità=4;
    prodotti[4].specifica="\n\n\nCAVO ULTRA HD HDMI\nI contatti placcati in oro 24K offrono una migliore resistenza alla corrosione e un migliore trasferimento del segnale, conduttori in rame ad alta purezza che migliorano l'integrità del segnale e minimizzano la resistenza, copertura completa, compatibile con tutti i lettori Blue-ray, Tv real 3D, ricevitori AV con FULL HD, Ultra HD, supporta tutte le risoluzioni per Playstation, Xbox e 4k/Ultra HD\n\n\n";
    prodotti[4].costo=5.94F;
    prodotti[4].quantità_venduta=0;
    
    //6o Prodotto
    prodotti[5].nome="Smart Watch";
    prodotti[5].codice=6666;
    prodotti[5].quantità=4;
    prodotti[5].specifica="\n\n\nSMART WATCH\nConnettività wireless:BT5.0 BLE, cinturino: 15-22.5cm, regolabile & sostituibile, schermo touch screen da 1.3 pollici, dotato di 3 livelli di luminosità, ben visibile sotto la luce del sole, tempo in standby: 30 giorni, tempo di funzionamneto : 10 giorni, resistente all'acqua, sistema operativo supportato: Android 4.4 e iOS 8.1 o versioni successive\n\n\n";
    prodotti[5].costo=39.99F;
    prodotti[5].quantità_venduta=0;
    
    //7o Prodotto
    prodotti[6].nome="Telecomando Universale";
    prodotti[6].codice=7777;
    prodotti[6].quantità=4;
    prodotti[6].specifica="\n\n\nTELECOMANDO UNIVERSALE\nDimensioni: 16.7, 5, 1,4cm peso del prodotto circa 60g,il telecomando non necessita di programmazione, funziona perfettamente senza codice, buona trasmissione, per un corretto funzionamento assicurarsi che non ci siano ostacoli tra il telecomando e la tv ricevente, distanza remota fino a 10 metri\n\n\n";
    prodotti[6].costo=9.90F;
    prodotti[6].quantità_venduta=0;
    
    //8o Prodotto
    prodotti[7].nome="Mouse Wirless";
    prodotti[7].codice=8888;
    prodotti[7].quantità=4;
    prodotti[7].specifica="\n\n\nMOUSE WIRELESS\nPlug & play: non è necessario installare un driver, è sufficiente selezionare la diversa velocità per il cursore da 2600/2000/1600/1200/800DPI, il piccolo ricevitorre USB Nano si inserisce nel proprio PC e può rimanere li', risparmio energetico con la funzione di spegnimento automatico, wireless 2.4 GHz\n\n\n";
    prodotti[7].costo=10.59F;
    prodotti[7].quantità_venduta=0;
    
    //9o Prodotto
    prodotti[8].nome="Webcam FULL HD";
    prodotti[8].codice=9999;
    prodotti[8].quantità=4;
    prodotti[8].specifica="\n\n\nWEBCAM FULL HD\nWebcam 1080p ad alta definizione, offre video nitidi e fluidi per chat o registrazioni, compatibilità webcam USB universale, connettore USB 2.0, compatibile con più piattaforme e applicazioni, la webcam è plu and play universale e facile da usare Può essere utilizzata con PC, laptop, Smart TV\n\n\n";
    prodotti[8].costo=29.99F;
    prodotti[8].quantità_venduta=0;
    
    //10o Prodotto
    prodotti[9].nome="Tablet Samsung";
    prodotti[9].codice=1112;
    prodotti[9].quantità=4;
    prodotti[9].specifica="\n\n\nTABLET SAMSUNG\nGalaxy Tab A7 vanta un design dal profilo sottile e moderno, audio Dolby Atmos con 4 altoparlanti, dimensioni del prodotto: 0.7 x 24.76 x 15.74 cm, peso del prodotto 380 grammi, 8 processori , RAM da 3GB, scheda grafica integrata, sistema operativo Android 10\n\n\n";
    prodotti[9].costo=203.50F;
    prodotti[10].quantità_venduta=0;
    
    //11o Prodotto
    prodotti[10].nome="Ripetitore WI-FI";
    prodotti[10].codice=1113;
    prodotti[10].quantità=4;
    prodotti[10].specifica="\n\n\nRIPETITORE WI-FI\nVelocità di trasmissione fino a 300 Mbps con frequenza 2.4 Ghz, ideale per streaming video ed online gaming, è sufficiente la pressione del tasto WPS sull'access point/ router sorgente seguita dalla pressione del tasto Range Extender per mettere in funzione il dispositivo, la porta LAN è utilizzabile per la connessione di dispositivi ethernet, trasformando il prodotto in adattatore: indicato per Smart TV e Decoder\n\n\n";
    prodotti[10].costo=19.78F;
    prodotti[12].quantità_venduta=0;
    
    //12o Prodotto
    prodotti[11].nome="Processore AMD";
    prodotti[11].codice=1114;
    prodotti[11].quantità=4;
    prodotti[11].specifica="\n\n\nPROCESSORE AMD RYZEN 5 5600X\nNumero di processori: 6, velocità del processore: 3.7 Ghz, dimensioni del prodotto: 4 x 4 x 0.6 cm, peso 79.38 grammi\n\n\n";
    prodotti[11].costo=403.00F;
    prodotti[11].quantità_venduta=0;
    
    //13o Prodotto
    prodotti[12].nome="Scheda grafica da 4GB";
    prodotti[12].codice=1115;
    prodotti[12].quantità=4;
    prodotti[12].specifica="\n\n\nSCHEDA GRAFICA DA 4GB\nFornitore NVIDIA, risoluzione massima 7680 x 4320 pixel, 1410 MHz frequenza del processore, tipo di interfaccia PCI express x16, minima alimentazione di corrente 300W consumi 75W, larghezza 170mm, altezza 40mm\n\n\n";
    prodotti[12].costo=288.00F;
    prodotti[12].quantità_venduta=0;
    
    //14o Prodotto
    prodotti[13].nome="Mac book Air";
    prodotti[13].codice=1116;
    prodotti[13].quantità=4;
    prodotti[13].specifica="\n\n\nMAC BOOK AIR\nChip Apple M1 per un nuovo livello di performance della CPU, della GPU del machine learning, autonomia senza precedenti, batteria che dura fino a 18 ore, CPU 8-core fino a 3,5 volte piu rapida, pre gestire i progetti a velocità mai viste, GPU fino a 8-core, per una grafica fino a 5 volte più veloce nelle app e nei giochi più complessi, 8GB di memoria unificata, archiviazione SSD 512GB, tecnologia silenziosa senza ventole\n\n\n";
    prodotti[13].costo=1429.99F;
    prodotti[13].quantità_venduta=0;
    
    //15o Prodotto
    prodotti[14].nome="TV Samsung 65 pollici";
    prodotti[14].codice=1117;
    prodotti[14].quantità=4;
    prodotti[14].specifica="\n\n\nTV SAMSUNG 65 POLLICI\nForma dello schermo piatta, modalità di video supportate 1080p,2160p, tecnologia display LED, rapporto d'aspetto nativo 16:9, tipologia HD 4k ultra HD, A+, formato audio Dolby Digital, connettività: porte Usb , Bluetooth, Wi-Fi, collegamento ethernet LAN\n\n\n";
    prodotti[14].costo=578.00F;
    prodotti[14].quantità_venduta=0;
    
    //16o Prodotto
    prodotti[15].nome="Tastiera wireless";
    prodotti[15].codice=1118;
    prodotti[15].quantità=4;
    prodotti[15].specifica="\n\n\nTASTIERA WIRLESS\n3 in 1 tastiera Bluetooth 3.0, tastiera pieghevole Wirless con touchpad, adatta per portatili/Iphone/Android/Windows/Mac/iOS/iPadOS\n\n\n";
    prodotti[15].costo=34.99F;
    prodotti[15].quantità_venduta=0;
    
    //17o Prodotto
    prodotti[16].nome="Monopattino Elettrico";
    prodotti[16].codice=1119;
    prodotti[16].quantità=4;
    prodotti[16].specifica="\n\n\nMONOPATTINO ELETTRICO\nPortata max: 100kg, velocità massima : 25 km/h, autonomia: 65 km, sistema di frenata automatica, display LED, luci anteriori e posteriori, monopattino pieghevole, campanello e pneumatici gonfiabili\n\n\n";
    prodotti[16].costo=769.00F;
    prodotti[16].quantità_venduta=0;
    
    //18o Prodotto
    prodotti[17].nome="Spazzolino Elettrico";
    prodotti[17].codice=1122;
    prodotti[17].quantità=4;
    prodotti[17].specifica="\n\n\nSPAZZOLINO ELETTRICO\nDimensioni in cm : 25.4 x 17.6 x 10.2, ricaricabile , la batteria dura oltre 2 settimane, due modalità di spazzolamento: pulizia quotidiana e protezione gengivale, contenuto del prodotto: due manici, due testini di ricambio\n\n\n";
    prodotti[17].costo=70.92F;
    prodotti[17].quantità_venduta=0;
    
    //19o Prodotto
    prodotti[18].nome="Robot aspirapolvere e pulitore";
    prodotti[18].codice=1123;
    prodotti[18].quantità=4;
    prodotti[18].specifica="\n\n\nROBOT ASPIRAPOLVERE\nPeso del prodotto: 6kg, Dimensioni in cm : 46.2 x 39.6 x 45.8,il robot viene fornito con la sua stazione di auto-svuotamento che raccoglie e svuota il sacchetto del robot aspirapolvere per 30 giorni, è dotato della tecnologia TrueDetect 3D, che consente di evitare ostacoli anche in movimento, con la sua funzione Ozmo Pro, il dispositivo lava i pavimenti con grande efficienza\n\n\n";
    prodotti[18].costo=719.00F;
    prodotti[18].quantità_venduta=0;
    
    //20o Prodotto
    prodotti[19].nome="Asciugatrice SMART";
    prodotti[19].codice=1124;
    prodotti[19].quantità=4;
    prodotti[19].specifica="\n\n\nASCIUGATRICE SMART\nLG RC90V9AV2W Asciugatrice Smart a carica frontale 9kg, libera installazione, classe A+++, intelligenza artificiale, oblò in vetro temperato, Dimensioni in cm : 60x69x85, colore bianco, con la connettività WI-Fi puoi gestire da remoto il bucato, scaricare nuovi programmi di asciugatura e far comunicare l'asciugatrice con la lavatrice\n\n\n";
    prodotti[19].costo=785.42F;
    prodotti[19].quantità_venduta=0;
}
