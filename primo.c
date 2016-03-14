#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//#define false 1
//#define true 0

bool primo(long long n){
	if(n < 2) return false;
	if(n == 2) return true;
	if(n % 2 == 0) return false;
	for (int i = 3; i < sqrt(n); ++i)	{
		if(n % i == 0) return false;
	}
	return true;
}

int main(int argc, char const *argv[]){
	setlocale(LC_ALL,"Portuguese");
	long long n;
	bool aux;
	scanf("%lld", &n);
	aux=primo(n);
	if (aux == true){
		printf("é primo!\n");
	}
	else
		printf("não é primo!\n");
	return 0;
}