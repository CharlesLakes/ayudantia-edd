void tLista::moveToPos(unsigned int posicion){
    unsigned int salto = 2;
    if(posicion < 0 || posicion > listSize) return;
    curr = head;
    pos = 0;
    while(pos + salto <= posicion){
        curr = curr->salto; // Salto de tamaño 2
        pos += salto;
    }

    while(pos < posicion){
        curr = curr->sig;
        pos++;
    }
}