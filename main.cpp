#include <iostream>
#include <sstream>
using namespace std;

bool read( int mas[10])
{
  string str;
  getline(cin,str);
  istringstream stream(str);
  bool f =true;
  for (int i =0; i < 10; i++){
    if (!(stream >> mas[i])) {f =false; break;}
    
  }
  return f;
 } 

int main()
{   int k =0; int mas[10];
    
if (read(mas)){
  for (int i =0; i<10;i++){
   for (int j =0; j<10;j++){
   if ((i < j) && (mas[i] > mas[j])) k++;
}}
    cout << k;} else cout <<"An error has occurred while reading numbers";
   return 0;
}
