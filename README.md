<p align="center">
  <img src="https://github.com/Gavvio/Esercizi_Informatica_1/blob/main/risorse/ascii-art-text-ade8.png" alt="ADE8"/>
</p>
#  Esercizi risolti e commentati di Informatica 1, ADE8 e C

Passaggi per riuscire da soli a scrivervi, assemblarvi e testare un esercizio in ADE8:
  - scaricate dalla pagina moodle di informatica i 3 file ai link: "emulator.zip", "Assemblatore per il processore di ADE8" (ovviamente scegliete il link in base al vostro sistema operativo), "logisim-generic-2.7.1.jar"
  - scompattate il file emulator.zip (per i meno pratici tasto destro sul file, estrai, scegliere il percorso di destinazione) in modo da avere accesso ai file contenuti al suo interno
  - a questo punto dovreste avere a disposizione i file: "a8a.exe", "ADE8v1.1.circ" e "logisim-win-2.7.1.exe" (o simile), consiglio di creare una cartella e raggrupparli perchè andranno usati ogni volta che si farà un esercizio con ADE8
  - per cominciare a scrivere il vostro esercizio consiglio di creare all'interno della cartella creata con i file da usare sempre una cartella dedicata agli esercizi e magari per tenere le cose ordinate una cartella dedicata per ogni singolo esercizio (c'è un motivo)
  - una volta creato tutto possiamo scrivere il nostro esercizio, si può tranquillamente scrivere un file di testo (tasto desto - nuovo -documento di testo) va bene usare il notepad classico che ha ogni pc, notepad++ come dice il prof oppure banalmente si può generare il file e poi decidere di aprirlo con visual studio o visual studio code
  - procediamo a scrivere l'esercizio in assembly (con le notazioni che includono quindi la definizione di etichette e la scrittuta dei comandi in forma testuale) finchè non ci sembra sia coerente e completo
  - a questo punto apriamo il prompt dei comandi (ricercare in windows prompt o cmd) e facciamo due passaggi, il primo sarà navigare fino alla cartella in cui abbiamo scritto l'esercizio (si fa scrivendo il comando "cd "(ricordate lo spazio) seguito dal percorso della cartella (se fate fatica a recuperare il percorso aprite la cartella e lo ottenete trascinando il nome della cartella che compare nel percorso sopra al contenuto direttamente dentro al prompt) e premete invio, vedrete che il percorso in cui vi trovate cambierà
  - una volta che da terminale (prompt) vi trovate nella cartella in cui avete scritto l'esercizio dovete trascinare sul prompt(o copiarvi il percorso) il file "a8a.exe", poi mettete uno spazio e dopo trascinate sul prompt il file che avete scritto, se tutto è andato bene l'assemblatore non darà errori e vi comparirà un file "logisim.txt" nella cartella in questione
  - non vi resta che aprire il file "logisim-win-2.7.1.exe" (o simile), una volta dentro selezionare: file, open e aprire il file (che dovreste aver messo nella prima cartella) "ADE8v1.1.circ"
  - l'ultimo passaggio è caricare il file generato dentro alla memoria (tasto destro sulla memoria, load image e aprite il file "logisim" generato prima, a questo punto basta andare su simulate e scegliere se si vuole la tick frequency (cambia la velocità a cui verrà eseguito il programma) oppure selezionare ticks enabled e premere su "run", controllare se il risultato ottenuto è quello che ci si aspettava
  - ultime note che lascio sono che: un buon modo per scoprire gli errori nel codice è quello di "debuggare" ossia in questo caso far eseguire il codice a velocità piuttosto bassa e vedere se passo passo succede qualche cosa che non torna, infine spiego solo che l'idea di creare una cartella per ogni file è dovuta al fatto che il file generato dall'assemblatore ha sempre lo stesso nome (logisim.txt), mettendolo in cartelle diverse non ci si confonde
  - 

## Potreste trovare dei commenti all'interno dei file di testo scritti in Assembly, sono contrassegnati da un ";" prima del commento e non impattano in alcun modo sul codice ma possono aiutarvi a capire meglio
<p align="center">
  <img src="https://github.com/Gavvio/Esercizi_Informatica_1/blob/main/risorse/ascii-art-text-c.png" alt="ADE8"/>
</p>
Passaggi per riuscire a scrivere, debuggare e infine caricare su olj gli esercizi in C:

  - scaricate Visual Studio (non visual studio code) e assicuratevi di scaricare anche il pacchetto per c++
  - all'apertura fate "crea un nuovo progetto" e selezionate "progetto vuoto in c++"
  - una volta aperto siete già pronti a procedere, tasto destro su esplora soluzioni/ file di origine o file di risorse come preferite, aggiungi, nuovo elemento
  - mi raccomando di chiamare il file col nome che volete (o più probabilmente col nome richiesto dall'esercizio) ma ricordatevi di mettere il formato ".c" togliendo il ".cpp" che viene proposto di default
  - consiglio di non fare un progetto nuovo ogni volta ma creare diversi file in un unico progetto ricordandosi di commentare il "main" di ogni singolo file quando si passa al prossimo (il commento multilinea inizia con /* e finisce con */)
  - su olj ora non vi resta che caricare il vostro file (dopo aver cancellato o commentato il main) e compilare per testare i vari risultati ottenuti
  
  
