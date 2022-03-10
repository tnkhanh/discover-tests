#include <stdio.h>

int main() {
  int i,j, sink, source, N;
  // read source from input
  scanf("%d", &source);
  int a = 0;
  while (a < N) {
    if (a % 2 == 1) {
      i = source;
    }
    else {
      j = i;
    }
    a++;
  }
  sink = j;
}
