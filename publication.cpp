//
// Created by pablo on 12/04/2026.
//

#include "publication.h"
#include <iostream>

publication::publication(std::string URL, std::string description)
    : image_URL(URL), description(description), likes(0) {}

void publication::give_likes() {
    this->likes++;
}

void publication::add_comments(const comment &c) {
    this->comments.push_back(c);
}

void publication::show_detail() const {
    std::cout << "\n === SOCIAL MEDIA POST ===" << std::endl;
    std::cout << "Photo:" << this->image_URL << std::endl;
    std::cout << "Caption:" << this->description << std::endl;
    std::cout << "Likes:" << this->likes << std::endl;
    std::cout << "=== Comments ===" << std::endl;

    for (const auto& c : this->comments) {
        std::cout << "@" << c.get_author()->getusername() << " : " << c.get_text() << std::endl;
    }
    std::cout << "==================" << std::endl;
}
