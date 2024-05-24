#include "joel.hpp"


std::string Joel::get_alter_und_grösse(){
    return "Alter: " + std::to_string(Joel::_alter)+ "Grösse:" + std::to_string(Joel::_grösse);
}