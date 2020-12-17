
int main(void)
{
    int x=-27; // a x è assegnato -27
    int *p=&x; // p punta a x
    int b; //definisco la variabile b

    *p=-80; //assegno a ciò che punta p (x) il valore -80
    b=x; // assegno a b il valore contenuto in x

    return 0;
}
/*
int *p; //creo il puntatore p di tipo int
int x=3; //inizializzo una variabile x e gli assegno il valore 3
p=&x; // punto x con il puntatore p, ovvero assegno a p l'indirizzo di x
// & restituisce l'indirizzo della variabile
// *p restituisce la variabile puntata
*/
