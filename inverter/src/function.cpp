#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
   std::reverse(std::begin(arr), std::end(arr));

}
