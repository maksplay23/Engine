#include <iostream>

struct Base {
    virtual void info() const = 0;
};

struct Window : Base {
    void info() const {
        std::cout << "info";
    }
};

struct D3DX : Base {
    void info() const {
        std::cout << "d3dx";
    }
};

int main()
{
    Base* window = new Window;
    Base* d3dx = new D3DX;

    window->info();
    d3dx->info();
}