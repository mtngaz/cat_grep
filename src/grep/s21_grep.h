#ifndef S21_CAT
#define S21_CAT

#include <getopt.h>
#include <regex.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct options {
  int e;
  int i;
  int v;
  int c;
  int l;
  int n;
  int h;
  int s;
  int o;
} opt;
opt options = {0};

void Grep_Printf(int argc, char *argv[]);

int main(int argc, char *argv[]) {
  Grep_Printf(argc, argv);
  return 0;
}

#endif
