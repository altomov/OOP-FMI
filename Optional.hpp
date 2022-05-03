#pragma once
#include <type_traits>
#include <yvals.h>

// Add whatever else is required to exist in or out the class
// as well as whatever you think is good to be declared too

template <typename T>

class Optional {
public:

    T value;

    Optional()
    {
        value = 0;
    }
    Optional(const T& value)
    {
        this->value = value;
    }

    bool is_none() const
    {
        if (value == NULL)return true;
        else return false;
    }

    T get_value() const
    {
        return value;
    }

};