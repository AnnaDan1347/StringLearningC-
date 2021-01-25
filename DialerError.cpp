/*ОШИБКА НАБОРЩИКА. Используя наш алгоритм, 
устраните ошибку наборщика: удаление 
повторяющихся слов в тексте.*/

#include <iostream>
#include <cstring>
using namespace std;
#define N 128

bool isSeparator(char c);

int main() {
	char text[N], word[N];
	int i, iw = 0;
	char tempWord[N] = {0};
	cout << "Input text";
	cin.getline(text, N);
	for (i = 0; text[i] != '\0'; i++){
		if (!isSeparator(text[i])){
		word[iw] = text[i];
		iw++;
			if (isSeparator(text[i+1]) or text[i+1] == '\0') {
				//word[iw] = '\0';
				if (strcmp(word, tempWord) != 0) {
					for ( int w = 0; w < strlen(tempWord); w++){
						tempWord[i] = 0;	
					}
					strcpy(tempWord, word);					
				} 
				else {
					for (int j = i - strlen(word); text[j+strlen(word)+1] != '\0'; j++ ) {
						cout << text[j - strlen(word)] << "=" << text[j+1] << endl;
						text[j] = text[j+strlen(word)+1];
						text[j+strlen(word)+1] =' ';
					}
				}	
				iw = 0;
				for ( int w = 0; w < strlen(word); w++){
						word[i] = 0;
			}
			}
		}
		
	}
	for (i = 0; text[i] != '\0'; i++){
	cout << text[i];
	}
	return 0;
}

bool isSeparator(char c) { 
	char s[] = ",.! ?";
	for (int i = 0; s[i]!= '\0'; i++){
	if (c == s[i])
	return true;
}
	return false;
}


