#include "function.h"
#include <algorithm>
#include <vector>

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */
/*
deu segfault na execução
vou considerar 50% pelo uso correto das funções da stl embora não tenha sido essa a ideia
*/
std::pair<int,int> min_max( int V[], size_t n )
{

    std::vector<int> dest(V, V + n);
    // TODO: Adicione aqui sua solução.
    int maxElementIndex = std::max_element(dest.begin(),dest.end()) - dest.begin(); //aqui vc poderia usar std::begin e std::end passando V como argumento
    int maxElement = *std::max_element(dest.begin(), dest.end());

    int minElementIndex = std::min_element(dest.begin(),dest.end()) - dest.begin();
    int minElement = *std::min_element(dest.begin(), dest.end());
    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return { minElementIndex, maxElementIndex }; //provavelmente vc confundil index com iterator/ponteiro
}
