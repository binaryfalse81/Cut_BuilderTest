#include <iostream>
#include <string>
using namespace std;

class Cut
{
public:
    class Builder
    {
    public:
        Builder& setStyle(string style)
        {
            this->style = style;
            return *this;
        }
        Builder& setFront(int front)
        {
            this->front = front;
            return *this;
        }
        Builder& setBack(int back)
        {
            this->back = back;
            return *this;
        }
        Builder& setSide(int side)
        {
            this->side = side;
            return *this;
        }

        Cut build()
        {
            if (style.size() <= 0) cout << "style �� Setting �Ǿ�� �մϴ�." << endl;
            if (front <= 0) cout << "front �� Setting �Ǿ�� �մϴ�." << endl;
            if (back <= 0) cout << "back �� Setting �Ǿ�� �մϴ�." << endl;
            if (side <= 0) cout << "side �� Setting �Ǿ�� �մϴ�." << endl;
            return Cut{ style, front, back, side };
        }

    private:
        string style;
        int front;
        int back;
        int side;
    };

    void showInfo(void)
    {
        cout << style << endl;
        cout << front << endl;
        cout << back << endl;
        cout << side << endl;
    }

private:
    Cut(string style, int front, int back, int side)
        : style{ style }, front{ front }, back{ back }, side{ side }
    {}

    string style;
    int front;
    int back;
    int side;
};

int main()
{
    Cut cut = Cut::Builder()
        .setStyle("bts")
        .setBack(1)
        .setFront(2)
        .setSide(3)
        .build();

    cut.showInfo();
}