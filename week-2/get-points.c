#include <stdio.h>
#include <stdlib.h>

int max(int a, int b){ return (a*(a > b)+b*(a <= b)); }

int abs(int n){ return n*(-1)*(-1*(n>0)); }

void get_points(int x_min, int y_min, int x_max, int y_max);

int main()
{
 get_points(0,0,5,5);
 return 0;
}

void get_points(int x_min, int y_min, int x_max, int y_max) {

int x = x_min; 
int y = y_min; 
int dx = 1; 
int dy = 1;
int MAX_D = max(x_max - x_min, y_max - y_min);
int prev_d = MAX_D; 
int d = MAX_D;

while (x <= x_max && y <= y_max) 
{
  d = x - y + 2;

  if(d == 0)
  { 
   printf("(%d,%d)\n",x,y); 
   d = MAX_D; 
  }

  x += dx; 
  d = abs(x - y + 2); // positive sign only

  if (d > prev_d) { x -= dx; } // backtrack
  else { prev_d = d; continue; }

  y += dy; 
  d = abs(x - y + 2); // positive sign only

  if(d > prev_d) { y -= dy; }// backtrack
  else { prev_d = d; continue; }
}

}
