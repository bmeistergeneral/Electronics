#include <iostream>
using namespace std;
class Electronics {
    private:
    string name;
    int weight;
    string color;
    int power;
    Electronics(string name, int weight, string color, int power) {
        this->name = name;
        this->weight = weight;
        this->color = color;
        this->power = power;
    }
    string str1 = to_string(weight);
    string str2 = to_string(power);
    public:
    Electronics() {
    
    }
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
    void setWeight(int w) {
        weight = w;
    }
    int getWeight() {
        return weight;
    }
    void setColor(string c) {
        color = c;
    }
    string getColor() {
        return color;
    }
    int getPower() {
        return power;
    }
    void setPower(int p) {
        power = p;
    }
};
class computer : public Electronics {
private:
string name;
int weight;
string color;
int power;
computer(string name, int weight, string color, int power) {
this->name = name;
this->weight = weight;
this->color = color;
this->power = power;
}
void details() {
    
}

};
int main() {
    Electronics mac;

}