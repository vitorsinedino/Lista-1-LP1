/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
Como a lógica não está correta para o primeiro par, vou considerar 20% pelo trabalho
*/
int main( void )
{
    int a, b, i;
    int aux = 0;
    cin >> a >> b;
    if(a < b){
      for(i = a, aux = i; i <= b; i ++){
        aux += i;
      }
    }
    if(a > b){
      for(i = a, aux = i; i >= b; i--){
        aux += i;
      }
    }
    
    cout << aux;
    return 0;
}
