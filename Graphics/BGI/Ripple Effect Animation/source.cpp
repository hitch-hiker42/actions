//author: hitch_hiker42;
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main() {
  initwindow(500, 500, "Ripple");
  int left = 10, right = 200, r = left, count = 0, x = getmaxx() >> 1, y = getmaxy() >> 1, n = 10;
  while(true) {
    for(int i = left; i <= right; i += 10) circle(x, y, i), delay(100);
    for(int i = right - 10; i >= left; i -= 10) {
      for(int j = i; j >= left; j -= 10) circle(x, y, j);
      delay(100), cleardevice();
    }
    if(count == n) break; else count++;
  }
  getch();
  return 0;
} //farewell, until we draw again..
