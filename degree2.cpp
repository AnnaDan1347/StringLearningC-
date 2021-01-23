#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>


#define NUMBER_OF_ELEMENTS 100
#define MAX_ELEMENT 100

using namespace std;

int main(){
	
	double array[NUMBER_OF_ELEMENTS] = {0};
	srand(time(0));
	
	for (int i = 0; i < NUMBER_OF_ELEMENTS; i++){
		array[i] = rand() % MAX_ELEMENT;
	}
	
	for (int i = 0; i < NUMBER_OF_ELEMENTS; i++){
		cout << array[i] << " ";
	}
	
	cout << endl;	
	
	int bingo = 0;
	
	for (int i = 0; i < NUMBER_OF_ELEMENTS; i++){
		int degree = 0;
		double temp = 0.0;
		while (!(temp > array[i])) {
			temp = pow(2,degree);
			if (temp == array[i]) {
				cout << "a[" << i << "] = 2^" << degree << " = " << array[i] << endl;
				bingo++;
				break;
			}
			degree++;
		}
	}
	
	if (bingo == 0){
		cout << "There is no powers of two in this array ";
	}
	
	return 0;
}
