/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){

	int i;
	for (i = 0; str[i] != '\0'; i++);
	if (i == 0)return "\0";
	i--;

	if (str[i] != ' '){
		int count = 0;
		while (str[i] != ' '&&i != -1){
			i--;
			count++;
		}
		char *string = (char*)calloc(count + 1, sizeof(char));
		int j = 0; i++;
		for (; str[i] != '\0'; i++){
			*(string + j) = str[i];
			j++;
		}
		string[j] = '\0';
		return string;
	}
	else{
		//printf("sdsd");
		while (i--){
			if (str[i] != ' ')break;
		}
		//printf("%d",i);
		i++;
		if (i == 0) return "";
		int count = 1;
		while (str[i] != ' '&&i != -1){
			i--;
			count++;
		}
		char *string = (char*)calloc(count + 1, sizeof(char));
		int j = 0;

		for (; i <= count; i++){
			*(string + j) = str[i];
			j++;
		}
		string[j] = '\0';
		return string;
	}
}