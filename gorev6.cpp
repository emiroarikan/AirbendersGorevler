#define _USE_MATH_DEFINES // M_PI
#include <cmath>
#include <iostream>
using namespace std;

class RegularPolygon {
private:
    int n;
    float angle = 360/n;

public:
    static int count;
    RegularPolygon(int n)
    :n(n)
    {count +=1;}

    float area (int lenght) {
        return ((lenght/(2*sin((angle*M_PI/180)/2)))*(lenght/(2*sin((angle*M_PI/180)/2)))*sin((angle*M_PI/180))*n)/2;
    }

    float lenght (float area) {
        return sqrt((8*area*sin((angle*M_PI/180)/2)*sin((angle*M_PI/180)/2))/n*sin((angle*M_PI/180)));
    }

    int getCount() {
        return count;
    }

};


int RegularPolygon::count = 0;

int main() {
    RegularPolygon square = RegularPolygon(4);
    RegularPolygon triangle = RegularPolygon(3);
    RegularPolygon foo = RegularPolygon(7);

    cout << square.area(4) << endl << square.lenght(49) << endl;
    cout << triangle.area(4) << endl << triangle.lenght(49) << endl;

    cout << square.getCount() << endl;
    return 0;
}
