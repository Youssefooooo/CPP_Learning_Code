#include <vector>
#include <iostream>
#include <deque>
#include <set>
#include <unordered_set>
#include <string>
/*
struct AbsolutePoint {
  double x = 0.0, y = 0.0;
};

AbsolutePoint default_origin;

class RelativePoint {
  const AbsolutePoint& _origin;
  AbsolutePoint        _shift;
  
public:
  RelativePoint(const AbsolutePoint shift, const AbsolutePoint& origin = default_origin) :
    _origin { origin },
    _shift { shift }
  {}

  RelativePoint():
    _origin {default_origin}
  {}

  double get_x() const { return _origin.x + _shift.x; }
  double get_y() const { return _origin.y + _shift.y; }
};

int main()
{
    std::vector<RelativePoint> v(3);
    return 0;
}
*/


/*
int main()
{
    std::vector<unsigned long> v;
    for (int i = 2; i <= 5000000; i++){
        v.emplace_back(i);
    }

    auto it = v.begin();
    while (it != v.end())
    {
        unsigned long i;
        for (i = 2; i * i <= (*it); i++){    
            if ((*it) % i == 0){
                it = v.erase(it);
                break;
            }
        }

        if ((*it) <= i * i){ 
            it ++; 
        }
    }
    
    std::cout << v.size() << std::endl;

    return 0;
}
*/

class NumAndName {
public:
  const int         _number;
  const std::string _name;

  NumAndName(int number, std::string_view name) :
    _number { number }, _name { name }
  {}
  
  friend std::ostream& operator<<(std::ostream& os, const NumAndName& n) {
    return os << n._name;
  }
};

bool operator<(const NumAndName& a, const NumAndName& b)
{
    return a._number > b._number;
}

const std::set<NumAndName> num_and_names { { 3, "trois" }, { 1, "un" }, { 2, "deux" }, { 0, "zero" } };

int main() {
  for (const auto& nn: num_and_names) {
    std::cout << nn << ' ';
  }
  
  return 0;
}