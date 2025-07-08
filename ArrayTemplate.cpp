#include <iostream>
#include <string>
#include <array>
using namespace std;



template<class T>
class Array {
private:
 T *data;
 int size;
public:
 Array(T*, int);
 void showFirst();
 void populate ();
 void display ();
 void displayArray (int);
 void reverse ();
 void sortAscending ();
 void sortDescending ();
 void sum ();
 
};



template<class T>
Array<T>::Array(T *d, int s) {
 data = d;
 size = s;
}


template<class T>
void Array<T>::showFirst(){
 cout<<"First item on the list is "<<data[0]<<endl;
}



template<class T>
void Array<T>::populate()
{
  cout<<"Please populate the array" <<endl;
  for (int pos = 0 ; pos <size ; pos ++)
    {
        cout<<"Enter value"<<endl;
        cin>>data[pos];
    }
}


template<class T>
void Array<T>::display ()

{
for (int pos = 0 ; pos <size ; pos ++)
    {
        cout<<data[pos]<<endl;
    }
    
}


template<class T>
void Array<T>::displayArray (int poss)

{
     cout<<data[poss]<<endl;
    
    
}



template<class T>
void Array<T>::reverse ()

{
    for (int pos= size ; pos<size ; pos++)
   {
       int temp = data[pos];
       data[pos]=data[size];
       --size;
       
   }
    
}



template<class T>
void Array<T>::sortAscending ()

{
    T temp;
    int s=size-1;
    for(int i=0;i<s;i++)
    for(int y =0;y<s;y++)
    if(data[y]>data[y+1])
    {
        temp=data[y];
        data[y]=data[y+1];
        data[y+1]=temp;
    }
}



template<class T>
void Array<T>::sortDescending ()

{
    sortAscending ();
    reverse ();
    
}




template<class T>
void Array<T>::sum ()
{
    T total = 0;
    for (int i = 0; i < size; i++)
    { total += data[i];}
}







class director
{
 
  public :
  int age;
  string name;
  void setdirector (int,string);
  friend ostream & operator <<(ostream&, const director);
};


void director::setdirector(int age,string name)
{
 this->age=age;
 this->name=name;
}


ostream& operator<<(ostream& cout ,const director& kamohelo )
{
    
    cout<<"age of director is :"<<kamohelo.age<<' '<<"name of director is :"<<kamohelo.name<<endl;
    return cout;
}







int main()
{
    
    const int sz=3;
    int shoes[sz];
    float books [sz];
    char pens [sz];
    director mosa [sz];
    mosa[0].setdirector(12,"meraba");
    mosa[1].setdirector(13,"zungu");
    mosa[2].setdirector(14,"mepeza");
    mosa[3].setdirector(15,"Ndabezitha");
    
    
    Array<float> floatArray(books, sz);
    Array<int>intarray(shoes,sz);
    Array<char>chararray(pens,sz);
    Array<director>classarray(mosa,sz);
    
    intarray.populate();
    intarray.display();
    intarray.displayArray(2);
    intarray.reverse();
    intarray.sortAscending();
    intarray.sortDescending();
    intarray.sum();
    
    
    floatArray.populate();
    floatArray.display();
    floatArray.displayArray(2);
    floatArray.reverse();
    floatArray.sortAscending();
    floatArray.sortDescending();
    floatArray.sum();
    
    
    
    chararray.populate();
    chararray.display();
    chararray.displayArray(2);
    chararray.reverse();
    chararray.sortAscending();
    chararray.sortDescending();
    chararray.sum();
    
    
    /*
    classarray.showFirst();
    classarray.displayArray(2);
*/


    return 0;
}
















