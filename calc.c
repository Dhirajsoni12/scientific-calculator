#include <stdio.h>
<<<<<<< HEAD
=======
#include <math.h>

>>>>>>> feature3

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
	return x+y;
}

double mul(double x, double y){
	return x * y;
}

double sub(double x, double y){
	return x-y;
}

long fat(int x) {
	if((x == 0) || (x == 1)) {
		return 1;
	}
	else(x > 1) {
		return (x * fat(x - 1));
	}
}

// FEATURE2
int raiz_quadrada(int x){
	return sqrt(x);
}
void log_natural(int x){
x = 2.718282;
logaritmo_natural = log(x);
printf(“Logaritmo natural de x %.2f = %.2f \n”,x,logaritmo_natural);
}

// FEATURE3
<<<<<<< HEAD


=======
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
>>>>>>> feature3

int main(){
	return 0;
}
