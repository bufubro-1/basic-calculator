class Calculator {
   private:
    double total;
    double lastItem;
    char opertoring;
    bool errorhandling;
    int size;

    public:
    double nums[size];
    void setFirsrItem(double item);
    void setIslem(char opertoring);
    void reset();
    double hesapla();
    void mistakes(bool errorhandling);
};
#ifndef CALCULATOR_BASICS_H
#define CALCULATOR_BASICS_H

#endif //CALCULATOR_BASICS_H