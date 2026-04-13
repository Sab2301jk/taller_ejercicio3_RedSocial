//
// Created by pablo on 12/04/2026.
//

#include "social.h"

social::social(std::string username) : username(username) {}

std::string social::getusername() const {
    return  this->username;
}