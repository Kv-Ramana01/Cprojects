#include <iostream>

using namespace std;
int main(){
 
 int n , a;
 cin>> n;
 a = n;
 int ld, newNumber = 0;
 while(n>0){
    ld = n% 10;
    newNumber = ld + (newNumber* 10);
    n/= 10;
 }
  if(newNumber== a){
    cout << "Palindrome";
  }
  else{
    cout << "Not a Palindrome";
  }
  



    return 0;
}