#include <iostream>
#include <stdio.h>

#include "volumen.h"

using namespace std;

int main() {
	int c, d, e, f;


  printf("Dame la arista del cubo: ");
  cin>>c;
	 
  printf("Dame la altura del cono : ");
  cin>>d;
  printf("Dame el radio del cono: ");
  cin>>e;
  
  printf("Dame el radio de la esfera: ");
  cin>>f;
    
  

  cout<<"el volumen de un cubo en esta medida es = "<<volumenCubo(c)<<endl;
  cout<<"el volumen del cono es = "<<volumenCono(d, e)<<endl;
  cout<<"el volumen de la esfera = "<<volumenEsfera(f)<<endl;

  return 0;
}
