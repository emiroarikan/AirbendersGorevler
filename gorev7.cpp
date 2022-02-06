#include <iostream>
#include <cstddef>
#include <cstring>
#include <stdlib.h>
#include <valarray>
  
int main(int argc, char* argv[]) // arg1 -> katsayi, arg2 -> sutun sayisi, arg3 -> sayi dizisi
{
    std::valarray<int> arr(argc - 3); 

    for (int i=0; i<strlen(argv[3])*(argc-3); i++) 
        arr[i] = atoi(argv[i+3]);
    
    size_t start = 0;
    size_t length[] = {atoi(argv[2])};
    size_t stride[] = {1};

    std::gslice mygslice (start,
                        std::valarray<std::size_t>(length,2),
                        std::valarray<std::size_t>(stride,2));
    std::valarray<int> bar = arr[mygslice];

    for (int i = 0; i < sizeof(bar)/sizeof(int); i++)
        bar[i] = atoi(argv[1]);
    
    arr[std::slice(0, atoi(argv[1]), 1)] *= bar;

    for(int i=0; i<strlen(argv[1])*(argc-3); i += atoi(argv[2]))
    {
        for(int k=i; k<atoi(argv[2])+i; k++)
            std::cout << arr[k] << " ";
        std::cout << std::endl;
    }

    return 0;
}