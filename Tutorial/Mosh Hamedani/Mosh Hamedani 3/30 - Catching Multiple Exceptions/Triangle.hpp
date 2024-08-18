#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

class Triangle : public Shape {
public:
    void draw() const override;
private:
    int base;
    int height;
};

#endif