// WAP in C which tells user whether that is vowel or not

#include<stdio.h>

int main(){
	int isLowerCaseVowel, isUpperCaseVowel;
	char letter;
	printf("Enter a character:");
	scanf("%c", &letter);
	
	//Return true if something is available
	isLowerCaseVowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
	isUpperCaseVowel = (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');
	
	if(isLowerCaseVowel || isUpperCaseVowel){
		printf("%c is vowel.", letter);
	}else{
		printf("%c is not vowel.", letter);
	}

	return 0;
}
