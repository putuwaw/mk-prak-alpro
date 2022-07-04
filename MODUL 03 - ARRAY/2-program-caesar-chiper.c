#include <stdio.h>
#include <string.h>
void doCaesarCipher(char *input, int shift, char *output)
{
  int len = strlen(input);
  int i;
  for (i = 0; i < len; i++)
  {
    if (input[i] == ' ')
    {
      continue;
    }
    else
    {
      int temp = input[i] + shift;
      input[i] = input[i] + shift;
      if (temp > 122) // lebih dari z
      {
        temp = (temp - 122) % 26;
        input[i] = 'a' + temp - 1;
      }
    }
  }
  strcpy(output, input); // salin ke array lain
  printf("Hasil shift: %s\n", output);
}

int main()
{
  char input[101], output[101];
  int shift;
  printf("Masukan string: ");
  gets(input); // terima masukan array of char aka string
  printf("Masukan shift: ");
  scanf("%d", &shift); // terima masukan geser
  doCaesarCipher(input, shift, output);
  return 0;
}
