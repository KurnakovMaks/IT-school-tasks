#include <iostream>

using namespace std;

class Segment {
public:
    double begin, end;

public:
    Segment(double b, double e) {
        if (b <= e) { begin = b; end = e; }
        else        { begin = e; end = b; }
    }

    double length() { return end - begin; }

    Segment operator&(const Segment& other) {
        double left = max(begin, other.begin);
        double right = min(end, other.end);

        if (left <= right) { return Segment(left, right); }
        else { return Segment(0, 0); }
    }

    Segment operator+(double x) { return Segment(begin + x, end + x); }

    Segment operator-(double x) { return Segment(begin - x, end - x); }
};

ostream& operator << (ostream& os, Segment z) {
    return os << "[" << z.begin << " ... " << z.end << "]" << endl;
}