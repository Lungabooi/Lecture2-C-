#include <iostream>
#include <vector>
using namespace std;

class Student
{
    string m_first = "first";
    string m_last  = "last";
    int    m_id    =0;
    float  m_avg   =0;

public:

    Student(){}

    Student(string first, string last, int id, float avg)
       :m_first (first)
       , m_last (last)
       , m_id   (id)
       , m_avg  (avg)
    {

    }
    int getAvg()
    {
        return m_avg;
    }

    int getId()
    {
        return m_id;
    }

    string getFirst()
    {
        return m_first;
    }
    string getLast()
    {
        return m_last;
    }
    void print()
    {
      cout<< m_id <<" "
      << m_first << " "
      << m_last << " "
      << m_avg;
    }
};

int main(int argc, char * argv[])
{
  Student s1;
  Student s2("Lunga", "Booi", 1, 4.9);
  Student s3("Jane", "Doe", 20230101, 87.9);

  s3.print();

    return 0;
}
