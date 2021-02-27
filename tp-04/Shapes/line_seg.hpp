#pragma once

#include "line.hpp"

class LineSegment: public Line {
protected:
	using Line::first;
	using Line::last;
public:
	using Line::Line;

	~LineSegment() = default;

	bool point_is_inside(const Point& p) const {
		float minx, maxx, miny, maxy;
		if (first.x > last.x) {
			minx = last.x;
			maxx = first.x;
		}
		else {
			minx = first.x;
			maxx = last.x;
		}
		if (first.y > last.y) {
			miny = last.y;
			maxy = first.y;
		}
		else {
			miny = first.y;
			maxy = last.y;
		}
		return (p.x >= minx) && (p.x <= maxx) 
		&& (p.y >= miny) && (p.y <= maxy);
	}

	void filter_points_inside(PointContainer& points) const {
		for(auto iter = points.begin(); iter != points.end();) {
			if(point_is_inside(*iter)) {
				++iter;
			} else {
				iter = points.erase(iter);
			}
		}
	}

	PointContainer intersect(const Line& ln) const override{
		const Line l = *this;
		auto points = ln.intersect(l);
		filter_points_inside(points);
		return points; 
	}

	PointContainer intersect(const Shape& other) const override {
		const Line l = *this;
		auto points = other.intersect(l);
		filter_points_inside(points);
		return points;
	}

	std::ostream& print(std::ostream& os) const override{
		return os << "line segment " << first << "--" << last;
	}
};
