
class ClassA
{
public:
    ClassA(int a) : val(a) {}
    ~ClassA() {}
    void setA(int a);
    int getA() const;
private:
    int val;
};