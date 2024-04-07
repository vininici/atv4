#include <iostream>
using namespace std;

void ler_vetores(int v1[], int v2[], int tam, int soma1, int soma2, float media1, float media2){
  for(int i = 0; i < tam; i++){
    cout<<"Digite um valor para o primeiro vetor: ";
    cin>>v1[i];
    soma1+=v1[i];
    media1=soma1/tam;
  }
  for(int i = 0; i < tam; i++){
    cout<<"Digite um valor para o segundo vetor: ";
    cin>>v2[i];
    soma2+=v2[i];
    media2=soma2/tam;
  }
}
void imprimir_vetores(int v1[], int v2[], int tam){
  for(int i = 0; i < tam; i++){
    cout<<v1[i]<<" ";
  }
  cout<<endl;
  for(int i = 0; i < tam; i++){
    cout<<v2[i]<<" ";
  }
}
float media_vetores(float media,float media1,float media2, int soma1, int soma2){

  return media;
}

int main(){
  const int tam = 5;
  int v1[tam], v2[tam], soma1 = 0, soma2 = 0;
  float media1 = 0, media2 = 0, media = 0;
  ler_vetores(v1, v2, tam, soma1, soma2, media1, media2);
  imprimir_vetores(v1, v2, tam);
  float resultado = media_vetores(media,media1,media2, soma1, soma2);
  cout<<resultado;
}