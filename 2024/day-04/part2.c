#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void err_n_die(bool cond, char *msg) {
  if (!cond)
    return;
  fprintf(stderr, "%s\n", msg);
  exit(EXIT_FAILURE);
}

char line[256];
int ans;

void solve(void) {
  ans++;
}

int main(void) {
  FILE *fp = fopen("./day-04/example2.txt", "r");
  err_n_die(fp == NULL, "Couldn't find the input file.");

  while (fgets(line, sizeof(line), fp) != NULL) {
    solve();
  }

  printf("%d\n", ans);

  fclose(fp);
  return 0;
}
