#ifndef CHECKBOX_HPP
#define CHECKBOX_HPP

#include "Widget.hpp"

class CheckBox : public Widget {
public:
    ~CheckBox();
    void draw() const override;
};

#endif