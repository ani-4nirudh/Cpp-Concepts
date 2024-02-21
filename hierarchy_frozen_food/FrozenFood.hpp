#ifndef FROZENFOOD_HPP
#define FROZENFOOD_HPP

class FrozenFood
{
    public:
        float GetWeight();
        float GetPrice();
        void BakeDatShizzUp();
        FrozenFood(float APrice, float AWeight, float ATemperature);
        virtual void Thaw() = 0;
    
    protected:
        float Price;
        float Weight;
        float Temperature;
};

#endif