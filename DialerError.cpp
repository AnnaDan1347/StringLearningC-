/*ÎØÈÁÊÀ ÍÀÁÎÐÙÈÊÀ. Èñïîëüçóÿ íàø àëãîðèòì, 
óñòðàíèòå îøèáêó íàáîðùèêà: óäàëåíèå 
ïîâòîðÿþùèõñÿ ñëîâ â òåêñòå.*/

#include <iostream>
#include <cstring>
using namespace std;
#define N 128

bool isSeparator(char c);

int main() {
	char text[N], word[N], tempWord[N] = {};
	int i, iw = 0;
	cout << "Input text";
	cin.getline(text, N);
	for (i = 0; text[i] != '\0'; i++){
		if (!isSeparator(text[i])){
		word[iw] = text[i];
		iw++;
			if (isSeparator(text[i+1]) or text[i+1] == '\0') {
				if (strcmp(word, tempWord) != 0) {
					for ( int w = 0; w < iw - 1; w++){
						tempWord[w] = 0;	
					}
					strcpy(tempWord, word);			
				} 
				else {
					for (int j = i; j < strlen(text); j++ ) {
						text[j - iw] = text[j+1];
						text[j+1] = ' ';
					}
				}				
				for (int w = 0; w < iw; w++){
					word[w] = ' ';
				}
				iw = 0;
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

