#ifndef GAMECLASS_H_INCLUDED
#define GAMECLASS_H_INCLUDED

class game
{
    public:

    int x, y; //object's x and y position
    char body = '@'; //object character
    
    //object movement functions
    
    void OneUp();

    void OneDown();
    
    void OneLeft();
    
    void OneRight();



};



#endif //GAMECLASS_H_INCLUDED