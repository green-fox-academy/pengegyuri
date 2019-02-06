//
// Created by gyuri on 2019.02.06..
//
/*Scanner
class member:
        _speed: int
        constructor that gets an integer and assigns speed with it
scan() function which prints: "I'm scanning a document speed() ppm" to the console

 */
#ifndef MODELDEVICES_SCANNER_H
#define MODELDEVICES_SCANNER_H


class Scanner
{
public:
    Scanner(int speed);
    void scan();
private:
    int _speed;
};


#endif //MODELDEVICES_SCANNER_H
