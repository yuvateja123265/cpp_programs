#include <iostream>  
using namespace std;
class Car { 
public:  
    string brand;  
    string model;  
    int year; 
    Car()
	{   
        brand = "Toyota";  
        model = "Fortuner";  
        year = 2020;  
    }  
}; 
int main()
{  
    Car my_car;  
    cout << "Brand: " << my_car.brand << endl;  
    cout << "Model: " << my_car.model << endl;  
    cout << "Year: " << my_car.year << endl;  
    return 0;  
}  
