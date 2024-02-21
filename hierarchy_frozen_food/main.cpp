#include <iostream>
#include "FrozenFood.hpp"
#include "FrozenPizza.hpp"
#include "DeepDish.hpp"

int main(int argc, char* argv[])
{
    // FrozenFood Nuggets(4, 1, 160);  
    // std::cout << "The price of nuggets is: " << Nuggets.GetPrice() << std::endl;
    // std::cout << "The weight of nuggets is: " << Nuggets.GetWeight() << std::endl;
    // Nuggets.BakeDatShizzUp();

    // FrozenFood ChocoLavaCake(-5, -5, -5);
    // std::cout << "The price of nuggets is: " << ChocoLavaCake.GetPrice() << std::endl;
    // std::cout << "The weight of nuggets is: " << ChocoLavaCake.GetWeight() << std::endl;
    // ChocoLavaCake.BakeDatShizzUp();

    FrozenPizza Oetker_Spinat(7, 0.5, 180, 0.5);
    std::cout << "The price of frozen pizza is: " << Oetker_Spinat.GetPrice() << std::endl;
    std::cout << "The weight of frozen pizza is: " << Oetker_Spinat.GetWeight() << std::endl;
    Oetker_Spinat.BakeDatShizzUp();
    std::cout << "The area of frozen pizza is: " << Oetker_Spinat.AreaOfPizza() << " sq. meter." << std::endl;
    Oetker_Spinat.Thaw();

    DeepDishPizza CafeEcstacy(7, 0.5, 200, 0.5, 0.5);
    std::cout << "The price of deep dish is: " << CafeEcstacy.GetPrice() << std::endl;
    std::cout << "The weight of deep dish is: " << CafeEcstacy.GetWeight() << std::endl;
    CafeEcstacy.BakeDatShizzUp();
    std::cout << "The area of deep dish is: " << CafeEcstacy.AreaOfPizza() << " sq. meter." << std::endl;
    std::cout << "The volume of deep dish is: " << CafeEcstacy.VolumeDeepDish() << " cubic meter." << std::endl;
    CafeEcstacy.Thaw();
        
    return EXIT_SUCCESS;
}