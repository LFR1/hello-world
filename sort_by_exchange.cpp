//交换排序
#include <stdio.h>
int main() {
  int x[3] = {5, 2, 1}, i, j;
  while(!(x[0] <= x[1] && x[1] <= x[2])) {
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    for(i = 0;i < 2;i++)
    for(j = 0;j < 2;j++)
	 {
      if( x[j] > x[j+1]) 
	  {
  	    int temp = x[j];
  	    x[j] = x[j+1];
  	    x[j+1] = temp;
      }
    }
    printf(" %d, %d, %d", x[0], x[1], x[2]);
  }
  return 0;
}
