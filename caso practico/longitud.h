//declaracion
float longitud(float x1, float y1,float x2, float y2);
//funciones
//formula para obteber la longitud de 2 coordenadas
float longitud(float x1,float y1,float x2, float y2){
	return sqrt((x1 - y1)*(x1 - y1) + (x2 - y2)*(x2 - y2));
}
