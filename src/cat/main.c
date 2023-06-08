#include <stdio.h>
#include <stdlib.h>

void options(int argc, char *argv[]);

int main(int argc, char *argv[]) {
  // int b = 0, e = 0, n = 0, s = 0, t = 0, v = 0;
  // int opt;
  // while ((opt = getopt(argc, argv, "b")) != -1) {
  //     switch(opt) {
  //         case 'b':
  //             b++;
  //             break;
  //         case 'e':
  //             e++;
  //             break;
  //         case 'n':
  //             n++;
  //             break;
  //         case 's':
  //             s++;
  //             break;
  //         case 't':
  //             t++;
  //             break;
  //         case 'v':
  //             v++;
  //             break;
  //         default:
  //         printf("Не корректно введен флаг");
  //     }
  // }
  int ch;
  FILE *fp;
  if (!(fp = fopen(argv[1], "r")) || argc != 2) {
    printf("Не удается    открыть %s\n", argv[1]);
    exit(0);
  }
  while ((ch = getc(fp)) != EOF) {
    putchar(ch);
  }
  fclose(fp);
}
