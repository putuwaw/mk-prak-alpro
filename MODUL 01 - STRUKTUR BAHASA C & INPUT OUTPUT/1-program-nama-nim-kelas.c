#include <stdio.h>
int main()
{
	char nama[100], nim[10], kelas;
	printf("Nama: ");
	gets(nama);
	printf("NIM: ");
	gets(nim);
	printf("Kelas: ");
	scanf("%c", &kelas);
	printf("Nama Anda: ");
	puts(nama);
	printf("NIM Anda: ");
	puts(nim);
	printf("Kelas Anda: Kelas %c", kelas);
	return 0;
}