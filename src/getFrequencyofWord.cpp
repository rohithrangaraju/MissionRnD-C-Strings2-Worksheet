/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int i;
	int j;
	for (i = 0; str[i] != '\0'; i++);
	for (j = 0; word[j] != '\0'; j++);
	int n = j;
	int m = i;
	i = j = 0;
	//printf("%d",m);
	int count = 0;
	if (n != 1){
		while (i < m){
			if (str[i] == word[j]){
				i++;
				j++;

			}
			if (j == n){

				count++;
				j = 0;
				i = i - 1;
			}
			else if (str[i] != word[j]){
				i = i + 1;
			}
		}
	}
	else{
		while (i < m){
			if (str[i] == word[j]){
				i++;
				j++;

			}
			if (j == n){

				count++;
				j = 0;
			}
			else if (str[i] != word[j]){
				i = i + 1;
			}
		}
		
	}
	return count;
	
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

