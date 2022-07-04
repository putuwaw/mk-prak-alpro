#include <stdio.h>
#include <stdlib.h>
int main()
{
  int pil;
  FILE *f;
  do
  {
    system("cls");
    printf("Program Pemrosesan Data Teks\n");
    printf("1. Tambahkan\n2. Lihat Data\n3. Exit\nPilihan: ");
    int pil;
    scanf("%d", &pil);
    switch (pil)
    {
    case 1:
      /* saving and adding data */
      system("cls");
      printf("Tambah Data\n");
      printf("NIM: ");
      char nim[15];
      scanf("%s", nim);
      fflush(stdin);
      printf("Nama Lengkap: ");
      char nama[100];
      gets(nama);
      printf("IPK: ");
      double ipk;
      scanf("%lf", &ipk);
      fflush(stdin);
      printf("Alamat: ");
      char alamat[100];
      gets(alamat);
      printf("No. HP: ");
      char noHP[15];
      scanf("%s", noHP);
      // file operation
      f = fopen("data.txt", "a");
      fprintf(f, "%-10s | %-40s | %-5.2f | %-30s | %s |\n", nim, nama, ipk, alamat, noHP);
      fclose(f);
      break;
    case 2:
      /* view data */
      system("cls");
      printf("Lihat Data\n");
      // file operation
      f = fopen("data.txt", "r");
      if (f == NULL)
      {
        printf("File tidak ditemukan\n");
      }
      else
      {
        char dummy = ' ';
        printf("NIM%-8c| Nama%-37c| IPK%-3c| Alamat%-25c| No. HP%-7c|\n", dummy, dummy, dummy, dummy, dummy);
        printf("---------------------------------------------------------------------------------------------------------------\n");
        char ch;
        while (!feof(f))
        {
          ch = fgetc(f);
          printf("%c", ch);
        }
      }
      system("pause");
      break;
    case 3:
      return 0;
      break;
    default:
      printf("Pilihan tidak ada\n");
      break;
    }
  } while (1);
}