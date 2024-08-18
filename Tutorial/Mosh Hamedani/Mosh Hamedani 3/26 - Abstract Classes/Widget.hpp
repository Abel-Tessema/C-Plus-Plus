#ifndef WIDGET_HPP
#define WIDGET_HPP

class Widget {
public:
    virtual ~Widget();
    virtual void draw() const = 0;
    void enable();
    void disable();
    bool isEnabled() const;
private:
    bool enabled;
protected:
    int width;
};

#endif