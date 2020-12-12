#include <iostream>
#include <math.h>
#include <vector>
#define G 9.81
#define pi 3.141617
using namespace std;

struct Do{
    float d = 800;
    float Ho = 100;
    float Xo = 0;
    float Yo = Ho;
    float d0 = 0.05*d;
};

struct Dd{
    float d = 800;
    float Hd = 20;
    float Xd = d;
    float Yd = Hd;
    float d0 = 0.025*d;
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
