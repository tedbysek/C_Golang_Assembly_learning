#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*
//Implementation stolen from reddit

void PrintDiamond(int r) {
  char *spaces = malloc( r - 1     );
  char *stars  = malloc( r * 2 - 1 );
  memset( spaces, ' ', r - 1     );
  memset(  stars, '*', r * 2 - 1 );
  for( int y = 1 - r; y < r; ++y ) {
    printf( "%.*s%.*s\n", abs(y), spaces, (r - abs(y)) * 2 - 1, stars );
  }
  free( spaces );
  free(  stars );
}

int main() {
  PrintDiamond(8);
}

*/

void PrintDiamond(int radius) {
  if(radius < 0) {
    radius *= -1;
  }
  int height, width;
  int l = radius / 2, r = radius / 2;
  for( height = 0 ; height < radius ; height++ ){
    for( width = 0 ; width < radius ; width++ ){
      if( width >= l && width <= r) {
        printf("*");
      }
      else {
        printf(" ");
      }
    }
    printf("\n");
    if( height > radius / 2 - 2) {
      l++;
      r--;
    }
    else {
      l--;
      r++;
    }
  }
}

int main() {
  PrintDiamond(32);
  return 0;
}
