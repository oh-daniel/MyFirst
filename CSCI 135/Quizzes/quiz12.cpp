//Daniel Oh Quiz 12


using namespace std;

class Customer {
private:
    string name;
    string unique_id;
public:
    Customer();
    Customer(string name, string unique_id);
    string get_name();
    string get_unique_id();
    void set_name(string name);
    void set_unique_id(string unique_id);
};