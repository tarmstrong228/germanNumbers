#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int num;
	char guess[50];
	int count, i = 0;
	char array[101][50] = {
		"null", "eins", "zwei", "drei", "vier", "funf", "sechs", "sieben", "acht", "neun", "zehn", "elf", "zwolf", "dreizehn", "vierzehn", "funfzehn", "sechzehn", "siebzehn", "achtzehn", "neunzehn", "zwanzig", "einundzwanzig", "zweiundzwanzig", "dreiundzwanzig", "vierundzwanzig", "funfundzwanzig", "sechsundzwanzig", "siebenundzwanzig", "achtundzwanzig", "neunundzwanzig", "dreissig", "einunddreissig", "zweiunddreissig", "dreiunddreissig", "vierunddreissig", "funfunddreissig", "sechsunddreissig", "siebenunddreissig", "achtunddreissig", "neununddreissig", "vierzig", "einundvierzig", "zweiundvierzig", "dreiundvierzig", "vierundvierzig", "funfundvierzig", "sechsundvierzig", "siebenundvierzig", "achtundvierzig", "neunundvierzig", "funfzig", "einundfunfzig", "zweiundfunfzig", "dreiundfunfzig", "vierundfunfzig", "funfundfunfzig", "sechsundfunfzig", "siebenunfunfzig", "achtundfunfzig", "neunundfunfzig", "sechzig", "einundsechzig", "zweiundsechzig", "dreiundsechzig", "vierundsechzig", "funfundsechzig", "sechsundsechzig", "siebenundsechzig", "achtundsechzig", "neunundsechzig", "siebzig", "einundsiebzig", "zweiundsiebzig", "dreiundsiebzig", "vierundsiebzig", "funfundsiebzig", "sechsundsiebzig", "siebenundsiebzig", "achtundsiebzig", "neunundsiebzig", "achtzig", "einundachtzig", "zweiundachtzig", "dreiundachtzig", "vierundachtzig", "funfundachtzig", "sechsundachtzig", "siebenundachtzig", "achtundachtzig", "neunundachtzig", "neunzig", "einundneunzig", "zweiundneunzig", "dreiundneunzig", "vierundneunzig", "funfundneunzig", "sechsundneunzig", "siebenundneunzig", "achtundneunzig", "neunundneunzig", "einhundert"
	};


	srand(time(NULL));
	printf("For this program, ignore any accents and use 'ss' instead of ß\n");


	while (1) {

		num = rand() % (100 + 1);
		printf("Your number is %d\n", num);
		scanf("%s", &guess);

		for (i = 0; i < strlen(array[num]); i++) {
			
			if (guess[i] != array[num][i]) {
				break;
				}
			}
		if (i == strlen(array[num])) {
			printf("Correct\n");
			count++;

		}	
		else {
			printf("Incorrect. The correct answer is %s\n", array[num]);
			break;
		}
	}

	printf("You got %d numbers correct\n", (count - 1));

	return 0;
}
