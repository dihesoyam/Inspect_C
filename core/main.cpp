#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

          int main(){
  string first_text[] = {"Enter text: ", "Enter value: ", "Value is not corrected!"};
   string text = "";
  int value = 0;
  cout<<first_text[0];
  cin >>text;
  cout <<first_text[1];
  cin >> value;
  if(value != 0){
     for(int i = 0; i < value; i++){
  cout << text<<endl;
}
}else{
     cout<<first_text[2];
}
  return 0;
}
