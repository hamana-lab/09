#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
  int i;
  int sum=0;
  int grade[SIZE];

  printf("%i명의 점수를 입력하세요.\n", SIZE);
  
  for(i=0;i<SIZE;i++){
   scanf("%d", &grade[i]);
   sum = sum + grade[i];
  }
  
  printf("grade average : %d\n", sum/SIZE);

  system("PAUSE");	
  return 0;
}
