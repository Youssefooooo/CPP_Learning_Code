#pragma once
#include "point.hpp"
<<<<<<< HEAD
#include <list>

using PointContainer = std::list<Point>;

// forward-declare the Line class in order to use it for intersection
class Line;
class Circle;
=======

using PointContainer = ???;

// forward-declare the Line class in order to use it for intersection
class Line;
>>>>>>> upstream/master

class Shape {
public:
	virtual PointContainer intersect(const Shape& other) const = 0;
	virtual PointContainer intersect(const Line& ln) const = 0;
<<<<<<< HEAD
	virtual PointContainer intersect(const Circle& c) const = 0;
	virtual ~Shape() {}
	
	virtual std::ostream& print(std::ostream& os) const = 0;
=======
	virtual ~Shape() {}
	
	std::ostream& print(std::ostream& os) const {
		return os << "some shape";
	}
>>>>>>> upstream/master

	friend std::ostream& operator<<(std::ostream& os, const Shape& s) { return s.print(os); }
};
