#include <string>
#include <iostream>

int main(){
std::string line("denemen");
std::string s2("en");
std::string s3("asa");

size_t pos = 0;
while ((pos = line.find(s2, pos)) != std::string::npos) {
    line.erase(pos, s2.length());
    line.insert(pos, s3);
    pos += s3.length();
}
std::cout << line << std::endl;
}

/*  float a(0.00000005);
    std::cout<< std::fixed << a << std::endl;
    float b(2.54e-3);
    std::cout << b << std::endl;
    std::cout.setf(std::ios::fixed);
    std:: cout << std::scientific << b << std::endl;
    std::cout.setf(std::ios::scientific | std::ios::fixed);
    std::cout << b << std::endl;
    int c = 15;
    std::cout << std::oct << c << std::endl;
    std::cout << std::uppercase << std::hex << c << std::endl;
    std::cout << std::nouppercase;

 */
/* size_t pos = 0;
while ((pos = line.find(s2, pos)) != std::string::npos) {
    line[pos] = s3[0];
    pos++;
}
std::cout << line << std::endl; */