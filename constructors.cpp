#include <iostream>
#include <vector>
using namespace std;

class donut{
    public:
        string dough;
        bool powder;
        string frosting;
        bool sprinkles;
        bool filled;

    donut(string dough, string frost, bool sprink, bool filled){ 
        frost = frosting;
        sprink = sprinkles; 
        cout << "a donut is made yay!" << endl;
    }
    
    donut(string dough, string frost, bool sprink, bool filled){ 
        frost = frosting;
        sprink = sprinkles; 
        cout << "a specialty donut is made yay!" << endl;
    }

    ~donut(){
        cout << "a donut is eaten... :(" << endl;
    }

    void print_donut(){
        cout << frosting << dough << endl;
        switch(sprinkles){
            case false:
            cout << "No Sprinkles";
            case true:
            cout << "With Sprinkles";
        }
        switch(filled){
            case false:
            cout << "No Filling";
            case true:
            cout << "With Sprinkles";
        }
        switch(powder){
            case false:
            cout << "No powdering";
            case true:
            cout << "With powdering";
        }



    }
}; 

int main(void){
    donut bar;
    bar.dough = "Clasic ";
    bar.frosting = "Chocolate ";
    bar.sprinkles = false;
    bar.filled = true;
    bar.powder = false;
    bar.print_donut();

    donut ring("Classic", "Maple", false);

    return 0;
}
