#include <stdio.h>

int main(int argc, char** argv) {
  int x = 1;
  int y, z, t, u, v;
  scanf("%d%d%d%d%d", &y, &z, &t, &u, &v);
  scanf("%d%d%d%d", &y, &z, &t, &u);
  scanf("%d%d%d", &y, &z, &t);
  scanf("%d%d", &y, &z);
  z = y + 2;
  return 0;
}
