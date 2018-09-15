#include <stdio.h>
#include <math.h>

// FEATURE1

double div(double x, double y){
	if(y == 0){
		return 0;
	}
	else{
		return x / y;
	}
}


double soma(double x, double y){
	return x + y;
}

double mul(double x, double y){
	return x * y;
}

double sub(double x, double y){
	return x - y;
}
long fat(int x) {
	if((x == 0) || (x == 1)) {
		return 1;
	}
	else if(x > 1) {
		return (x * fat(x - 1));
	}
}

// FEATURE2

int pot(int x, int y){
	return pow(x,y);
}
int raiz_quadrada(int x){
	return sqrt(x);
}
double log_natural(double x){
	//e = 2.718282;
  	double logaritmo_natural = log(x);
	printf("Logaritmo natural de x %.2f = %.2f \n",x,logaritmo_natural);
    return logaritmo_natural;
}
int raizcubica(int x , int y){
    float resultado;
    resultado = pow(x , y);
    return resultado;
}

// FEATURE3

double arccos(double valor) {
	return acos(valor);
}

double tangente(double valor) {
	return tan(valor);
}

double arcoseno(double x){
	return asin(x);
}

double Cos(int x){
	return cos(x);
}

double seno(double x){
	return sin(x);
}

// FEATURE4


double min(double x, double y){
  return (x<y)?x:y;
}

double max(double x ,double y){
  return (x>y)?x:y;
}

double Abs(double x){
  return (x>0)?x:-x;
}

int main(){
	return 0;
}
