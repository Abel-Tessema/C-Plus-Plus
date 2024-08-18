#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <string>

using namespace std;

class Shape {
public:
    virtual void draw() const;
    string getBackground();
    void setBackground(string background);
private:
    string background;
};

#endif