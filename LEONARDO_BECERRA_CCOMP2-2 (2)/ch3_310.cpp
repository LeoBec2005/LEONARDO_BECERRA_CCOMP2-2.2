#include <iostream>
#include "ch3_310.h"
int main() {
    // Create an Invoice object
    Invoice invoice("12345", "Widget", 10, 50);

    // Display invoice details
    std::cout << "Part Number: " << invoice.getPartNumber() << std::endl;
    std::cout << "Part Description: " << invoice.getPartDescription() << std::endl;
    std::cout << "Quantity: " << invoice.getQuantity() << std::endl;
    std::cout << "Price Per Item: $" << invoice.getPricePerItem() << std::endl;
    std::cout << "VAT Rate: " << invoice.getVatRate() << std::endl;
    std::cout << "Discount Rate: " << invoice.getDiscountRate() << std::endl;

    // Calculate and display the invoice amount
    std::cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << std::endl;

    return 0;
}