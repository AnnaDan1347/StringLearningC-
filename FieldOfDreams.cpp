/*���� �����. ���������������� ����: 
��������� �����, ��������� �����, 
� ����� - ����� ���������.*/
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
	cout << "��� ������� �� ������ ��� (������� �����): " << endl;
	cin.getline(word, N);
	int count = 0;
	char guess;
	
	for (int i = 0; i < strlen(word); i++) {
		guessWord[i] = '*';
	}
	while (count < strlen(word)) {		
		printGuess(guessWord);
		cout << endl << "500 ����� �� ��������! �����?" << endl; 
		cin >> guess;
		for (int i = 0; i < strlen(word); i++) {
			if (guess == word[i]) {
				if (guessWord[i] == '*') {
					cout << "���� ����� ����� � ���� �����!"<< endl;
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
	cout << endl << "����� � ������! �� ����������!" << endl;
	cout << "� ���� �� ��������� ����� �� ���� ������." << endl
	<< "������ ����� ���� �� �� ��� ����������� ���� ����. " << endl
	<< "��� ��� ���.";	
}
