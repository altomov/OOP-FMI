#pragma once
#include <string>
class Error {
public:

    std::string message;

    Error(const std::string& message = "Error")
    {
        this->message = message;
    }

    std::string get_message() const
    {
        return message;
    }
};