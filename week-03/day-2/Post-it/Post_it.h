//
// Created by gyuri on 2019.01.29..
//

#ifndef POST_IT_POST_IT_H
#define POST_IT_POST_IT_H

#include <iostream>

class Post_it {
    private:
        std::string backGroundColor;
        std::string text;
        std::string textColor;
    public:
        Post_it (std::string bG, std::string t, std::string tC);

};


#endif //POST_IT_POST_IT_H
