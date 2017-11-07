/* Programa - Primesort - THIAGO LACERDA BENITES - RA 177634 */
#include <stdio.h>
int ehprimo(int a);

int main(){
    int vetor[200100];
    int i, j, z, n;
    j = 0;
    z = 0;
    n = 0;
    
    for(i=0; z!=1; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] == (-1)){
            z = 1;
        }
        j++;
    }
    
    j = (j-1);
    
    int correto[j];
    
    for(i=0; i<(j); i++){
        correto[i] = vetor[i];
    }
    
    int nprimo[j];
    
    for(i=0; i<j; i++){
        if(ehprimo(correto[i])){
            //do nothing
        }
        else{
            nprimo[n] = correto[i];
            n++;
        }
    }
    
    int correto_nprimo[n];
    
    for(i=0; i<(n); i++){
        correto_nprimo[i] = nprimo[i];
    }
    
    int aux;
    
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(correto_nprimo[i] < correto_nprimo[j]){
                aux = correto_nprimo[i];
                correto_nprimo[i] = correto_nprimo[j];
                correto_nprimo[j] = aux;
            }
        }
    }
    
    for(i=0; i<n; i++){
        printf("%d\n", correto_nprimo[i]);
    }
        
    return 0;
}

int ehprimo(int a){
    int i;
    i = 0;
    if(a == 1){
        return 0;
    }
    if(a == 2){
        return 1;
    }
    if(a%2 == 0){
        return 0;
    }
    for(i=3; i<=(a/2); i+=2){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
    
}