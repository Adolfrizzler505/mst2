#include<stdio.h>
#include<string.h>

int main()
{

  char name[100];
  int start,end,temp;

  printf("Enter a string: ");
  fgets(name, 100, stdin);

  name[strcspn(name, "\n")] = '\0';

  start = 0;
  end = strlen(name) - 1;

  while(start < end)
  {
    temp = name[start];
    name[start] = name[end];
    name[end] = temp;
  }  

  printf("Reversed string is %s", name);

  
  

  return 0;
}