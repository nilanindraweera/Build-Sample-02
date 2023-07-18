#include "employee.h"

employee::employee(std::string_view a_name)
:name(a_name)
{

}

const std::string_view employee::get_name() const
{
    return name;
}