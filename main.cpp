#include <iostream>
#include <String>
#include <iomanip>

double cube_multiplier (double width, double height, double length) {
    double volume = width * height * length;

    return volume;
}

int main(){

double width {};
double height{};
double length{};

std::cout << "Put in the dimensions of your cube separated by a space (length, width, height):"<< std::endl;

std::cin >> length >> width >> height;

double volume = cube_multiplier(width, height, length);

std::cout << "The volume of your cube is "<<volume;

return 0;
};