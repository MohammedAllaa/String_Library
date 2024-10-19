#include"String.h"


int main() {
	/*************************************** memchr ******************************************/

	/*const char str[] = "Tutorialspoint.com";
	const char ch = '.';
	char* ret;
	ret = My_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);*/

	/*************************************** memcmp ******************************************/
	
	/*int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 6 };

	int result = My_memcmp(arr1, arr2, sizeof(arr1));

	if (result == 0) {
		printf("Arrays are equal\n");
	}
	else {
		printf("Arrays are not equal\n");
	}*/

	/*************************************** memcpy ******************************************/

	/*char first_str[] = "Tutorials";
	char sec_str[] = "Point";

	puts("first_str before memcpy:");
	puts(first_str);

	
	My_memcpy(first_str, sec_str, sizeof(sec_str));

	puts("\nfirst_str after memcpy:");
	puts(first_str);*/

	/*************************************** memmove ******************************************/

	/*char dest_str[] = "oldstring";
	const char src_str[] = "newstring";
	printf("Before memmove dest = %s, src = %s\n", dest_str, src_str);
	memmove(dest_str, src_str, 9);
	printf("After memmove dest = %s, src = %s\n", dest_str, src_str);*/

	/*************************************** memset ******************************************/

	//char str[50];
	//strcpy(str, "Welcome to Tutorialspoint");
	//puts(str);
	//memset(str, '#', 7);
	//puts(str);

	/*************************************** strcat ******************************************/

	/*char dest_str[50] = "C ";
	const char src_str[] = "JAVA";
	My_strcat(dest_str, src_str);
	printf("%s", dest_str);*/

	/*************************************** strncat ******************************************/

	/*char dest[20] = "Hello, ";
	char src[] = "Beautiful World!";

	My_strncat(dest, src + 10, 5);

	printf("Concatenated substring: %s\n", dest);*/

	/*************************************** strchr ******************************************/

	/*const char str[] = "Tutorialspoint";
	const char ch = '.';
	char* ret;
	ret = My_strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);*/

	/*************************************** strcmp ******************************************/

	/*char str1[] = "abcd", str2[] = "abcd";
	int res;

	res = My_strcmp(str1, str2);
	printf("strcmp(str1, str2) = %d\n", res);*/

	/*************************************** strncmp ******************************************/

	/*const char str1[] = "Hello, world!";
	const char str2[] = "Hello, there!";
	const char str3[] = "Hello, world!";

	printf("Comparison of str1 and str2 (first 5 chars): %d\n", My_strncmp(str1, str2, 5)); 
	printf("Comparison of str1 and str2 (first 10 chars): %d\n", My_strncmp(str1, str2, 10));
	printf("Comparison of str1 and str3 (first 12 chars): %d\n", My_strncmp(str1, str3, 12)); */

	/*************************************** strcoll ******************************************/

	/*char str1[50] = "abcdef";
	char str2[50] = "abcdefgh";
	char str3[] = "ghijk";
	char str4[] = "GHIJK";
	int x, y, z;

	x = My_strcoll(str1, str2);
	printf("\n The Comparison of str1 and str2 Strings = %d", x);

	y = My_strcoll(str3, str4);
	printf("\n The Comparison of str3 and str4 Strings = %d", y);

	z = My_strcoll(str1, "abcdef");
	printf("\n The Comparison of both Strings = %d", z);*/

	/*************************************** strcpy ******************************************/

	/*char source[] = "Hello, World!";
	char destination[20];

	My_strcpy(destination, source);
	printf("The result of copied string: %s\n", destination);*/

	/*************************************** strncpy ******************************************/

	//char source[] = "Hello, Note!";
	//char destination[10];
	//My_strncpy(destination, source + 7, 4);
	//printf("Copied substring: %s\n", destination);

	/*************************************** strcspn ******************************************/
	/*
	int len;
	const char str1[] = "Tutorialspoint";
	const char str2[] = "Textbook";

	len = My_strcspn(str1, str2);

	printf("First matched character is at %d\n", len + 1);*/

	/*************************************** strlen ******************************************/

	//char len[] = "Tutorialspoint";
	//printf("The length of given string = %d", My_strlen(len));

	/*************************************** strrchr ******************************************/

	//int len;
	//const char str[] = "https://www.tutorialspoint.com";
	//const char ch = '.';
	//char* ret;

	//ret = My_strrchr(str, ch);

	//printf("String after |%c| is - |%s|\n", ch, ret);

	/*************************************** strstr  ******************************************/

	//const char str[20] = "TutorialsPoint";
	//const char substr[10] = "Point";
	//char* ret;

	//ret = My_strstr(str, substr);

	//printf("The substring is: %s\n", ret);

	/*************************************** strspn  ******************************************/

	/*int len;
	const char str1[] = "ABCDEFG019874";
	const char str2[] = "ABCD";

	len = My_strspn(str1, str2);

	printf("Length of initial segment matching %d\n", len);*/

	/*************************************** strtok  ******************************************/

	/*char str[80] = "This is - www.tutorialspoint.com - website";
	const char s[2] = "-";
	char* token;

	token = My_strtok(str, s);

	while (token != NULL) {
		printf(" %s\n", token);

		token = My_strtok(NULL, s);
	}*/

	/*************************************** My_strxfrm  ******************************************/

	/*char str2[] = "Delhi to Hyderabad";
	char str1[30];

	printf("%lu\n", strxfrm(str1, str2, 4));
	printf("%s\n", str1);
	printf("%s\n", str2);*/

	/**********************************************************************************************/
	return 0;
}