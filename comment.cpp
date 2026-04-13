//
// Created by pablo on 12/04/2026.
//

#include "comment.h"

comment::comment(std::string text, social *author)
    : text(text), author(author){}

std::string comment::get_text() const {
    return this->text;
}

social* comment::get_author() const {
    return this->author;
}
