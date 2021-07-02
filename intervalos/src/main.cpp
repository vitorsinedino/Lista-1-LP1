/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

/*
ok
*/
int main(void)
{// TODO: Adicione aqui a sua solução.
    float x;
    float firstRange = 0;
    float secondRange = 0;
    float thirdRange = 0;
    float fourthRange= 0;
    float outOfRange = 0;
    float total = 0;
    while( cin >> std::ws >> x) {
        if(x >= 0 && x < 25){
        firstRange += 1;
        total += 1;
        }
        if(x >= 25 && x < 50){
        secondRange += 1;
        total += 1;
        }
        if(x >= 50 && x < 75){
        thirdRange += 1;
        total += 1;
        }
        if(x >= 75 && x < 100){
        fourthRange += 1;
        total += 1;
        }
        if(x < 0 || x > 99){
          outOfRange += 1;
          total += 1;
        }
    }
    cout << std::setprecision(4) << ((firstRange/total)*100) <<endl;
    cout << std::setprecision(4) << ((secondRange/total)*100) <<endl;
    cout << std::setprecision(4) << ((thirdRange/total)*100) <<endl;
    cout << std::setprecision(4) << ((fourthRange/total)*100) <<endl;
    cout << std::setprecision(4) << ((outOfRange/total)*100) <<endl;
   
   
    
    

    return 0;
}
