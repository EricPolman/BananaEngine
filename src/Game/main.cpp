#include <iostream>

int main(int argc, char** argv)
{
  for(int i = 0; i < argc; ++i)
    printf("%d: %s\n", i, argv);
  
  std::cin.ignore();
  return 0;
}