/*

Use Strings2 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.s

Objectives of C-Strings-2 Lesson:

->Using malloc to create new strings
->New ways of Handling Strings

*/
#include<stdio.h>
int count_word_in_str_way_1(char *str, char *word);

int main(){


	//Test Consonants_Vowels

	//Test getFrequencyofWord

	//Test getSubstring

	//Test getLastWord
	char s[100];
	char s1[100];
	gets(s);
	gets(s1);
	int x=count_word_in_str_way_1(s, s1);
	printf("%d", x);
	getchar();

	return 0;
}