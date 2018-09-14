#include <stdio.h>

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



int main(){
	return 0;
}
