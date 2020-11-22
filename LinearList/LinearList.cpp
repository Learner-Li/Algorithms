#include <iostream>
#include <cstdlib>
using namespace std;

const int MaxSize = 100;
template <class DataType>
class LinearList
{
public:
    LinearList(){length=0;}            //
    LinearList(DataType a[],int n);    //
    ~LinearList(){}                    //
    int Length(){return length;}    //
    DataType Get(int i);            //
    int Locate(DataType x);         //
    void Insert(int i,DataType x);  //
    DataType Delete(int i);         //
    void PrintList();               //
private:
    DataType data[MaxSize];         //
    int length;                     //
};

template <class DataType>
LinearList<DataType>::LinearList(DataType a[],int n)
{
    if(n>MaxSize) throw "wrong parameter";
    for(int i=0;i<n;i++)
        data[i]=a[i];
    length=n;
}

template <class DataType>
DataType LinearList<DataType>::Get(int i)
{
    if(i<1 && i>length) throw "wrong Location";
    else return data[i-1];
}

template <class DataType>
int LinearList<DataType>::Locate(DataType x)
{
    for(int i=0;i<length;i++)
        if(data[i]==x) return i+1;
    return 0;
}

template <class DataType>
void LinearList<DataType>::Insert(int i,DataType x)
{
    if(length>=MaxSize) throw "Overflow";
    if(i<1 || i>length+1) throw "Location";
    for(int j=length;j>=i;j--)
        data[j]=data[j-1];
    data[i-1]=x;
    length++;
}

template <class DataType>
DataType LinearList<DataType>::Delete(int i)
{
    int x;
    if(length==0) throw "Underflow";
    if(i<1 || i>length) throw "Location";
    x = data[i-1];
    for(int j=i;j<length;j++)
        data[j-1] = data[j];
    length--;
    return x;
}

template <class DataType>
void LinearList<DataType>::PrintList()
{
    for(int i=0;i<length;i++)
        cout<<data[i]<<endl;
}

int main()
{
    LinearList<int> p;
    p.Insert(1,5);
    p.Insert(2,9);
    p.PrintList();
    p.Insert(2,3);
    cout<<p.Length()<<endl;
    p.PrintList();
    cout<<p.Get(3)<<endl;
    p.Delete(2);
    p.PrintList();
    system("PAUSE");
    return 0;
}