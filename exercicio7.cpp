#include <bits/stdc++.h>
using namespace std;

int soma(int vet[]){
    int maior=0, menor=INT_MAX;
    for(int i=0; i<3; i++){
        if(vet[i] > maior) maior = vet[i];
        if(vet[i] < menor) menor = vet[i];
    }
    return maior + menor;
}

int main(){
    int vet[3];
    for(int i=0; i<3; i++){
        cin >> vet[i];
    }
    cout << soma(vet) << endl;
    return 0;
}