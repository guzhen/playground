#include <iostream>

bool sleepIn(bool weekday, bool vacation){
	return (!weekday || vacation);
}

int main()
{
  std::cout<<sleepIn(false, false)<<std::endl;
  std::cout<<sleepIn(false, true)<<std::endl;
  std::cout<<sleepIn(true, false)<<std::endl;
  std::cout<<sleepIn(true, true)<<std::endl;

  return 0;
}
