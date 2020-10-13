#include <string>
#include <iostream>
#include <compare>
#include <map>

class Test{
private:
    int a = 0;
    int b = 0;
public:
    auto operator<=>(const Test &) const = default;
};

int main()
{
    std::map<Test, int> map;
    map.emplace(Test{}, 0);
    std::cout << map.size();
}