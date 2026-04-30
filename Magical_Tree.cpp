#include <stdio.h>
#define ll long long

int main() {
  ll n;
  scanf("%lld", &n);
  ll line;
  if(n==1)
    line = 6;
  else if(n==3)
    line = 7;
  else if(n==5)
    line = 8;
  else if(n==7)
    line = 9;
  else if(n==9)
    line = 10;
  else if(n==11)
    line = 11;
  else if(n==13)
    line = 12;
  else if(n==15)
    line = 13;
  else if(n==17)
    line = 14;
  else if(n==19)
    line = 15;
  else if(n==21)
    line = 16;
  ll space = line-1;
  ll star = 1;
  for(ll row = 1;row <=line; row++) {
    for(ll i = 0; i< space; i++) {
      printf(" ");
    }
    for(ll j = 1; j <= star; j++) {
      printf("*");
    }
    printf("\n");
    space--;
    star += 2;
  }
  for(ll row = 1; row <= 5; row++) {
    for(ll i = 0; i<5; i++) {
      printf(" ");
    }
    for(ll j = 0; j<n; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
