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


// FEATURE3



int main(){
	return 0;
}
