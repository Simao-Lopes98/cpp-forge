#include <iostream>

using namespace std;

template <typename T>
T add (T a, T b)
{
    return a + b;
}

template <typename T>
class Box {
    private:
        T value;
    public:
        Box (T v);
        void show (void);
};

template <typename T>
Box<T>::Box (T v)
{
    value = v;
}

template <typename T>
void Box <T>::show()
{
    cout << "Value: " << value << "\n";
}


int main (void)
{
    printf ("%d\n", add<int>(5,3));
    printf ("%f\n", add<float>(2.3, 4.1));


    Box myStringBox ("Hello!");
    Box myIntBox (123);

    myStringBox.show();
    myIntBox.show();
    return 0;
}