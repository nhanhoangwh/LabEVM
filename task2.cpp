#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

void print16(unsigned short int value) {
  cout << setfill('0') << setw(4) << hex << value << " ";
  cout << bitset<16>(value) << " ";
  cout << setfill(' ') << setw(5) << dec << value << " ";
  cout << setfill('0') << setw(4) << hex << static_cast<short int>(value) << " ";
  cout << bitset<16>(static_cast<short int>(value)) << " ";
  cout << setfill(' ') << setw(6) << dec << static_cast<short int>(value) << " ";
}

void print16(short int value) {
  cout << setfill('0') << setw(4) << hex << static_cast<unsigned short int>(value) << " ";
  cout << bitset<16>(static_cast<unsigned short int>(value)) << " ";
  cout << setfill(' ') << setw(5) << dec << static_cast<short int>(value) << " ";
  cout << setfill('0') << setw(4) << hex << static_cast<short int>(value) << " ";
  cout << bitset<16>(static_cast<short int>(value)) << " ";
  cout << setfill(' ') << setw(6) << dec << static_cast<short int>(value) << " ";
}

void print32(uint32_t value) {
  cout << setfill('0') << setw(8) << hex << value << " ";
  cout << bitset<32>(value) << " ";
  cout << setfill(' ') << setw(10) << dec << value << " ";
  cout << setfill('0') << setw(8) << hex << static_cast<int32_t>(value) << " ";
  cout << bitset<32>(static_cast<int32_t>(value)) << " ";
  cout << setfill(' ') << setw(11) << dec << static_cast<int32_t>(value) << " ";
  cout << fixed << setprecision(2) << setfill(' ') << setw(13) << dec << static_cast<double>(value) << " ";
  cout << scientific << setprecision(2) << setfill(' ') << setw(13) << dec << static_cast<double>(value) << " ";
}

void print32(int32_t value) {
  cout << setfill('0') << setw(8) << hex << static_cast<uint32_t>(value) << " ";
  cout << bitset<32>(static_cast<uint32_t>(value)) << " ";
  cout << setfill(' ') << setw(10) << dec << static_cast<int32_t>(value) << " ";
  cout << setfill('0') << setw(8) << hex << static_cast<int32_t>(value) << " ";
  cout << bitset<32>(static_cast<int32_t>(value)) << " ";
  cout << setfill(' ') << setw(11) << dec << static_cast<int32_t>(value) << " ";
  cout << fixed << setprecision(2) << setfill(' ') << setw(13) << dec << static_cast<double>(value) << " ";
  cout << scientific << setprecision(2) << setfill(' ') << setw(13) << dec << static_cast<double>(value) << " ";
}

int main() {

    // 16-bit variables
    unsigned short int uint16_val = 223;
    short int int16_val = -455;

    // 32-bit variables
    uint32_t uint32_val1 = uint16_val;
    uint32_t uint32_val2 = static_cast<uint16_t>(int16_val);
    int32_t int32_val1 = uint16_val;
    int32_t int32_val2 = int16_val;

    // Calling the print16() function for each 16-bit variable
    cout << endl << "Unsigned 16-bit value: " << endl;
    print16(uint16_val);
    cout << endl << "\nSigned 16-bit value: " << endl;
    print16(int16_val);

    // Calling the print32() function for each 32-bit variable
    cout << endl << "\nUnsigned 32-bit value (from unsigned 16-bit value): " << endl;
    print32(uint32_val1);
    cout << endl << "\nUnsigned 32-bit value (from signed 16-bit value): " << endl;
    print32(uint32_val2);
    cout << endl << "\nSigned 32-bit value (from unsigned 16-bit value): " << endl;
    print32(int32_val1);
    cout << endl << "\nSigned 32-bit value (from signed 16-bit value): " << endl;
    print32(int32_val2);
    cout << "\n\n";

    return 0;
}
