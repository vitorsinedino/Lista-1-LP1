#include "function.h"

/*
blz
*/
std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.
    int t1 = 1;
    int t2 = 1;
    int nextTerm = 0;
    std::vector<unsigned int> v = {};

    
    if(n == 1){
      return v;
    }else{
      for (int i = 1; i <= n; i++){
        if (i == 1){
          v.push_back(t1);
        }
        if (i == 2){
          v.push_back(t2);
        }
        if (i > 2 && (t1+t2) < n){
          nextTerm = t1 + t2;
          t1 = t2;
          t2 = nextTerm;
          v.push_back(nextTerm);         
        }
      }
    }
    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return v;
}
