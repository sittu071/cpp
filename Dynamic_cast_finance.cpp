#include <iostream>

// Base class representing a financial instrument
class Instrument {
public:
  virtual void PrintDetails() const {
    std::cout << "Base Instrument\n";
  }
};

// Derived class representing a stock instrument
class Stock : public Instrument {
public:
  void PrintDetails() const override {
    std::cout << "Stock Instrument\n";
  }
};

// Derived class representing a bond instrument
class Bond : public Instrument {
public:
  void PrintDetails() const override {
    std::cout << "Bond Instrument\n";
  }
};

// Function to process a financial instrument
void ProcessInstrument(const Instrument* instrument) {
  // Attempt to dynamic_cast to Stock
  const Stock* stock = dynamic_cast<const Stock*>(instrument);
  if (stock) {
    std::cout << "Processing Stock:\n";
    stock->PrintDetails();
    // Perform additional stock-specific processing...
    return;
  }

  // Attempt to dynamic_cast to Bond
  const Bond* bond = dynamic_cast<const Bond*>(instrument);
  if (bond) {
    std::cout << "Processing Bond:\n";
    bond->PrintDetails();
    // Perform additional bond-specific processing...
    return;
  }

  // Default case for unrecognized instruments
  std::cout << "Unknown Instrument:\n";
  instrument->PrintDetails();
}

int main() {
  Instrument* instrument1 = new Stock();
  Instrument* instrument2 = new Bond();
  Instrument* instrument3 = new Instrument();

  ProcessInstrument(instrument1);  // Process Stock
  ProcessInstrument(instrument2);  // Process Bond
  ProcessInstrument(instrument3);  // Process Base Instrument

  delete instrument1;
  delete instrument2;
  delete instrument3;

  return 0;
}
