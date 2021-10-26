#include <iostream>
#include <vector>
#include <stdlib.h>
 
float filter(float input)
{
    static std::vector<float> storage;
    float sensor_value;
    
        if (storage.empty()) {
            storage.push_back(0.0);
            sensor_value = (storage.at(0)) + (input * 0.9);
            storage.push_back(sensor_value);
        } 
        
        else {
            storage.erase(storage.begin());
            sensor_value = (storage.at(0)) + (input * 0.9);
            storage.push_back(sensor_value);
        } 
 
        return sensor_value;
}
 
int main()
{
    int n = 10;
    do
    {
        float input = static_cast <float> (rand() % 100 + 1);
        std:: cout << "Input value: " << input << 
        " Filtered Result: "<<filter(input) << std::endl;
    } while (--n);
    return 0;
}