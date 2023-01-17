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


/* size_t pos = 0;
while ((pos = line.find(s2, pos)) != std::string::npos) {
    line[pos] = s3[0];
    pos++;
}
std::cout << line << std::endl; */