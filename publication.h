//
// Created by pablo on 12/04/2026.
//

#ifndef UNTITLED6_PUBLICATION_H
#define UNTITLED6_PUBLICATION_H

#include <string>
#include <vector>
#include "comment.h"


class publication {
private:
    std::string image_URL;
    std::string description;
    int likes;
    std::vector<comment> comments;

public:
    publication(std::string URL, std::string description);
    void give_likes();
    void add_comments(const comment& c);
    void show_detail() const;
};


#endif //UNTITLED6_PUBLICATION_H