//
// Created by pablo on 12/04/2026.
//

#ifndef UNTITLED6_COMMENT_H
#define UNTITLED6_COMMENT_H
#include <string>
#include "social.h"


class comment {
private:
    std::string text;
    social* author;

public:
    comment(std::string text, social* author);
    std::string get_text() const;
    social* get_author() const;
};


#endif //UNTITLED6_COMMENT_H