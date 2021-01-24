/*ПОЛЕ ЧУДЕС. Запрограммируйте игру: 
открываем буквы, угадываем слово, 
в конце - шутка Якубовича.*/
#include <iostream>
#include <cstring>
#include <stdlib.h>
#define N 128

using namespace std;

void printGuess(char word[]);
void congradulate();

int main() {
	setlocale(LC_ALL, "Russian");
	char word[N] = {};
	char guessWord[N] = {};
	cout << "Вот задание на первый тур (введите слово): " << endl;
	cin.getline(word, N);
	int count = 0;
	char guess;
	
	for (int i = 0; i < strlen(word); i++) {
		guessWord[i] = '*';
	}
	while (count < strlen(word)) {		
		printGuess(guessWord);
		cout << endl << "500 очков на барабане! Буква?" << endl; 
		cin >> guess;
		for (int i = 0; i < strlen(word); i++) {
			if (guess == word[i]) {
				if (guessWord[i] == '*') {
					cout << "Есть такая буква в этом слове!"<< endl;
					guessWord[i] = guess;
					count++;	
				} 	
			}
		}		
	}
	printGuess(guessWord);
	congradulate();
	return 0;
}

void printGuess(char word[]) {
	for (int i = 0; i < strlen(word); i++) {
		cout << word[i] << "| ";
	}
}

void congradulate() {
	cout << endl << "Букет в студию! Вы победитель!" << endl;
	cout << "С вами мы прощаемся ровно на одну неделю." << endl
	<< "Желаем удачи хотя бы на эти коротенькие семь дней. " << endl
	<< "Дай вам Бог.";	
}
