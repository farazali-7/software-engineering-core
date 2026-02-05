/*
Vectors
1-syntax
vector<int>vect;
vector<int>vect ={1,2,3,4,5};
vector<int>vect = (4,9);  [size 4, by default 9 in each]

2-methods
puch_back,
pop_back,
front,
back ,
size,
at ,

3-static vs dynamic allocation
Static memory allocation means:
Memory size is decided at compile time and cannot change at runtime
Size is fixed
⦁	Allocated once
⦁	Fast
⦁	Cannot be resized
⦁	Stored in stack or static/global memory

When memory is freed?
Automatically when:
Function ends (stack)
Program ends (static/global)

Dynamic memory allocation means:
Memory is allocated at runtime, and size can be decided while program is running.

Size is flexible
Allocated during execution
Slower than static
Must be manually managed (in C/C++)
Risk of memory leaks

each vector will have two properties
[NOTE:if memory is ended and have to push new value in vector eachn time with same case capacity is doubled of the vector]
size--> to print the size[actual values present] of the vector
capacity-->to print the capacity[actual space occupying in the memory means 10 values etc]

*/