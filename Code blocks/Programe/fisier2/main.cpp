#include <iostream>
#include <fstream>

int main() {
    std::ifstream binaryFile("example2.bin", std::ios::binary); // Open the binary file
    if (!binaryFile) {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }

    // Get the first bit
    char firstBit;
    binaryFile.get(firstBit);
    std::cout << "First bit: " << (firstBit & 1) << std::endl; // using &1 to get only the last bit
    // Get the last bit
    binaryFile.seekg(-1, binaryFile.end); // Go to the last byte of the file
    char lastBit;
    binaryFile.get(lastBit);
    std::cout << "Last bit: " << (lastBit & 1) << std::endl;
    binaryFile.close(); // Close the binary file
    return 0;
}
