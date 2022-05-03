#pragma once

// Add whatever else is required to exist in or out the class
// as well as whatever you think is good to be declared too

#include "Error.hpp"
#include "Optional.hpp"

template<typename T>

class Result {
public:
    
    T result;
    T error_message;

    Result();
    Result(const T& result)
    {
        this->result = result;
    }
    Result(const std::string& error_message)
    {
        this->error_message = error_message;
    }

    Optional<T> get_result() const
    {
        return result;
    }
    Optional<Error> get_error() const
    {
        return error_message;
    }

    bool operator==(const Error& error) const
    {
        return result == error;
    }

    bool operator==(const T& t) const
    {
        return result == t;
    }
};