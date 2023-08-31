#include <iostream>

class Pizza {

private:
  int m_size_cm{30};
  bool m_tomato = false;
  bool m_cheese = false;

  Pizza() = default;

public:
  class PizzaBuilder {

  private:
    Pizza *m_pizza = new Pizza();

  public:
    
    PizzaBuilder &setSize(int size) {
      m_pizza->m_size_cm = size;
      return *this;
    }
    PizzaBuilder &setTomato(bool tomatoes) {
      m_pizza->m_tomato = tomatoes;
      return *this;
    }
    PizzaBuilder &setChese(bool chese) {
      m_pizza->m_cheese = chese;
      return *this;
    }
    Pizza* build(){
      return m_pizza;
    }
  };

  void Print(){
    std::cout<<"size : "<<m_size_cm<<" tomato : "<<m_tomato<<" cheese : "<<m_cheese;
  }
};

int main() {

  Pizza *pizza = Pizza::PizzaBuilder().setSize(50).setTomato(true).setChese(true).build();
  pizza->Print();
  
  return 0;
}