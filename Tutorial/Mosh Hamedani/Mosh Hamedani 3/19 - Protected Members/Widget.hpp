#ifndef WIDGET_HPP
#define WIDGET_HPP

class Widget {
public:
    void enable();
    void disable();
    bool isEnabled() const;
private:
    bool enabled;
protected:
    int width;
};

#endif