#include <iostream>
#include <string>

using namespace std;

// �ڵ����� �⺻ ������ �����ϴ� ����ü
struct CarInfo {
    string brand;
    string model;
    int year;
    double price;

    void displayInfo() {
        cout << "Brand: " << brand << "\nModel: " << model
            << "\nYear: " << year << "\nPrice: $" << price << endl;
    }
};

// ���� ������ �����ϴ� ����ü
struct Engine {
    string type;
    int horsepower;
    double displacement;

    void showEngineSpecs() {
        cout << "Engine Type: " << type << "\nHorsepower: " << horsepower
            << "\nDisplacement: " << displacement << "L" << endl;
    }
};

// ������ �߰� �ɼ� ������ �����ϴ� ����ü
struct CarFeatures {
    bool sunroof;
    bool navigation;
    bool autopilot;

    void showFeatures() {
        cout << "Sunroof: " << (sunroof ? "Yes" : "No")
            << "\nNavigation: " << (navigation ? "Yes" : "No")
            << "\nAutopilot: " << (autopilot ? "Yes" : "No") << endl;
    }
};

// �ڵ��� Ŭ����
class Car {
private:
    CarInfo info;
    Engine engine;
    CarFeatures features;

public:
    Car(string brand, string model, int year, double price,
        string engineType, int hp, double displacement,
        bool sunroof, bool navigation, bool autopilot)
    {
        info = { brand, model, year, price };
        engine = { engineType, hp, displacement };
        features = { sunroof, navigation, autopilot };
    }

    void showCarDetails() {
        info.displayInfo();
        engine.showEngineSpecs();
        features.showFeatures();
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Car car1("BMW", "M3", 2024, 75000, "V6", 473, 3.0, true, true, false);
    Car car2("Tesla", "Model S", 2023, 79990, "Electric", 1020, 0.0, true, true, true);
    Car car3("Mercedes", "C300", 2022, 45000, "I4", 255, 2.0, true, false, false);
    Car car4("Audi", "A6", 2023, 55000, "V6", 335, 3.0, true, true, false);

    car1.showCarDetails();
    car2.showCarDetails();
    car3.showCarDetails();
    car4.showCarDetails();

    return 0;
}