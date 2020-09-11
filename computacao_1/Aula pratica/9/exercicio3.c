#include <stdio.h>
#include <math.h>

typedef struct
{
  int x, y;
}PONTO;

int main (int argc, char **argv)
{
  PONTO p1, p2;
  int dx, dy;
  double dist;

  puts("Coordenadas de p1");
  scanf("%d %d", &p1.x, &p1.y);
  puts("Coordenadas de p2");
  scanf("%d %d", &p2.x, &p2.y);

  dx = p1.x - p2.x;
  if(dx < 0)
    dx*=-1;
  dy = p1.y - p2.y;
  if(dy < 0)
    dy*=-1;

  dist = sqrt(dx*dx+dy*dy);
  printf("A distancia dos pontos p1 e p2 e : %1.2f \n", dist);

  return 0;
}
