/*
name: jianxin zhu
date: aug/05/2020
*/

#ifndef DOUBLEARRAY_H
#define DOUBLEARRAY_H
#include<iostream>
#include<stdexcept>
#include<initializer_list>

class DoubleArray
{
    
    friend std::ostream& operator<<(std::ostream& output, const DoubleArray& item)
    {
        for(unsigned int i =0; i<item.size; i++)
        {
            output<<item.ptr[i]<<" ";
        }
        output<<std::endl;
        return output;
    }
    friend std::istream& operator>>(std::istream& input, DoubleArray& item)
    {
        for(unsigned int i =0; i<item.size; i++)
        {
            input>>item.ptr[i];
        }
        return input;
    }
    
    public:
    DoubleArray(int rows, int clos)
    :CLO(clos),ROW(rows)
    {
        size = static_cast<size_t>(clos*rows);
        
        ptr = new int[size]{};
    }
    DoubleArray(const DoubleArray& right)
    :ROW(right.ROW),CLO(right.CLO),size(right.size)
    {
        ptr = new int[size]{};
        
        for(unsigned int i =0; i<size; i++)
        {
            ptr[i] = right.ptr[i];
        }
    }
    DoubleArray(std::initializer_list<int>list)
    :size(list.size())
    {
        ptr = new int[size]{};
        int i = 0;
        
       for(auto value : list)
       {
           ptr[i] = value;
           i++;
       }
    }
    ~DoubleArray()
    {
        delete[] ptr;
    }
    size_t getSize() const
    {
        return size;
    }
    
    int& operator()(unsigned int subr,unsigned int subc)
    {
        if((subc<0&&subc>=CLO)||(subr<0&&subc>=ROW))
        {
            throw std::invalid_argument("OUT OF RANGE");
        }
        else
        {
            return ptr[CLO*subr+subc];
        }
    }
    int operator()(unsigned int subr, unsigned int subc) const
    {
         if((subc<0&&subc>=CLO)||(subr<0&&subc>=ROW))
        {
            throw std::invalid_argument("OUT OF RANGE");
        }
        else
        {
            return ptr[CLO*subr+subc];
        }
    }
    DoubleArray& operator=(const DoubleArray& right)
    {
        if(&right != this)
        {
            if(this->size != right.size)
            {
                delete[] ptr;
                size= right.size;
                ptr = new int[size]{};
            }
            
            for(unsigned int i=0; i<size; i++) 
            {
                ptr[i] = right.ptr[i];
            }
            
        }
       return *this;
    }
    
    
    
    private:
    
    int CLO;
    int ROW;
    
    size_t size;
    
    int* ptr;
};
#endif


int main()
{
    DoubleArray a1{2,5};
    DoubleArray a2{1,1};
    std::cout<<"Enter number: "<<std::endl;
    std::cin>>a1;
    
    a2 = a1;
    
    std::cout<<a2;

}
