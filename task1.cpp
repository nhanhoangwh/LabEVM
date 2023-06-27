#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

// объявление и инициализация 16-битных переменных
unsigned short int max_uint16 = 0xFFFF;
unsigned short int min_uint16 = 0x0000;
short int max_int16 = 0x7FFF;
short int min_int16 = 0x8000;
short int val1 = 5;
short int val2 = -5;

// объявление и инициализация 32-битных переменных
uint32_t max_uint32 = 0xFFFFFFFF;
uint32_t min_uint32 = 0x00000000;
int32_t max_int32 = 0x7FFFFFFF;
int32_t min_int32 = 0x80000000;
int32_t val3 = 5;
int32_t val4 = -5;

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

    // вызов функции print16() для каждой переменной
    cout << "\nmax_uint16: \t";
    print16(max_uint16);
    cout << "\nmin_uint16: \t";
    print16(min_uint16);
    cout << "\nmax_int16: \t";
    print16(max_int16);
    cout << "\nmin_int16: \t";
    print16(min_int16);
    cout << "\nval1: \t\t";
    print16(val1);
    cout << "\nval2: \t\t";
    print16(val2);

    // вызов функции print32() для каждой переменной
    cout << "\n\nmax_uint32: \t";
    print32(max_uint32);
    cout << "\nmin_uint32: \t";
    print32(min_uint32);
    cout << "\nmax_int32: \t";
    print32(max_int32);
    cout << "\nmin_int32: \t";
    print32(min_int32);
    cout << "\nval3: \t\t";
    print32(val3);
    cout << "\nval4: \t\t";
    print32(val4);
    cout << "\n\n";

    return 0;
}
