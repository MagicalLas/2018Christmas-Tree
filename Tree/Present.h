#include<string>
namespace ChristMas
{
    class Present
    {
    private:
        std::string toy;
    public:
        std::string GetPresect(){
            return toy;
        };
        Present(std::string toy){
            this->toy = toy;
        };
    };
} // ChristMas
