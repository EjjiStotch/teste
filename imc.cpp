#include <iostream>
using namespace std;


float calculo_imc(float p, float a){
    if (p != 0 && a != 0){
    float imc = (p)/(a*a);
    return imc;
    }
}
int main()
{

    float altura;
    float peso;
    float imc;

    cout<< "Informe o peso: "<<endl;
    cin>> peso;
    cout<< "\nInforme a altura: "<<endl;
    cin>> altura;

    imc = calculo_imc(peso, altura);

    cout<< "\nO IMC e: "<<imc<<endl;

}
