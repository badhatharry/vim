#include<stdio.h>

void hanoi(int num, int src, int dst, int tmp){
  static int ctr;
  if (num == 0) return;
  hanoi(num-1, src, tmp, dst);
  ctr++;
  printf("Zug %2d: Scheibe %d von Stange %d nach Stange %d\n",ctr, num, src, dst); 
  hanoi(num-1, tmp, dst, src);
}

int main(){
  hanoi(3, 1, 3, 2);
  printf("done\n");
  return 0;
}

