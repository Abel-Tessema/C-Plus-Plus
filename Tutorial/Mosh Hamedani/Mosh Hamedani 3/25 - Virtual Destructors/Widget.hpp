#ifndef WIDGET_HPP
#define WIDGET_HPP

class Widget {
public:
    virtual ~Widget();
    virtual void draw() const;
    void enable();
    void disable();
    bool isEnabled() const;
private:
    bool enabled;
protected:
    int width;
};

#endif