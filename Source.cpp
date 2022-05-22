#include <iostream>
#include "String.h"

int main() {
  TString pop;
  TString pop1(4, 'a');
  TString pop2("jgfagak");
  TString popcopia(pop1);
  char kek[100] = "yas";
  
  std::cout << kek << std::endl;
  std::cout << "String pop1 " << pop1 << std::endl;
  std::cin >> pop2;
  std::cout << "String pop2 " << pop2 << std::endl;
  pop = pop1 + kek;
  std::cout << "String pop = pop1 + kek " << pop << std::endl;
  std::cout << "String copia pop1 " << popcopia << std::endl;

  pop2 += kek;
  std::cout << "String pop2 += kek " << pop2 << std::endl;
  pop2 += popcopia;
  std::cout << "String pop2 += kek " << pop2 << std::endl;

  if (pop < pop1)  std::cout << "pop < pop1" << std::endl;
  if (pop > pop1)  std::cout << "pop > pop1" << std::endl;

  pop = pop1;
  if (pop == pop1)  std::cout << "pop == pop1" << std::endl;
  if (pop != pop1)  std::cout << "pop != pop1" << std::endl;

  TString pop228("as");
  popcopia = kek;
  std::cout << "" << pop.Find('a') << std::endl;
  std::cout << "" << popcopia.Find(pop228) << std::endl;

  int k = 0;
  TString* mas = pop2.split('a', k);
  for(int i = 0; i < k;i++)
    std::cout << "mas["<<i<<"] = " << mas[i] << std::endl;

  std::cout << popcopia[3] << std::endl;

  TString popNCopy;
  popNCopy = pop228.copy_n_times(2);
  std::cout << popNCopy << std::endl;

  return 0;
}