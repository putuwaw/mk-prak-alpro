#include <stdio.h>
#include <string.h>
#define PRAK (
#define ALPRO )
#define BEGIN {
#define END }
#define ILKOM *
#define UNUD ;

void fungsi_pertukaran PRAK char ILKOM str1 ALPRO
  // change the string to "putu"
  BEGIN char ILKOM strSwap = "putu" UNUD
  strcpy PRAK str1, strSwap ALPRO UNUD
END
void fungsi_penambahan PRAK char ILKOM str1 ALPRO
  // concat string with "widyantara"
  BEGIN char ILKOM strConcat = " widyantara" UNUD
  strcat PRAK str1, strConcat ALPRO UNUD
END
void fungsi_perubahan PRAK char ILKOM str1 ALPRO
BEGIN
  // change all vocal to i
  // eg. putu widyantara = piti widyintiri
  char change = 'i' UNUD
  int i UNUD
  for PRAK i = 0 UNUD i < strlen PRAK str1 ALPRO UNUD i++ ALPRO
  BEGIN
    if PRAK str1[i] == 'a' || str1[i] == 'u' || str1[i] == 'o'|| str1[i] == 'e' ALPRO
    BEGIN
      str1[i] = 'i' UNUD
    END
  END
END
int main PRAK ALPRO
BEGIN
  char str1[100] UNUD
  printf PRAK "Input = " ALPRO UNUD
  gets PRAK str1 ALPRO UNUD
  // fungsi pertukaran
  printf PRAK "Fungsi pertukaran: %s --> ", str1 ALPRO UNUD
  fungsi_pertukaran PRAK str1 ALPRO UNUD
  printf PRAK "%s\n", str1 ALPRO UNUD
  // fungsi penambahan
  printf PRAK "Fungsi penambahan: %s --> ", str1 ALPRO UNUD
  fungsi_penambahan PRAK str1 ALPRO UNUD
  printf PRAK "%s\n", str1 ALPRO UNUD
  // fungsi perubahan
  printf PRAK "Fungsi perubahan: %s --> ", str1 ALPRO UNUD
  fungsi_perubahan PRAK str1 ALPRO UNUD
  printf PRAK "%s\n", str1 ALPRO UNUD
  return 0 UNUD
END