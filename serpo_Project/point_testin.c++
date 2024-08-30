#include <iostream>

using namespace std;

void test (int *num){ //passing by pointer
      *num++;
}

void getNum (int &num){  //passing by reference
      num++;
}

int main(){
      system ("cls");
      int a = 20;

      // test(&a);
      // cout << "Value of a = " << a <<endl;

      getNum(a);
      cout << "Value of a = " << a <<endl;

      return 0;
}