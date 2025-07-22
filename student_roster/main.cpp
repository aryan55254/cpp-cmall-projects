#include <iostream>
#include <limits>
#include <string>
int main()
{
    std::cout << "Welcome To Student Roster c++ ! " << std::endl;
    std::cout << "This program is to store a roster of students with thier names and thier grades  " << std::endl;
    std::cout << "How many students are there in your class ? :" << std::endl;
    int num_students;
    while (!(std::cin >> num_students))
    {
        std::cout << "invalid input . plz enter a number" << std::endl;
        std::cin.clear();                                                   // clear the error flag on cin
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignores rest of the bad input in the input buffer
        // what happends is that when u input something in cpp it deson't go directly into the program it instead to input buffer and std::cin and std::getline read from this so it needs to be ignored otherwise next input will read the bad pevious input  . in this function the first part is to choose max no of stuff to ignore and second part is to stop when a character appears so here after \n appears ie a new line program stops ignoring
    };
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    int *student_grades = new int[num_students];
    std::string *student_names = new std::string[num_students];

    for (int i = 0; i < num_students; i++)
    {
        std ::cout << "enter the name of student no. " << i + 1 << std::endl;
        while (!(std::getline(std::cin, student_names[i])))
        {
            std::cout << "invalid input , enter a string " << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        };
        std::cout << "enter the grade (1 - 10) of student no. " << i + 1 << std::endl;
        while (!(std::cin >> student_grades[i]))
        {
            std::cout << "invalid input , enter a integer " << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        };
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    };
    std::cout << "\n--- Student Roster ---\n";
    for (int j = 0; j < num_students; j++)
    {
        std::cout << "student name : " << student_names[j] << " , student grade :" << student_grades[j] << std::endl;
    }
    delete[] student_grades;
    delete[] student_names;

    return 0;
}