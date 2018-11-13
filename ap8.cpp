#include <stdio.h>
#include <stdlib.h>
#include <time.h>       /* time */
#include<bits/stdc++.h>

using namespace std;

#define CASA_DECIMAL 1000000
#define SIZE 1000000

int h(float x, float y){
  if((x*x + y*y) <= 1)
    return 1;
  return 0;
}

int main(){

  float x, y, sum = 0;
  int iSecret;
    /* initialize random seed: */
  srand (time(NULL));

  for(int i = 0; i < SIZE; i++){
    /* generate secret number between 0 and 10: */
    iSecret = rand() % (CASA_DECIMAL + 1);
    x = (float) iSecret / CASA_DECIMAL;

    if((rand() % 2))
      x = -x;

    iSecret = rand() % (CASA_DECIMAL + 1);
    y = (float) iSecret / CASA_DECIMAL;

    if((rand() % 2))
      y = -y;

    sum += h(x,y);
  }
  sum = sum * 4 / SIZE;
  cout << "Soma porra: " << sum;
}