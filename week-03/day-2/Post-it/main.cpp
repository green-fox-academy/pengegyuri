#include <iostream>
#include "Post_it.h"

int main() {

    /*Create a few example post-it objects:

    an orange with blue text: "Idea 1"
    a pink with black text: "Awesome"
    a yellow with green text: "Superb!"
*/
    Post_it postit1("orange", "Idea 1","blue");
    Post_it postit2("pink", "Awesome","black");
    Post_it postit3("yellow", "Superb!","green");

    return 0;
}