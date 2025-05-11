#include <iostream>

int main()
{
    // we can't use switch with non integers
    // assigns 0,1,2,3,4,... by default
    enum PlayerStatus
    { // defining an enum -> int const inside
        running,
        sprinting,
        crouching,
        ducking // acts just like int data type
    };
    PlayerStatus status; // var of enum type ,
    // select one of those items
    // PlayerStatus status = sprinting;
    status = PlayerStatus::ducking;
    status = PlayerStatus::sprinting;
    switch (status)
    {
    case running:
        std::cout << "bish runs";
        break;
    default:
        std::cout << "sth wrong";
    }
}