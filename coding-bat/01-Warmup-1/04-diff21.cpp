#include <iostream>

using namespace std;

int diff21(int n){
    int result = 0;
    if (21 >= n){
        result = (21 -n);
    }else{
        result = (n - 21) * 2;
    }
    return result;
}

int main()
{
  cout<<diff21(19)<<endl;
  cout<<diff21(10)<<endl;
  cout<<diff21(21)<<endl;
  return 0;
}
