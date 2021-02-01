#include "Polygon.h"
#include "realloc.h"
 
Polygon::~Polygon()
{
    delete[] _vertices;
}

void Polygon::add_vertex(int a, int b){
    const auto old_size = _size;
    ++_size;

    _vertices = realloc(_vertices, old_size, _size);
    _vertices[old_size] = Vertex { a, b };
}

const Vertex& Polygon::get_vertex(int index) const {
    return _vertices[index];
}

std::ostream& operator<<(std::ostream& stream, const Polygon& polygon)
{
    for (size_t i = 0; i < polygon._size; i++){
        const auto& p =polygon._vertices[i];
        stream << "(" << 
        p.first << ", " 
        << p.second << ") ";
    }
    return stream;
}