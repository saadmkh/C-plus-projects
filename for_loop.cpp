#include <iostream>

using namespace std;

int main(){

  int starting_number , ending_number , increament;

  cout<<"Enter starting nmuber: ";
  cin>>starting_number;

  cout<<"Enter ending number: ";
  cin>>ending_number;

  cout<<"Enter number of increament";
  cin>>increament;

  for(int a = starting_number; a <= ending_number; a=a+increament){
    cout<<a <<endl;

  }
  
  return 0;



}
