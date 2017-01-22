#include <iostream>

using namespace std;

int sumDouble(int a, int b){
    int result = 0;
    if (a == b){
        result = 2 * (a + b);
    }else{
        result = a + b;
    }
    return result;
}

int main()
{
  cout<<sumDouble(1,2)<<endl;
  cout<<sumDouble(3,2)<<endl;
  cout<<sumDouble(2,2)<<endl;
  return 0;
}
