#include <iostream>
#include <string>

class Invoice {
public:

    Invoice(const std::string& partNumber, const std::string& partDescription, int quantity, int pricePerItem,
            double vatRate = 0.20, double discountRate = 0.0)
        : partNumber_(partNumber), partDescription_(partDescription), quantity_(quantity),
          pricePerItem_(pricePerItem), vatRate_(vatRate), discountRate_(discountRate) {

        if (quantity_ <= 0) {
            quantity_ = 0;
        }
        if (pricePerItem_ <= 0) {
            pricePerItem_ = 0;
        }
        if (vatRate_ < 0.0 || vatRate_ > 1.0) {
            vatRate_ = 0.20; 
        }
        if (discountRate_ < 0.0 || discountRate_ > 1.0) {
            discountRate_ = 0.0; 
        }
    }


    std::string getPartNumber() const {
        return partNumber_;
    }

    void setPartNumber(const std::string& partNumber) {
        partNumber_ = partNumber;
    }

    std::string getPartDescription() const {
        return partDescription_;
    }

    void setPartDescription(const std::string& partDescription) {
        partDescription_ = partDescription;
    }

    int getQuantity() const {
        return quantity_;
    }

    void setQuantity(int quantity) {
        if (quantity > 0) {
            quantity_ = quantity;
        }
    }

    int getPricePerItem() const {
        return pricePerItem_;
    }

    void setPricePerItem(int pricePerItem) {
        if (pricePerItem > 0) {
            pricePerItem_ = pricePerItem;
        }
    }

    double getVatRate() const {
        return vatRate_;
    }

    void setVatRate(double vatRate) {
        if (vatRate >= 0.0 && vatRate <= 1.0) {
            vatRate_ = vatRate;
        }
    }

    double getDiscountRate() const {
        return discountRate_;
    }

    void setDiscountRate(double discountRate) {
        if (discountRate >= 0.0 && discountRate <= 1.0) {
            discountRate_ = discountRate;
        }
    }

    // Calculate and return the invoice amount
    double getInvoiceAmount() const {
        double subtotal = static_cast<double>(quantity_) * pricePerItem_;
        double taxAmount = subtotal * vatRate_;
        double discountAmount = subtotal * discountRate_;
        return subtotal + taxAmount - discountAmount;
    }

private:
    std::string partNumber_;
    std::string partDescription_;
    int quantity_;
    int pricePerItem_;
    double vatRate_;
    double discountRate_;
};


