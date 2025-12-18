#include <iostream>
#include <vector>

void capacityConcept(std::vector<int> &zes)
{
    // this concept state that wheneve a value is pushed/inserted in the vector each time if space ends , it will occupy same space of the size already existing , means doubles
    zes.push_back(2); // vector size 1
    zes.push_back(7); // size 2 now will double so become 4
    zes.push_back(9); //

    std::cout << "Size: " << zes.size() << "\n";
    std::cout << "Capacity: " << zes.capacity() << "\n";
}
void printValues(std::vector<int> &vec)
{
    for (int &z : vec)
    {
        std::cout << z << "  ";
    }
    std::cout << ' ' << std::endl;
}
void vector_Methods(std::vector<int> &vect)
{

    //vector Methods 
    // push_back = push at the end
    vect.push_back(40);
    vect.push_back(100);
    // pop_back = pop from the end
    vect.pop_back();
    // front = return first value of vector
    std::cout << "front value :" << vect.front() << '\n';
    // back = return last value
    std::cout << "last value :" << vect.back() << '\n';
    // at= return value of specfic index
    std::cout << "at index 4:" << vect.at(4) << '\n';
    // capacity = return capacity of the array
}

int main()
{
    // a-declaring vect of size 0 without any value
    std::vector<int> vect_a;
    // b-declaring and inserting values in vector
    std::vector<int> vect = {1, 2, 3, 45, 6};

    // calling functions
    capacityConcept(vect_a);
    printValues(vect_a);
    vector_Methods(vect);
}