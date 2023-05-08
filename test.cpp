#include <iostream>
#include <string>

// class Zombie {
// public:
//     Zombie(){ }
//     Zombie(std::string name) : name(name) {}
//     void announce() const {
//         std::cout << "Braiiiiiiinnnssss..." << name << std::endl;
//     }
// private:
//     std::string name;
// };

// Zombie* zombiesHorde(int N, std::string name) {
//     Zombie* horde = new Zombie[N];
//     for (int i = 0; i < N; i++) {
//         new(&horde[i]) Zombie(name);
//     }
//     return horde;
// }

// int main() {
//     int N = 5;
//     std::string name = "zombi";
//     Zombie* horde = zombiesHorde(N, name);
//     for (int i = 0; i < N; i++) {
//         horde[i].announce();
//     }
//     for(int i = 0; i < N; i++) {
//         horde[i].~Zombie();
//     }
//     delete[] horde;
//     return 0;
// }

// Soyut bir sınıf tanımlanıyor.
class Shape {
public:
    // Kenar sayısına göre şekil ismini döndüren saf sanal bir işlev
    virtual std::string getName() const = 0;

    // Kenar sayısına göre şeklin alanını hesaplayan saf sanal bir işlev
    virtual double getArea() const = 0;

    // Kenar sayısına göre şeklin çevresini hesaplayan saf sanal bir işlev
    virtual double getPerimeter() const = 0;

    // Destructer
    virtual ~Shape() {};
};

// Shape sınıfından türetilen bir sınıf: Circle (Daire)
class Circle : public Shape {
public:
    // Yarıçapı gönderilen çemberi yaratır
    Circle(double radius) : m_radius(radius) {}

    // Çemberin adını döndürür
    std::string getName() const {
        return "Circle";
    }

    // Çemberin alanını hesaplar
    double getArea() const {
        return 3.14 * m_radius * m_radius;
    }

    // Çemberin çevresini hesaplar
    double getPerimeter() const {
        return 2 * 3.14 * m_radius;
    }

private:
    double m_radius;
};

// Shape sınıfından türetilen bir sınıf: Rectangle (Dikdörtgen)
class Rectangle : public Shape {
public:
    // En ve boyu gönderilen dikdörtgeni yaratır
    Rectangle(double width, double height) : m_width(width), m_height(height) {}

    // Dikdörtgenin adını döndürür
    std::string getName() const {
        return "Rectangle";
    }

    // Dikdörtgenin alanını hesaplar
    double getArea() const {
        return m_width * m_height;
    }

    // Dikdörtgenin çevresini hesaplar
    double getPerimeter() const {
        return 2 * (m_width + m_height);
    }

private:
    double m_width;
    double m_height;
};

// Şekilin adını, alanını ve çevresini ekrana yazdıran bir işlev
void printShapeInfo(const Shape& shape) {
    std::cout << "Shape: " << shape.getName() << std::endl;
    std::cout << "Area: " << shape.getArea() << std::endl;
    std::cout << "Perimeter: " << shape.getPerimeter() << std::endl;
}

int main() {
    // Hatalı: Shape sınıfı soyut olduğu için bu şekilde oluşturulamaz!
    // Shape shape;

    // Shape sınıfından türetilen Circle sınıfının nesnesi oluşturuluyor
    Circle circle(5);
    printShapeInfo(circle);

    // Shape sınıfından türetilen Rectangle sınıfının nesnesi oluşturuluyor
    Rectangle rectangle(2, 4);
    printShapeInfo(rectangle);

    return 0;
}
