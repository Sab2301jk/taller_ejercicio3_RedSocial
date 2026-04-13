#include <iostream>
#include "social.h"
#include "publication.h"
#include "comment.h"

int main() {
    social author_user("Juan_Pablo");
    social reader_user("Ana_Maria");

    publication my_post("https://photos.co/park.jpg", "Disfruntado la naturaleza");

    comment new_comment("Que hermoso esta el parque", &author_user);

    my_post.add_comments(new_comment);
    my_post.give_likes();

    my_post.show_detail();

    return 0;
}