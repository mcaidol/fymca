#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    char line[200];
    int count = 0; // To count sentences not starting with 'A'
    
    // Create an output file stream and write to the file
    ofstream o("STORY.txt");
    if (!o) {
        cerr << "Error creating file.\n";
        return 1;
    }
    o << "The Roses are red.\n";
    o << "A girl is playing there.\n";
    o << "An aeroplane is in the sky.\n";
    o << "Numbers are not allowed in passwords.\n";
    o.close(); // Close the output file stream

    // Open the file for reading
    ifstream i("STORY.txt");
    if (!i) {
        cerr << "Error opening file.\n";
        return 1;
    }

    cout << "Content of file 'STORY.txt':\n";

    // Read the file line by line
    while (i.getline(line, 200)) {
        cout << line << "\n"; // Display the content of the file
        if (line[0] != 'A') { // Check if the first character is not 'A'
            count++;
        }
    }

    i.close(); // Close the input file stream

    cout << "Total sentences not starting with 'A': " << count << "\n";

    return 0;
}