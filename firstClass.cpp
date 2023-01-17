#include <iostream>
using namespace std;

class Hero {
    private:   
    int health;

    public:
    char level;

    Hero(){
        cout<<"h1 ka constructor"<<endl;
    }
    Hero(int health){
        this -> health = health;
        cout<< "address of h1"<< this<<endl;
    }

    void print(){
        cout << level << endl;
    }
    int gethealth(){
        return health;
    } 
    int sethealth(int h){
        health = h;
    }
    char getlevel(){
        return level;
    }
    char setlevel(char l){
        level = l;
    }
};

int main(){

    Hero h1(10);

    cout<< "address og h1:"<<&h1<<endl;
    h1.setlevel('B');

    cout<< "health is " << h1.gethealth() <<endl;
    cout<< "level is "<< h1.level<<endl; 
    
    Hero*h = new Hero;

    h->sethealth(30);
    cout<<"the health is "<< (*h).gethealth()<<endl;
    cout<<"the health is "<< h->gethealth()<<endl;    
    return 0; 
}