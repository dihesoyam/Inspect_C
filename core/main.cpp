#include <iostream>
#include <string>
//#include "values.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

          int main(){
  string first_text[] = {"Enter text: ", "Enter value: ", "Value is not corrected!", "Value: ", " at "};
   string text = "";
    int value = 0;
  cout<<first_text[0];
  cin >>text;
  cout <<first_text[1];
  cin >> value;
    int *value_address = &value;
  if(value != 0){
     for(int i = 0; i < value; i++){
  cout << text<<endl;
}
 cout <<first_text[3]<<value<<first_text[4]<<value_address<<endl;
}else{
     cout<<first_text[2]<<endl;
     cout<<first_text[3]<<*value_address<<first_text[4]<<value_address<<endl;
}
  return 0;
}
