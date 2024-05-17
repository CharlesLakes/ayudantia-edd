int maximo(tLista A,tLista B){
    int maximo_k = 0;

    A.moveToStart();
    B.moveToStart();

    while(A.currPos() < A.length() && B.currPos() < B.length()){
        if(A.getValue() == B.getValue()){
            maximo_k++;
            A.next();
            B.next();
        }else{
            B.next();
        }
    }

    return maximo_k;
}
