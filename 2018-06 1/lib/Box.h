#ifndef BOX_H
#define BOX_H

template <class T>
class Box
{
public:
    //Copy constructor
    Box(const Box<T>& other);

    //Copy assignment operator
    Box<T>& operator=(const Box<T>& rhs);

    //Destructor
    ~Box();

    Box(int size = 10){
        _l = 0; _b = 0; _h = 0; _size = size;
        if(_size > 0)
            _array = new T[_size];
    }

    int size() { return _size; }

private:
    T* _array;
    int _size;
    int _l, _b, _h;
};

//Copy constructor
template <class T>
Box<T>::Box(const Box<T>& other){
    _size = 0;      //Tell assignment operator that this is a new object
    *this = other;  //Call the copy assignment operator
}

//Copy assignment operator
template <class T>
Box<T>& Box<T>::operator=(const Box<T>& rhs){
    if(this != &rhs){       //Check for self-assignment
        if(_size > 0){        //If the array is not empty
            delete[] _array;    //Free the existing array
        }

        //Copy the members
        _size = rhs._size;
        _l = rhs._l;
        _b = rhs._b;
        _h = rhs._h;
        _array = new T[_size];
        for(int i = 0; i < _size; i++){
            _array[i] = rhs._array[i];
        }
    }
    return *this;
}

//Destructor
template <class T>
Box<T>::~Box(){
    delete[] _array;  //Free the dynamically allocated memory

    //(Regular members are automatically destroyed)
}


#endif // BOX_H
