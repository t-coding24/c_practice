#include<stdio.h>

unsigned int my_strlen(const char *str){
  unsigned int count = 0;
  while(*str++){
    count++;
  }
  printf("%d\n", count);
  return count;
}

int main(void){
  const char *str = "hello";
  my_strlen(str);
  return 0;
}
