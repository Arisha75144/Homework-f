//The format_address function separates out parts of the address string into new strings: house_number and street_name,
//        and returns: "house number X on street named Y".
//The format of the input string is: numeric house number, followed by the street name which may contain numbers,
//but never by themselves, and could be several words long.
//For example, "123 Main Street", "1001 1st Ave", or "55 North Center Drive".

#include <iostream>


using namespace std;

std::string format_address(std::string address) {
//  Split the address into parts  "123 Main Street" -> "123" "Main Street"
    std::string house_number = "";
    std::string street_name = "";

    int i = 0;
    while (address[i] != ' ') {
        house_number += address[i];
        i++;
    }
    i++;
    while (i < address.size()) {
        street_name += address[i];
        i++;
    }
    return "house number " + house_number + " on street named " + street_name;

}


int main() {
    std::string address;
    std::cout << "Enter your address: ";
    std::getline(std::cin, address);
    std::cout << format_address(address) << std::endl;
    return 0;
}
