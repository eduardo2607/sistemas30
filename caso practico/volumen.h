#include <math.h>
//declaraciones 

float volumenCubo (int arista);
float volumenCono(float radio, float altura);
float volumenEsfera(float radio);

//funciones
float volumenCubo(int arista) {
    return pow(arista,3);
}


float volumenCono(float radio, float altura) {
     return (3.1416 * pow(radio,2) * altura);
}

float volumenEsfera(float radio) {
     return (4 * 3.1416 * pow(radio,3) / 3);

}


