#include <iostream>
#include <vector>

void manipulation(std::vector<int> &vec)
{
    for (int &x : vec)
    {
        x = x * 2;
    }
}

void printValues(std::vector<int> &vec)
{
    for (int &x : vec)
    {
        std::cout << "  " << x;
    }
}

int main()
{
    // a-declaring vect of size 0 without any value
    std::vector<int> vect_a;
    // b-declaring and inserting values in vector
    std::vector<int> vect_b = {1, 2, 3, 45, 6};
    // c-declaring of n size and default values
    //( n , v)
    std::vector<int> vect_c(5, 6);

    printValues(vect_c);
    std::cout << ' ' << std::endl;
    manipulation(vect_b);
    // now values are 2,3,6,90,12 of orrignal array
    printValues(vect_b);

    // d-capacity= (actual size of the vector , how many values could be stored)
    std::cout << "capacity of vector c:" << vect_c.capacity() << std::endl;
    // e-size = total values in the vector
    std::cout << "size of vector a:" << vect_a.size() << std::endl;
}
