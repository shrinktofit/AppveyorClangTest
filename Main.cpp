#include <string>
#include <iostream>
#include <compare>
#include <map>

class Test{
private:
    int a = 0;
    int b = 0;
public:
    auto operator<=>(const Test &that_) const {
        if (auto cmp = this->a <=> that_.a; cmp != 0) {
            return cmp;
        }
        if (auto cmp = this->b <=> that_.b; cmp != 0) {
            return cmp;
        }
        return std::strong_ordering::equal;
    }
};

int main()
{
    std::map<Test, int> map;
    map.emplace(Test{}, 0);
    std::cout << map.size();
}