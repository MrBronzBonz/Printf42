# Printf42
study on libftprintf

prima di dare un' occhiata magari leggi questi consigli per riuscire da solo nell'impostare almeno il progetto:

la variabile va_list e' appunto una variabile che permette di tenere conto di piu' "oggetti".

considera che l' impostazione della funzione é int ft_printf(const char *QUALCOSA, ...) dove i tre punti indicano il numero di argomenti 
da stampare di printf e *QUALCOSA indica la stringa stessa che viene presa come lista.

esempio:

ft_printf("stampa %d e qui stampa %s", numero, stringa);

la parte inclusa tra "" é il nostro *QUALCOSA e anche la nostra lista, mentre | numero | e | stringa | sono (ad esempio) due variabili definite nel main
che servono come argomenti di printf (fanno parte dei ...).

prendi tutto questo con le pinze e spero di averti aiutato! GLHF
