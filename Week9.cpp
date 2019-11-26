#include "stdio.h"

int getLength(char string[]);
int isAlphabetical(char c);
int isVowel(char c);
int countVowels(char string[]);
int countConsonants(char string[]);

int main()
{
	char string[81];
	int numVowels, numConsonants;
	puts("Enter string:");
	gets_s(string, 80);
	numVowels = countVowels(string);
	printf("Number of vowels = %d \n\n", numVowels);
	numConsonants = countConsonants(string);
	printf("Number of consonants = %d \n\n", numConsonants);
	return 0;
}


int getLength(char string[])
{
	int i;
		for (i = 0; string[i] != '\0'; ++i) {
			
		}
		return i;
}


int isAlphabetical(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}

	else if (c >= 'a' && c <= 'z')
	{
		return 1;
	}

	else { return 0; }

}


int isVowel(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
	{
		return 1;
	}
	else { return 0; }

}


int countVowels(char string[])
{
	int vowels = 0;
	for (int i = 0; i <= getLength(string); i++) {
		if (isAlphabetical(string[i]) && isVowel(string[i])) {
			vowels = vowels++;
		}
	}
	return vowels;
}


int countConsonants(char string[])
{
	int consonants = 0;
	for (int i = 0; i <= getLength(string); i++) {
		if (isAlphabetical(string[i]) && !isVowel(string[i])) {
			consonants = consonants++;
		}
	}
	return consonants;
}