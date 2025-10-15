#include "Student.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<Student> students;
    string filename = "Day4/students.txt";
    int choice;

    while (true)
    {
        cout << "\n1. Add Student\n2. View Students\n3. Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            string name;
            int id;
            double grade;

            cout << "Enter ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Grade: ";
            cin >> grade;

            Student s(name, id, grade);
            students.push_back(s);

            ofstream fout(filename, ios::app);
            if (fout.is_open())
            {
                fout << s.serialize() << endl;
                fout.close();
                cout << "Saved to file successfully!\n";
            }
            else
            {
                cerr << "Error: Cannot open file.\n";
            }
        }

        else if (choice == 2)
        {
            ifstream fin(filename);
            if (!fin.is_open())
            {
                cerr << "Error: File not found.\n";
                continue;
            }

            cout << "\n--- Student List ---\n";
            string line;
            while (getline(fin, line))
            {
                Student s = Student::deserialize(line);
                s.display();
            }
            fin.close();
        }

        else if (choice == 3)
        {
            cout << "Exiting program...\n";
            break;
        }

        else
        {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}