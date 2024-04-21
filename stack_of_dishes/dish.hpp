#include <iostream>

using namespace std;

class Dish {
  private:
    string description;
      
  public:

  	Dish() {

  	}
  	
    Dish(string description) {
      this->description = description;
    }

    string get_description() {
      return this->description;
    }
};
