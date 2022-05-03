#pragma once
#include "Object.hpp"
#include <string>
#include <vector>

class Document : public Object
{
private:
    std::vector<std::string> lines;
    size_t cursor = 1;
public:
    Document(const std::string& name, const std::string& location, const std::string& extension);

    void write_line(const std::string& line);

    std::string read_line();
    std::string read_line(const unsigned line);

    bool operator==(const Comparable*) const override;
    bool operator!=(const Comparable*) const override;

    std::string to_string() const override;
    void from_string(const std::string&) override;

    size_t getCursor() const;
    std::string debug_print() const override;

    void setCursor(const size_t);

    Object* clone() const override;
};