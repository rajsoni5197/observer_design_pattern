#include<iostream>
#include <vector>
using namespace std;

class Subscribers
{   protected:
    string name ;
    public:
    void update()
    {
        cout<<this->name<<" Iphone 15 has arrived\n";
    }
};
class Raj :public Subscribers
{public:
    Raj()
    {
        this->name = "Raj";
    }
};
class  Ankit :public Subscribers
{public:
    Ankit()
    {
        this->name = "Ankit";
    }
};
class Iphone15
{
    vector<Subscribers*>sub;
    public:
    Iphone15()
    {
        sub.push_back(new Raj());
        sub.push_back(new Ankit());
    }
    void InformSubscribers()
    {
        for(auto ele : sub )
        {
            ele->update();
        }
    }
};
class Client
{
    public:
    Client()
    {
        Iphone15* ip15 = new Iphone15();
        ip15->InformSubscribers();
    }
};

int main()
{
    Client c1;
    return 0;
}