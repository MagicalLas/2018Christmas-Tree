#include "./Tree.h"
#include "./Present.h"
int main()
{
    auto computer = ChristMas::Present("Computer");
    auto nintendo = ChristMas::Present("Nintendo");
    auto ps4 = ChristMas::Present("Play Station 4");
    auto lego = ChristMas::Present("Lego Block");

    auto ChristMasTree = ChristMas::Tree<ChristMas::Present>(computer);

    ChristMasTree.SetLeft(nintendo);
    ChristMasTree.SetRight(ps4);

    ChristMasTree.GetLeft()->SetLeft(lego);

    return 0;
}
