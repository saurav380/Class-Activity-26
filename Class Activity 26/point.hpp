#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

struct Point {
    int x;
    int y;

    // Overload the equality operator
    bool operator==(const Point& other) const;

    // Overload the stream insertion operator
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};

#endif // POINT_H
