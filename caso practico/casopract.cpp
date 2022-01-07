#include <iostream>
#include <stdio.h>
#include "area.h"
#include "volumen.h"

using namespace std;


int main() {
	int c, d, e, f, g, h;
  
  printf("el siguiente programita nos permite obtener el area y volumen de distintas figuras geometricas ");
  
  printf("Dame la arista del cubo: ");
  cin>>c;
	 
  printf("Dame la altura del cono : ");
  cin>>d;
  printf("Dame el radio del cono: ");
  cin>>e;
  
  printf("Dame el radio de la esfera: ");
  cin>>f;
  
  printf("Dame la base del triangulo: ");
  cin>>g;
      
  printf("Dame la altura del triangulo: ");
  cin>>h; 

  cout<<"el volumen de un cubo en esta medida es = "<<volumenCubo(c)<<endl;
  cout<<"el volumen del cono es = "<<volumenCono(d, e)<<endl;
  cout<<"el volumen de la esfera = "<<volumenEsfera(f)<<endl;
  cout<<"el el area del triangulo es = "<<area(g, h)<<endl;

  return 0;
}
