#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.
/*
ok
*/
int main(void)
{
    // TODO: Adicione aqui seu código.
    int a, i;
    int counter = 0;
    for( i = 0; i < 5; i++){
      cin >> a;
      if( a < 0){
        counter +=1;
      }
    }
    
    cout << counter;
    return 0;
}
