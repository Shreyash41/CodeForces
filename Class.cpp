#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
    int ag, std;
    string fn, ln;
    public:
    void set_age(int age){
        ag=age;
    }
    int get_age() {
        return ag;
    }
    
    string get_first_name(){
    return fn;
    }
     string get_last_name(){
    return ln;
    }
    void set_first_name(string first_name){
        fn=first_name;
    }
    void set_last_name(string last_name){
        ln=last_name;
    }
    int get_standard(){
        return std;
    }
    void set_standard(int standard){
        std=standard;
    } 
    string to_string(){
         cout<<ag<<","<<fn<<","<<ln<<","<<std;
    return " ";
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return ;
}
