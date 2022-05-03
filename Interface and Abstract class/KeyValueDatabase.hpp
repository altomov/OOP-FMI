#pragma once
#include "Object.hpp"
#include <vector>
#include <string>

class KeyValueDatabase : public Object
{
private:
    std::vector<std::pair<std::string, int>> pairs;

public:
    KeyValueDatabase(const std::string& name, const std::string& location, const std::string& extension);

    void add_entry(const std::pair<std::string, int>& entry);
    int get_value(const std::string& key) const;

    std::string to_string() const override;
    void from_string(const std::string&) override;

    std::string debug_print() const override;

    Object* clone() const override;

    bool operator==(const Comparable*) const override;
    bool operator!=(const Comparable*) const override;
};