#include <iostream>

using namespace std;

bool monkeyTrouble(bool aSmile, bool bSmile){
    return ((aSmile && bSmile) || (!aSmile && !bSmile));
}

int main()
{
  cout<<monkeyTrouble(false,false)<<endl;
  cout<<monkeyTrouble(false,true)<<endl;
  cout<<monkeyTrouble(true,false)<<endl;
  cout<<monkeyTrouble(true,true)<<endl;
  return 0;
}
