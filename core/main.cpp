#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

          int main(){
  string first_text[] = {"Enter text: ", "Enter value: "};
  string text = "";
  int value = 0;
  cout<<first_text[0];
  cin >>text;
  cout <<first_text[1];
  cin >> value;
  for(int i = 0; i < value; i++){
  cout << text<<endl;
}
  return 0;
}
