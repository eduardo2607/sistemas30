//librerias predeterminadas del sistema
#include <iostream>
#include <stdio.h>
//librerias creadas por el equipo 2(said, eduardo y salvador)
#include "area.h"
#include "volumen.h"
#include "longitud.h"


using namespace std;


int main() {
	//variables para las figuras geometricas
	int c, d, e, f, g, h, i, j, k, l;
  //explicacion del programita
  printf("\n \n");
  printf("\n \n");
  printf("\n \n");
  printf("\n \n");
  printf("\n \n");
  printf(" El siguiente programita nos permite obtener el area y volumen de distintas figuras geometricas, \n asi como calcular la distancia entre 2 puntos en un plano cartesiano: \n" );
  //funcion para pausar la pantalla
  system ("pause");
  //funcion para limpiar la pantalla
  system ("cls");
  
  //dato necesario para obtener el volumen de un cubo
  printf("Dame la arista de un cubo: ");
  cin>>c; 
  //datos necesarios para obtener el volumen de un cono
  printf("\n \n");
  printf("Dame la altura de un cono : ");
  cin>>d;
  printf("Dame el radio del cono: ");
  cin>>e;
  //dato necesario para obtener el volumen de una esfera
  printf("\n \n");
  printf("Dame el radio de una esfera: ");
  cin>>f;
  //datos necesarios para obtenenr el area de un triangulo
  printf("\n \n");
  printf("Dame la base de un triangulo: ");
  cin>>g;
  printf("Dame la altura del triangulo: ");
  cin>>h; 
  //datos necesarios para obtener la distancia entre 2 puntos en un plano cartesiano
  printf("\n \n");
  printf("Dame las cordenadas del punto a: ");
  cin>>i, j; 
  printf("Dame las cordenadas del punto b: ");
  cin>>k, l; 
  
  printf("---------------------------------------------------------------------------------------------------------- \n");
  printf("---------------------------------------------------------------------------------------------------------- \n ");
  printf("---------------------------------------------------------------------------------------------------------- \n");
  printf("---------------------------------------------------------------------------------------------------------- \n ");  
  
  //funcion para pausar la pantalla
  system ("pause");
  printf("\n ");
  
  cout<<"el volumen de un cubo en esta medida es = "<<volumenCubo(c)<<endl;
  printf("\n \n");
  cout<<"el volumen del cono es = "<<volumenCono(d, e)<<endl;
  printf("\n \n");
  cout<<"el volumen de la esfera = "<<volumenEsfera(f)<<endl;
  printf("\n \n");
  cout<<"el el area del triangulo es = "<<area(g, h)<<endl;
  printf("\n \n");
  cout<<"la distancia entre el punto a y punto b en un plano cartesiano es = "<<longitud(i, j, k, l)<<endl;
  
  system ("pause");
  system ("cls");
  printf("EQUIPO 2 \n \n ");
  printf("INTEGRANTES \n \n ");
  printf("SAID ANTONIO ASSAM ZARAGOZA \n \n ");
  printf("SALVADOR ALEJANDRO CARRIILLO RAMIREZ \n \n ");
  printf("EDUARDO VALENTIN HERNANDEZ AGUILAR \n \n ");
  
  return 0;
}
