#pragma once

#include <iostream>
#include <string>
using namespace std; 

public class Result {
private: 
      bool success;
      string message;
public :

    Result(bool success) {
        this->success = success; 
    }

    Result(bool success, string message) {
        this->success = success;
        this->message = message; 
    }

    bool isSuccess() {
        return this->success; 

    }

    string message() {
        return this->message; 
    }

};


/*


#pragma once

class Door2{

private:
    bool Open;
    bool Lock;
public:
    void open();
    void close();
    void lock();
    void unlock();
};
And the Door.cpp

//Door.cpp The file that checks if the "door" is closed open locked unlocked etc.
#include "Door2.h"
#include <iostream>

using namespace std;

void Door2::open(){
    if (Open == true){
         cout << "The door is already open!" << endl;
    }else{
    Open = false;
    cout << "The door is open!" << endl;
}
}
void Door2::close(){
    if (Open == false){
        cout << "The door is already closed!" << endl;
    }else{
        Open = true;
        cout << "The door is closed!" << endl;
    }
}
void Door2::lock(){
    if (Lock == true){
         cout << "The door is already locked!" << endl;
    }else{
        Lock = false;
        cout << "The door is locked!" << endl;
    }

}

void Door2::unlock(){
*/