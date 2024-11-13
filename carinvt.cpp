#include <iostream>
#include <string>
using namespace std;


class cars{
    public:
        string make;
        string model;
        int year;
        int usage_years;
        float mpg;

        void printDetails(){
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl; 
        }
        bool age_check(){
            cout << "Year: ";
            cin >> year;
            switch(year < 1885) {
                case true: 
                int retrival_year;
                cout << "When did you retrive the Vehicle: ";
                cin >> retrival_year;
                cout << "Made before 1885, Retrived in: " << retrival_year;
                case false:
                break;
            }
        }
        cars(string m, string mo, int y){ 
        make = m;
        model = mo;
        year = y;
        cout << "Open for buying" << endl;
    }
    cars(){

    }
    private:
};


int main(void){
    cars car1;
        car1.make = "Mercedes";
        car1.model = "Benz ML500";
        car1.usage_years = 3;
        car1.mpg = 15.6;
        car1.printDetails();
        car1.age_check();


    cars car2 ("Jeep", "Wrangler", 2018);
        car2.usage_years = 6;
        car2.mpg = 18;
        car2.printDetails();
        car2.age_check();
   
    
    
    return 0;
}
