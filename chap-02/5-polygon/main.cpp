#include <iostream>

#include "Polygon.h"

int main()
{
    Polygon polygon;

    polygon.add_vertex(2, 3);
    polygon.add_vertex(4, 5);
    polygon.add_vertex(6, 7);
    std::cout << polygon << std::endl;

    const auto& vertex = polygon.get_vertex(1);
    std::cout << "(" << vertex.first << "," << vertex.second << ")" << std::endl; // -> (4,5)

    polygon.add_vertex(8, 9);
    
<<<<<<< HEAD
    std::cout << vertex.first << " " << vertex.second << std::endl; // -> ???
=======
    // std::cout << "(" << vertex.first << "," << vertex.second << ")" << std::endl; //-> ???
>>>>>>> 43cab3b8d13e2ef0e3c6aad884c4c6c72fe4de05

    return 0;
}
