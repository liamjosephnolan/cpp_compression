#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main (int argc, char *argv[]) {
  std::cout << "Starting Program...\n";
  std::string filename = "dragonfly.txt";

  std::ifstream file(filename);
    // Check if the file is open
    if (!file.is_open()) {
        std::cerr << "Error: Could not open the file " << filename << std::endl;
        return 1;  // Exit the program with an error code
    }

    // Variable to hold the word count
    int word_count = 0;
    std::string line;

    // Read the file line by line
    while (std::getline(file, line)) {
        // Create a string stream from the line
        std::stringstream ss(line);
        std::string word;

        // Count the words in the current line
        while (ss >> word) {  // Extract words from the stream
            ++word_count;     // Increment the word count for each word found
        }
    }

    // Close the file
    file.close();

    // Output the total word count
    std::cout << "Total number of words: " << word_count << std::endl;
  return 0;
}
