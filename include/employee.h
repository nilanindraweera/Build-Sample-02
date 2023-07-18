#pragma once
#include <string_view>
class employee
{
public:
    explicit employee(std::string_view a_name);

    const std::string_view get_name() const;

private:
    std::string_view name;
};