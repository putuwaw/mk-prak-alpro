#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define BEGIN {
#define END }
#define ILKOM (
#define UNUD )
#define ALPRO ;
void isNumPalindrome ILKOM int num UNUD
BEGIN
	int x = 0, temp = num ALPRO
	while ILKOM num > 0 UNUD
	BEGIN
		x = x * 10 + num % 10 ALPRO
		num = num / 10 ALPRO
	END
	x == temp ? printf ILKOM "Angka palindrome\n" UNUD : printf ILKOM "Angka bukan palindrome\n" UNUD ALPRO
END
void isStringPalindrome ILKOM char *kata UNUD
BEGIN
	int i, palindrome = TRUE, len = strlen ILKOM kata UNUD ALPRO
	for ILKOM i = 0 ALPRO i < ILKOM len / 2 UNUD ALPRO i++ UNUD
	BEGIN
		if ILKOM kata[i] != kata[len - i - 1] UNUD
		BEGIN
				palindrome = FALSE ALPRO
		END
	END
	palindrome == TRUE ? printf ILKOM "Kata palindrome\n" UNUD : printf ILKOM "Kata bukan palindrome\n" UNUD ALPRO
END
int main ILKOM UNUD
BEGIN
	do
	BEGIN
		system ILKOM "cls" UNUD ALPRO
		printf ILKOM "Program Cek Palindrome\n" UNUD ALPRO
		printf ILKOM "=====================\n" UNUD ALPRO
		printf ILKOM "1. Angka\n2. Kata\n3. Exit\n" UNUD ALPRO
		printf ILKOM "Masukkan pilihan anda: " UNUD ALPRO
		int pil ALPRO
		scanf ILKOM "%d", &pil UNUD ALPRO
		fflush ILKOM stdin UNUD ALPRO
		switch ILKOM pil UNUD
		BEGIN
			case 1:
				system ILKOM "cls" UNUD ALPRO
				printf ILKOM "Masukkan bilangan: " UNUD ALPRO
				int num ALPRO
				scanf ILKOM "%d", &num UNUD ALPRO
				isNumPalindrome ILKOM num UNUD ALPRO
				system ILKOM "pause" UNUD ALPRO
				break ALPRO
			case 2:
				system ILKOM "cls" UNUD ALPRO
				printf ILKOM "Masukkan kata: " UNUD ALPRO
				char kata[100] ALPRO
				gets ILKOM kata UNUD ALPRO
				isStringPalindrome ILKOM kata UNUD ALPRO
				system ILKOM "pause" UNUD ALPRO
				break ALPRO
			case 3:
				return 0 ALPRO
			default:
				printf ILKOM "Pilihan anda tidak valid!\n" UNUD ALPRO
				system("pause");
			break ALPRO
		END
	END while ILKOM 1 UNUD ALPRO
END